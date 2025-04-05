#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int math_score;
    int alphabet_score;
};

void learnAlphabets() {
    char alphabets[47][5] = {
        "A", "Aa", "I", "Ii", "U", "Uu", "Ru", "E", "Ai", "O", "Au", "Am", "Ah",
        "Ka", "Kha", "Ga", "Gha", "Nga",
        "Cha", "Chha", "Ja", "Jha", "Nya",
        "Ta", "Tha", "Da", "Dha", "Na",
        "Ta", "Tha", "Da", "Dha", "Na",
        "Pa", "Pha", "Ba", "Bha", "Ma",
        "Ya", "Ra", "La", "Va", "Sha",
        "Shha", "Sa", "Ha", "La"
    };
    char examples[47][15] = {
        "Aam", "Aadmi", "Iti", "Eeti", "Upar", "Oon", "Rushi", "Ek", "Aishwarya", "Ojas", "Aushadhi", "Amrut", "Aho",
        "Kamal", "Khushi", "Gagan", "Ghadi", "Ngan",
        "Chai", "Chhatri", "Jal", "Jharna", "Nyaay",
        "Tapeli", "Thali", "Daan", "Dharma", "Naam",
        "Tadka", "Thanda", "Dakshin", "Dhamal", "Nadi",
        "Pani", "Phool", "Baat", "Bhav", "Maa",
        "Yatra", "Rasta", "Laddu", "Vahan", "Shakti",
        "Shhaastra", "Saat", "Hari", "Lakshmi"
    };
    int i, choice;

    printf("\n=== Learn Gujarati Alphabets ===\n");
    printf("Available Alphabets:\n");
    for (i = 0; i < 47; i++) {
        printf("%2d. %s\n", i + 1, alphabets[i]);
    }
    printf("Enter the number to learn an alphabet (1-47): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 47) {
        printf("\nAlphabet: %s\n", alphabets[choice - 1]);
        printf("Example Word: %s\n", examples[choice - 1]);
        printf("Practice writing '%s' on paper and press Enter to continue...\n", alphabets[choice - 1]);
        getchar();
        getchar();
    } else {
        printf("Invalid choice!\n");
    }
}

void learnNumbers() {
    int num;
    printf("\n=== Learn Numbers in Gujarati ===\n");
    printf("Enter a number (1-30) to learn: ");
    scanf("%d", &num);

    switch (num) {
        case 1: printf("1 - Ek\n"); break;
        case 2: printf("2 - Be\n"); break;
        case 3: printf("3 - Tran\n"); break;
        case 4: printf("4 - Chaar\n"); break;
        case 5: printf("5 - Paanch\n"); break;
        case 6: printf("6 - Chha\n"); break;
        case 7: printf("7 - Saat\n"); break;
        case 8: printf("8 - Aath\n"); break;
        case 9: printf("9 - Nav\n"); break;
        case 10: printf("10 - Das\n"); break;
        case 11: printf("11 - Agiyar\n"); break;
        case 12: printf("12 - Baar\n"); break;
        case 13: printf("13 - Ter\n"); break;
        case 14: printf("14 - Chaud\n"); break;
        case 15: printf("15 - Pandar\n"); break;
        case 16: printf("16 - Sol\n"); break;
        case 17: printf("17 - Satra\n"); break;
        case 18: printf("18 - Athra\n"); break;
        case 19: printf("19 - Ognis\n"); break;
        case 20: printf("20 - Vis\n"); break;
        case 21: printf("21 - Ekvis\n"); break;
        case 22: printf("22 - Bavis\n"); break;
        case 23: printf("23 - Trevis\n"); break;
        case 24: printf("24 - Chovis\n"); break;
        case 25: printf("25 - Pachvis\n"); break;
        case 26: printf("26 - Chhavvis\n"); break;
        case 27: printf("27 - Satavis\n"); break;
        case 28: printf("28 - Athavis\n"); break;
        case 29: printf("29 - Ognatis\n"); break;
        case 30: printf("30 - Tis\n"); break;
        default: printf("Please enter a number between 1 and 30!\n"); break;
    }
}

void mathExercise(struct Student *student) {
    int choice, a, b, answer, correct;
    printf("\n=== Mathematics Exercises ===\n");
    printf("1. Jod (Addition)\n2. Badbaki (Subtraction)\n3. Gunan (Multiplication)\n4. Bhagakar (Division)\n");
    printf("Choose an operation (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch (choice) {
        case 1:
            printf("%d ne %d no Jod = ? ", a, b);
            scanf("%d", &answer);
            correct = (answer == (a + b));
            break;
        case 2:
            printf("%d ma thi %d ni Badbaki = ? ", a, b);
            scanf("%d", &answer);
            correct = (answer == (a - b));
            break;
        case 3:
            printf("%d ne %d no Gunan = ? ", a, b);
            scanf("%d", &answer);
            correct = (answer == (a * b));
            break;
        case 4:
            if (b == 0) {
                printf("Bhagakar ma shunya nathi chali sakta!\n");
                return;
            }
            printf("%d no %d thi Bhagakar = ? ", a, b);
            scanf("%d", &answer);
            correct = (answer == (a / b));
            break;
        default:
            printf("Invalid choice!\n");
            return;
    }

    if (correct) {
        printf("Sachu!\n");
        student->math_score += 10;
    } else {
        printf("Galat! Phari thi prayas karo.\n");
    }
}

void convertToSignLanguage() {
    char word[15];
    printf("\n=== Convert Gujarati Word to Sign Language ===\n");
    printf("Enter a Gujarati word (e.g., Maa, Pani, Jal, Ek, Saat): ");
    scanf("%s", word);

    if (strcmp(word, "Maa") == 0) {
        printf("Sign for 'Maa': Right hand near chin, fingers together, palm facing inward.\n");
    } else if (strcmp(word, "Pani") == 0) {
        printf("Sign for 'Pani': Right hand in 'A' shape near mouth, tilt as if drinking.\n");
    } else if (strcmp(word, "Jal") == 0) {
        printf("Sign for 'Jal': Same as 'Pani' - Right hand in 'A' shape near mouth, tilt.\n");
    } else if (strcmp(word, "Ek") == 0) {
        printf("Sign for 'Ek': Right hand, index finger up, others folded.\n");
    } else if (strcmp(word, "Saat") == 0) {
        printf("Sign for 'Saat': Right hand, all fingers up except thumb and pinky.\n");
    } else {
        printf("Word not found in sign language dictionary! Try another.\n");
    }
    printf("Press Enter to continue...\n");
    getchar();
    getchar();
}

void reportCard(struct Student student) {
    printf("\n=== Report Card ===\n");
    printf("Student Name: %s\n", student.name);
    printf("Math Score: %d/100\n", student.math_score);
    printf("Alphabet Score: %d/100\n", student.alphabet_score);
}

int main() {
    struct Student student = {"", 0, 0};
    int choice;

    printf("Enter student name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "\n")] = 0;

    while (1) {
        printf("\n=== Learning App for Deaf and Mute ===\n");
        printf("1. Learn Gujarati Alphabets\n");
        printf("2. Learn Numbers\n");
        printf("3. Math Exercises\n");
        printf("4. Convert Gujarati to Sign Language\n");
        printf("5. View Report Card\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: learnAlphabets(); student.alphabet_score += 10; break;
            case 2: learnNumbers(); student.alphabet_score += 5; break;
            case 3: mathExercise(&student); break;
            case 4: convertToSignLanguage(); break;
            case 5: reportCard(student); break;
            case 6: printf("Goodbye!\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
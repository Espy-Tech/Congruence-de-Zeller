# Congruence-de-Zeller
Implémentation C++ moderne de la congruence de Zeller - algorithme historique calculant le jour de la semaine pour toute date avec précision mathématique.
# 🔢 Congruence de Zeller - Calculateur de Jours

[![C++](https://img.shields.io/badge/C++-Modern-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)]()

## 📖 Description

Implémentation moderne en C++ de la **congruence de Zeller**, un algorithme mathématique historique développé en 1882 par Christian Zeller. Ce programme calcule avec précision le jour de la semaine pour n'importe quelle date du calendrier grégorien.

> *"L'élégance des mathématiques du 19ème siècle rencontrant la puissance de la programmation moderne"*

## ✨ Fonctionnalités

- 🎯 **Calcul précis** - Détermination exacte du jour de la semaine
- 📅 **Calendrier complet** - Support de toutes les dates grégoriennes
- 🐸 **Gestion des années bissextiles** - Automatique et fiable
- ✅ **Validation des dates** - Vérification de la cohérence des entrées
- 🚀 **Performance optimale** - Calcul en temps constant
- 🎨 **Interface intuitive** - Saisie simple et résultats clairs

## 🧮 L'Algorithme de Zeller

### Formule Mathématique
```math
h = \left(q + \left\lfloor\frac{13(m+1)}{5}\right\rfloor + K + \left\lfloor\frac{K}{4}\right\rfloor + \left\lfloor\frac{J}{4}\right\rfloor - 2J\right) \mod 7
```


### Variables
- **q** : Jour du mois (1-31)
- **m** : Mois ajusté (Mars=3, ..., Février=14)
- **K** : Année dans le siècle (année % 100)
- **J** : Siècle (année / 100)

## 🚀 Installation et Utilisation

### Compilation
```bash
g++ -o zeller main.cpp
# ou
clang++ -o zeller main.cpp
```
### Exécution
```bash
./zeller
```
### Exemple d'utilisation
```text
   Congruence de Zeller
===========================
Year = 2024
Month = 10
Day = 21
📅 Le 21/10/2024 est un Lundi ✅
```
### 📁 Structure du Projet
```text
Congruence-de-Zeller/
         # Code source principal
      # Documentation détaillée
├── tests/
│   └── test_dates.txt    # Dates de test
├── LICENSE
└── README.md
```
### 🧪 Tests et Validation

Le programme a été rigoureusement testé avec des dates historiques :

Date	Résultat	Validation
14/07/1789	Mardi	✅ Prise de la Bastille
20/07/1969	Dimanche	✅ Alunissage Apollo 11
01/01/2000	Samedi	✅ Passage au 21ème siècle
29/02/2024	Jeudi	✅ Date bissextile
### 🛠️ Dépendances

Compilateur C++ : GCC ≥ 8.0, Clang ≥ 7.0, ou MSVC ≥ 2019

Bibliothèques : Aucune dépendance externe

Système : Multiplateforme (Windows, Linux, macOS)

### 🤝 Contribution
Les contributions sont les bienvenues ! Pour contribuer :

🍴 Fork le projet

🌿 Créer une branche feature (git checkout -b feature/AmazingFeature)

💾 Commit les changements (git commit -m 'Add AmazingFeature')

📤 Push vers la branche (git push origin feature/AmazingFeature)

🔀 Ouvrir une Pull Request

📜 Licence
Ce projet est distribué sous licence MIT. Voir le fichier LICENSE pour plus de détails.

## 👨‍💻 Auteur
 # EspyTech

GitHub: [@Espy-Tech](https://github.com/Espy-Tech/Congruence-de-Zeller)

LinkedIn: [@Espy-Tech](https://www.linkedin.com/in/ibrahim-samake-18629038b/)

#### 🌟 Historique des Versions
1.0.0 (2024) - Version initiale avec implémentation complète

### 🙏 Remerciements
Christian Zeller (1822-1899) pour son algorithme génial

La communauté C++ pour les bonnes pratiques

Tous les contributeurs et testeurs

<div align="center">
⭐ Si ce projet vous est utile, n'hésitez pas à lui donner une étoile !

"Les mathématiques sont la reine des sciences et l'arithmétique est la reine des mathématiques." - Carl Friedrich Gauss

</div> ```

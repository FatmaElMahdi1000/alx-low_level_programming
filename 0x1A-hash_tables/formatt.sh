#!/bin/bash

# Step 1: Create a .clang-format file with settings approximating Betty's style
cat << EOF > .clang-format
BasedOnStyle: LLVM
IndentWidth: 4
TabWidth: 4
UseTab: Never
AllowShortFunctionsOnASingleLine: All
AlignAfterOpenBracket: AlwaysBreak
AlignConsecutiveDeclarations: true
BreakBeforeBraces: Attach
IndentCaseLabels: false
ColumnLimit: 80
AccessModifierOffset: -4
NamespaceIndentation: None
PointerBindsToType: false
SpacesInParentheses: false
SpacesInSquareBrackets: false
SpacesInAngles: false
SpaceBeforeAssignmentOperators: true
ContinuationIndentWidth: 4
ConstructorInitializerIndentWidth: 4
DerivePointerAlignment: false
EOF

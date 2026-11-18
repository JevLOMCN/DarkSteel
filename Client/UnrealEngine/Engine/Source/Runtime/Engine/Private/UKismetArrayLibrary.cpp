// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 88

// StaticClass @ 147d5de90

UClass * __cdecl UKismetArrayLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetArrayLibrary",
               &Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton,
               StaticRegisterNativesUKismetArrayLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetArrayLibrary>,
               InternalVTableHelperCtorCaller<UKismetArrayLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton;
}

// UKismetArrayLibrary @ 147d79bd0

UKismetArrayLibrary * __thiscall
UKismetArrayLibrary::UKismetArrayLibrary(UKismetArrayLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetArrayLibrary__6B_;
  return this;
}

// UKismetArrayLibrary @ 147d79c00

UKismetArrayLibrary * __thiscall
UKismetArrayLibrary::UKismetArrayLibrary(UKismetArrayLibrary *this,FObjectInitializer *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_38;
  FBlueprintWarningDeclaration local_28;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetArrayLibrary__6B_;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"GetOutOfBoundsWarning",
                      L"Array read access out of bounds");
  local_28.WarningIdentifier = GetOutOfBoundsWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"SetOutOfBoundsWarning",
                      L"Array assignment access out of bounds");
  local_28.WarningIdentifier = SetOutOfBoundsWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"InsertOutOfBoundsWarning",
                      L"Array insertion out of bounds");
  local_28.WarningIdentifier = InsertOutOfBoundsWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"RemoveOutOfBoundsWarning",
                      L"Array removal out of bounds");
  local_28.WarningIdentifier = RemoveOutOfBoundsWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"ResizeArrayNegativeWarning",
                      L"Array resized to negative size");
  local_28.WarningIdentifier = ResizeArrayNegativeWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"SwapElementsInArrayWarning",
                      L"Array swap access out of bounds");
  local_28.WarningIdentifier = SwapElementsInArrayWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"RandomAccessToEmptyArrayWarning",
                      L"Random access to empty array");
  local_28.WarningIdentifier = RandomAccessToEmptyArrayWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetArrayLibrary",L"ReachedMaximumContainerSizeWarning",
                      L"Container has reached maximum size");
  local_28.WarningIdentifier = ReachedMaximumContainerSizeWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UKismetArrayLibrary @ 147d7ba30

void __thiscall UKismetArrayLibrary::~UKismetArrayLibrary(UKismetArrayLibrary *this)

{
  *(undefined ***)this = &___7UKismetArrayLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Array_Add @ 147d84e80

int __cdecl
UKismetArrayLibrary::Array_Add(TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x299,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// Array_Clear @ 147d84ec0

void __cdecl UKismetArrayLibrary::Array_Clear(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_Find @ 147d84f00

int __cdecl
UKismetArrayLibrary::Array_Find(TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2f3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// Array_Get @ 147d84f40

void __cdecl
UKismetArrayLibrary::Array_Get
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2e1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_Insert @ 147d84f80

void __cdecl
UKismetArrayLibrary::Array_Insert
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2a6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_IsEmpty @ 147d84fc0

bool __cdecl UKismetArrayLibrary::Array_IsEmpty(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2cc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// Array_IsNotEmpty @ 147d85000

bool __cdecl UKismetArrayLibrary::Array_IsNotEmpty(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2d3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Array_IsValidIndex @ 147d85040

bool __cdecl
UKismetArrayLibrary::Array_IsValidIndex
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x300,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// Array_LastIndex @ 147d85080

int __cdecl UKismetArrayLibrary::Array_LastIndex(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2da,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// Array_Length @ 147d850c0

int __cdecl UKismetArrayLibrary::Array_Length(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2c5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// Array_Random @ 147d85100

void __cdecl
UKismetArrayLibrary::Array_Random
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x307,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_RandomFromStream @ 147d85140

void __cdecl
UKismetArrayLibrary::Array_RandomFromStream
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FRandomStream *param_2,int *param_3,
          int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x30d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_Remove @ 147d85180

void __cdecl
UKismetArrayLibrary::Array_Remove(TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2ac,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_RemoveItem @ 147d851c0

bool __cdecl
UKismetArrayLibrary::Array_RemoveItem(TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2b2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// Array_Set @ 147d85200

void __cdecl
UKismetArrayLibrary::Array_Set
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2e7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_Shuffle @ 147d85240

void __cdecl UKismetArrayLibrary::Array_Shuffle(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Array_Swap @ 147d85280

void __cdecl
UKismetArrayLibrary::Array_Swap
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2ed,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FilterArray @ 147d9c230

void __cdecl
UKismetArrayLibrary::FilterArray
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,TSubclassOf<AActor> param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong lVar8;
  int iVar9;
  longlong local_28 [2];
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar9 = 0;
  do {
    if ((iVar9 < 0) || (param_1->ArrayNum <= iVar9)) {
      return;
    }
    lVar8 = *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8);
    if (lVar8 != 0) {
      pUVar7 = *(UObject **)param_2.Class.field0_0x0;
      local_28[0] = lVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UObject *)0x0)) {
        if (pUVar7 != (UObject *)0x0) goto LAB_147d9c2e6;
LAB_147d9c314:
        pUVar7 = (UObject *)0x0;
      }
      else {
        UE::GC::MarkAsReachable(pUVar7);
LAB_147d9c2e6:
        lVar8 = local_28[0];
        pUVar6 = Z_Construct_UClass_AActor_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_147d9c314;
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147d9c314;
      }
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
        pFVar2 = (param_3->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
           ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar5 + 1;
        *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

// GenericArray_Add @ 147d9faf0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UKismetArrayLibrary::GenericArray_Add(void *param_1,FArrayProperty *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  EArrayPropertyFlags EVar11;
  void *pvVar12;
  ForAnyElementType FVar13;
  void *_Dst;
  size_t _Size;
  FString local_58;
  FString local_48;
  
  if (param_1 == (void *)0x0) {
    return -1;
  }
  EVar11 = param_2->ArrayFlags;
  uVar7 = (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar2 = param_2->Inner;
  iVar8 = pFVar2->ElementSize;
  _Size = (size_t)iVar8;
  if ((iVar8 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  if ((pFVar2 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  FVar5 = ReachedMaximumContainerSizeWarning;
  EVar11 = EVar11 & UsesMemoryImageAllocator;
  if (*(int *)((longlong)param_1 + 8) < 0x7fffffff) {
    pFVar3 = param_2->Inner;
    iVar9 = *(int *)((longlong)param_1 + 8);
    iVar1 = iVar9 + 1;
    *(int *)((longlong)param_1 + 8) = iVar1;
    if (EVar11 == None) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow(param_1,iVar9,iVar8,uVar7);
      }
    }
    else if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(param_1,iVar9,iVar8,uVar7);
    }
    pvVar12 = (void *)0x0;
    _Dst = pvVar12;
    if (*(int *)((longlong)param_1 + 8) != 0) {
      uVar10 = *(ulonglong *)param_1;
      if ((EVar11 != None) && ((uVar10 & 1) != 0)) {
        uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
      }
      _Dst = (void *)(_Size * (longlong)iVar9 + uVar10);
    }
    if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,_Dst);
    }
    else {
      memset(_Dst,0,_Size);
    }
    if (*(int *)((longlong)param_1 + 8) != 0) {
      uVar10 = *(ulonglong *)param_1;
      if ((EVar11 != None) && ((uVar10 & 1) != 0)) {
        uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
      }
      pvVar12 = (void *)(_Size * (longlong)iVar9 + uVar10);
    }
    (**(code **)(pFVar3->_padding_ + 0x100))(pFVar3,pvVar12,param_3);
  }
  else {
    bVar6 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_58);
    }
    else {
      ::FString::FString(&local_58,L"None");
    }
    ::FString::PrintfImpl
              (&local_48,L"Attempted add to array \'%s\' beyond the maximum supported capacity!");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar13.Data = local_48.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar13.Data,Warning,FVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar9 = -1;
  }
  return iVar9;
}

// GenericArray_AddUnique @ 147d9fd70

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UKismetArrayLibrary::GenericArray_AddUnique(void *param_1,FArrayProperty *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  EArrayPropertyFlags EVar11;
  void *pvVar12;
  ForAnyElementType FVar13;
  void *_Dst;
  size_t _Size;
  FString local_58;
  FString local_48;
  
  if (param_1 == (void *)0x0) {
    return -1;
  }
  EVar11 = param_2->ArrayFlags;
  uVar7 = (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar2 = param_2->Inner;
  iVar8 = pFVar2->ElementSize;
  _Size = (size_t)iVar8;
  if ((iVar8 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  if ((pFVar2 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  pFVar3 = param_2->Inner;
  iVar9 = GenericArray_Find(param_1,param_2,param_3);
  FVar5 = ReachedMaximumContainerSizeWarning;
  if (iVar9 == -1) {
    EVar11 = EVar11 & UsesMemoryImageAllocator;
    if (*(int *)((longlong)param_1 + 8) < 0x7fffffff) {
      iVar1 = *(int *)((longlong)param_1 + 8);
      iVar9 = iVar1 + 1;
      *(int *)((longlong)param_1 + 8) = iVar9;
      if (EVar11 == None) {
        if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
          TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow(param_1,iVar1,iVar8,uVar7);
        }
      }
      else if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(param_1,iVar1,iVar8,uVar7);
      }
      pvVar12 = (void *)0x0;
      _Dst = pvVar12;
      if (*(int *)((longlong)param_1 + 8) != 0) {
        uVar10 = *(ulonglong *)param_1;
        if ((EVar11 != None) && ((uVar10 & 1) != 0)) {
          uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
        }
        _Dst = (void *)(_Size * (longlong)iVar1 + uVar10);
      }
      if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,_Dst);
      }
      else {
        memset(_Dst,0,_Size);
      }
      if (*(int *)((longlong)param_1 + 8) != 0) {
        uVar10 = *(ulonglong *)param_1;
        if ((EVar11 != None) && ((uVar10 & 1) != 0)) {
          uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
        }
        pvVar12 = (void *)(_Size * (longlong)iVar1 + uVar10);
      }
      (**(code **)(pFVar3->_padding_ + 0x100))(pFVar3,pvVar12,param_3);
      return iVar1;
    }
    bVar6 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_58);
    }
    else {
      ::FString::FString(&local_58,L"None");
    }
    ::FString::PrintfImpl
              (&local_48,L"Attempted add to array \'%s\' beyond the maximum supported capacity!");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar13.Data = local_48.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar13.Data,Warning,FVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return -1;
}

// GenericArray_Append @ 147da0010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Append
          (void *param_1,FArrayProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  uint uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  uint uVar6;
  FName FVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  FString local_80;
  FString local_70;
  FScriptArrayHelper local_60;
  
  if ((param_1 != (void *)0x0) && (param_3 != (void *)0x0)) {
    EVar1 = param_2->ArrayFlags;
    local_60.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
    local_60.InnerProperty = param_2->Inner;
    local_60.ElementSize = (local_60.InnerProperty)->ElementSize;
    local_60.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_60.ArrayFlags = EVar1;
    if ((local_60.ElementSize < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_60.InnerProperty == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar1 = param_4->ArrayFlags;
    (**(code **)(param_4->Inner->_padding_ + 0x168))();
    pFVar4 = param_4->Inner;
    iVar2 = pFVar4->ElementSize;
    if ((iVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pFVar4 == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)((longlong)param_3 + 8);
    if (0 < (int)uVar3) {
      lVar11 = 0;
      pFVar4 = param_2->Inner;
      iVar13 = 1 - (local_60.field1_0x8.FreezableArray)->ArrayNum;
      if ((local_60.field1_0x8.FreezableArray)->ArrayNum < 1) {
        iVar13 = 0;
      }
      uVar6 = iVar13 + 0x7ffffffeU;
      if ((int)uVar3 < (int)(iVar13 + 0x7ffffffeU)) {
        uVar6 = uVar3;
      }
      uVar14 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        iVar13 = FScriptArrayHelper::AddValues(&local_60,uVar6);
        do {
          lVar12 = 0;
          if (*(int *)((longlong)param_3 + 8) != 0) {
            uVar9 = *(ulonglong *)param_3;
            if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
              uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_3;
            }
            lVar12 = iVar2 * lVar11 + uVar9;
          }
          lVar10 = 0;
          if ((local_60.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar9 = (local_60.field1_0x8.FreezableArray)->_padding_;
            if (((local_60.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
              uVar9 = (longlong)&(local_60.field1_0x8.HeapArray)->field_0x0 +
                      ((longlong)uVar9 >> 0x18);
            }
            lVar10 = (longlong)local_60.ElementSize * (longlong)iVar13 + uVar9;
          }
          (**(code **)(pFVar4->_padding_ + 0x100))(pFVar4,lVar10,lVar12);
          lVar11 = lVar11 + 1;
          iVar13 = iVar13 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      FVar7 = ReachedMaximumContainerSizeWarning;
      if ((int)uVar6 < *(int *)((longlong)param_3 + 8)) {
        bVar8 = IsThisNotNull(param_2,"FField::GetName");
        if (bVar8) {
          ::FName::ToString((FName *)&param_2->_padding_,&local_80);
        }
        else {
          ::FString::FString(&local_80,L"None");
        }
        ::FString::PrintfImpl
                  (&local_70,
                   L"Attempted append to array \'%s\' beyond the maximum supported capacity!");
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_70.Data.ArrayNum != 0) {
          FVar15.Data = local_70.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar15.Data,Warning,FVar7);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GenericArray_Clear @ 147da0310

void __cdecl UKismetArrayLibrary::GenericArray_Clear(void *param_1,FArrayProperty *param_2)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FScriptArrayHelper local_28;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    local_28.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
    local_28.InnerProperty = param_2->Inner;
    local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
    local_28.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_28.ArrayFlags = EVar1;
    if ((local_28.ElementSize < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_28.InnerProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) {
      FScriptArrayHelper::DestructItems(&local_28,0,(local_28.field1_0x8.FreezableArray)->ArrayNum);
      (local_28.field1_0x8.FreezableArray)->ArrayNum = 0;
      if ((local_28.ArrayFlags & UsesMemoryImageAllocator) == None) {
        if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
          TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                    ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_28.field1_0x8.HeapArray
                     ,0,local_28.ElementSize,local_28.ElementAlignment);
        }
      }
      else if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
        TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                  (local_28.field1_0x8.FreezableArray,0,local_28.ElementSize,
                   local_28.ElementAlignment);
        return;
      }
    }
  }
  return;
}

// GenericArray_Find @ 147da0430

int __cdecl
UKismetArrayLibrary::GenericArray_Find(void *param_1,FArrayProperty *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_1 == (void *)0x0) {
    return -1;
  }
  EVar1 = param_2->ArrayFlags;
  (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar2 = param_2->Inner;
  iVar7 = pFVar2->ElementSize;
  if ((iVar7 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  if ((pFVar2 == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  pFVar2 = param_2->Inner;
  iVar4 = 0;
  iVar10 = -1;
  while ((iVar9 = iVar10, iVar10 = iVar4, iVar10 < *(int *)((longlong)param_1 + 8) && (iVar9 == -1))
        ) {
    if (*(int *)((longlong)param_1 + 8) == 0) {
      lVar11 = 0;
    }
    else {
      uVar8 = *(ulonglong *)param_1;
      if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
        uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
      }
      lVar11 = (longlong)iVar7 * (longlong)iVar10 + uVar8;
    }
    cVar6 = (**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2,param_3,lVar11,0);
    iVar4 = iVar10 + 1;
    if (cVar6 == '\0') {
      iVar10 = iVar9;
    }
  }
  return iVar9;
}

// GenericArray_Get @ 147da0580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Get
          (void *param_1,FArrayProperty *param_2,int param_3,void *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FFieldObjectUnion local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5 = GetOutOfBoundsWarning;
    pFVar3 = param_2->Inner;
    if ((param_3 < 0) || (*(int *)((longlong)param_1 + 8) <= param_3)) {
      local_68 = (FFieldObjectUnion)param_2->_padding_;
      if (((local_68.Unknown & 1) != 0) &&
         (((UObject *)(local_68.Unknown & 0xfffffffffffffffe) != (UObject *)0x0 &&
          (UE::GC::GIsIncrementalReachabilityPending != false)))) {
        UE::GC::MarkAsReachable((UObject *)(local_68.Unknown & 0xfffffffffffffffe));
      }
      FFieldVariant::GetPathName((FFieldVariant *)&local_68,&local_40);
      bVar6 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_60);
      }
      else {
        ::FString::FString(&local_60,L"None");
      }
      ::FString::PrintfImpl
                (&local_50,L"Attempted to access index %d from array \'%s\' of length %d in \'%s\'!"
                );
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar8.Data = local_50.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar5);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      UE::BlueprintPropertyHelpers::ResetToDefault(param_4,pFVar3);
    }
    else {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x128);
      if (*(int *)((longlong)param_1 + 8) == 0) {
        (*pcVar4)(pFVar3,param_4,0);
      }
      else {
        uVar7 = *(ulonglong *)param_1;
        if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar7 & 1) != 0)) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_1;
        }
        (*pcVar4)(pFVar3,param_4,(longlong)iVar2 * (longlong)param_3 + uVar7);
      }
    }
  }
  return;
}

// GenericArray_HandleBool @ 147da07b0

void __cdecl UKismetArrayLibrary::GenericArray_HandleBool(FProperty *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    if ((param_1->ElementSize * param_1->ArrayDim != 1) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8047707666803327578>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                           ,0x25a,
                           "(BoolProperty->GetElementSize() * BoolProperty->ArrayDim) == sizeof(uint8)"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FBoolProperty::SetPropertyValue((FBoolProperty *)param_1,param_2,*(char *)param_2 != '\0');
  }
  return;
}

// GenericArray_Identical @ 147da0830

bool __cdecl
UKismetArrayLibrary::GenericArray_Identical
          (void *param_1,FArrayProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  if ((param_1 != (void *)0x0) && (param_3 != (void *)0x0)) {
    pFVar6 = param_2->Inner;
    cVar9 = (**(code **)(pFVar6->_padding_ + 0x1a0))(pFVar6,param_4->Inner);
    if (cVar9 != '\0') {
      EVar1 = param_2->ArrayFlags;
      (**(code **)(param_2->Inner->_padding_ + 0x168))();
      pFVar7 = param_2->Inner;
      iVar3 = pFVar7->ElementSize;
      if ((iVar3 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      if ((pFVar7 == (FProperty *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      EVar2 = param_4->ArrayFlags;
      (**(code **)(param_4->Inner->_padding_ + 0x168))();
      pFVar7 = param_4->Inner;
      iVar4 = pFVar7->ElementSize;
      if ((iVar4 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      if ((pFVar7 == (FProperty *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar5 = *(int *)((longlong)param_1 + 8);
      if (iVar5 == *(int *)((longlong)param_3 + 8)) {
        uVar15 = 0;
        if (0 < iVar5) {
          do {
            if (*(int *)((longlong)param_3 + 8) == 0) {
              lVar16 = 0;
            }
            else {
              uVar12 = *(ulonglong *)param_3;
              if (((EVar2 & UsesMemoryImageAllocator) != None) && ((uVar12 & 1) != 0)) {
                uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_3;
              }
              lVar16 = (longlong)iVar4 * uVar15 + uVar12;
            }
            if (*(int *)((longlong)param_1 + 8) == 0) {
              lVar13 = 0;
            }
            else {
              uVar12 = *(ulonglong *)param_1;
              if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar12 & 1) != 0)) {
                uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_1;
              }
              lVar13 = (longlong)iVar3 * uVar15 + uVar12;
            }
            cVar9 = (**(code **)(pFVar6->_padding_ + 0xb8))(pFVar6,lVar13,lVar16,0);
            if (cVar9 == '\0') {
              return false;
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
          } while ((int)uVar14 < iVar5);
        }
        return true;
      }
    }
  }
  return false;
}

// GenericArray_Insert @ 147da0a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Insert
          (void *param_1,FArrayProperty *param_2,void *param_3,int param_4)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  ForAnyElementType FVar8;
  FString local_78;
  FScriptArrayHelper *local_68;
  int local_60;
  undefined4 local_5c;
  FString local_58;
  FScriptArrayHelper local_48;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    local_48.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
    local_48.InnerProperty = param_2->Inner;
    local_48.ElementSize = (local_48.InnerProperty)->ElementSize;
    local_48.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_48.ArrayFlags = EVar1;
    if ((local_48.ElementSize < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_48.InnerProperty == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar4 = InsertOutOfBoundsWarning;
    pFVar2 = param_2->Inner;
    if ((param_4 < 0) ||
       (((local_48.field1_0x8.FreezableArray)->ArrayNum <= param_4 &&
        ((param_4 < 0 || ((local_48.field1_0x8.FreezableArray)->ArrayNum < param_4)))))) {
      bVar5 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_78);
      }
      else {
        ::FString::FString(&local_78,L"None");
      }
      ::FString::PrintfImpl
                (&local_58,L"Attempted to insert an item into array %s out of bounds [%d/%d]!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar4);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_68 = &local_48;
      local_5c = 1;
      local_60 = param_4;
      FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::InsertValues_::__l2::<lambda_1>_>
                (&local_48,(<lambda_1> *)&local_68);
      pvVar7 = (void *)0x0;
      _Dst = pvVar7;
      if ((local_48.field1_0x8.FreezableArray)->ArrayNum != 0) {
        uVar6 = (local_48.field1_0x8.FreezableArray)->_padding_;
        if (((local_48.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar6 & 1) != 0)) {
          uVar6 = (longlong)&(local_48.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar6 >> 0x18);
        }
        _Dst = (void *)((longlong)local_48.ElementSize * (longlong)param_4 + uVar6);
      }
      if (((uint)(int)(local_48.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)((local_48.InnerProperty)->_padding_ + 0x150))(local_48.InnerProperty,_Dst);
      }
      else {
        memset(_Dst,0,(longlong)local_48.ElementSize);
      }
      if ((local_48.field1_0x8.FreezableArray)->ArrayNum != 0) {
        uVar6 = (local_48.field1_0x8.FreezableArray)->_padding_;
        if (((local_48.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar6 & 1) != 0)) {
          uVar6 = (longlong)&(local_48.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar6 >> 0x18);
        }
        pvVar7 = (void *)((longlong)local_48.ElementSize * (longlong)param_4 + uVar6);
      }
      (**(code **)(pFVar2->_padding_ + 0x100))(pFVar2,pvVar7,param_3);
    }
  }
  return;
}

// GenericArray_IsEmpty @ 147da0cb0

bool __cdecl UKismetArrayLibrary::GenericArray_IsEmpty(void *param_1,FArrayProperty *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 == (void *)0x0) {
    return true;
  }
  (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar1 = param_2->Inner;
  if (pFVar1->ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)((longlong)param_1 + 8) == 0;
}

// GenericArray_IsNotEmpty @ 147da0d60

bool __cdecl UKismetArrayLibrary::GenericArray_IsNotEmpty(void *param_1,FArrayProperty *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar1 = param_2->Inner;
  if (pFVar1->ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return 0 < *(int *)((longlong)param_1 + 8);
}

// GenericArray_IsValidIndex @ 147da0e10

bool __cdecl
UKismetArrayLibrary::GenericArray_IsValidIndex(void *param_1,FArrayProperty *param_2,int param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 != (void *)0x0) {
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar1 = param_2->Inner;
    if (pFVar1->ElementSize < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (pFVar1 == (FProperty *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((-1 < param_3) && (param_3 < *(int *)((longlong)param_1 + 8))) {
      return true;
    }
  }
  return false;
}

// GenericArray_LastIndex @ 147da0ed0

int __cdecl UKismetArrayLibrary::GenericArray_LastIndex(void *param_1,FArrayProperty *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (void *)0x0) {
    return -1;
  }
  (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar1 = param_2->Inner;
  if (pFVar1->ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)((longlong)param_1 + 8) + -1;
}

// GenericArray_Length @ 147da0f80

int __cdecl UKismetArrayLibrary::GenericArray_Length(void *param_1,FArrayProperty *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  (**(code **)(param_2->Inner->_padding_ + 0x168))();
  pFVar1 = param_2->Inner;
  if (pFVar1->ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)((longlong)param_1 + 8);
}

// GenericArray_Random @ 147da1040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Random
          (void *param_1,FArrayProperty *param_2,void *param_3,int *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FString local_38;
  
  *param_4 = -1;
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5 = RandomAccessToEmptyArrayWarning;
    pFVar3 = param_2->Inner;
    if (*(int *)((longlong)param_1 + 8) < 1) {
      ::FString::PrintfImpl(&local_38,L"Attempted to access random index from empty array!");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,FVar5);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      UE::BlueprintPropertyHelpers::ResetToDefault(param_3,pFVar3);
    }
    else {
      iVar7 = FMath::RandRange(0,*(int *)((longlong)param_1 + 8) + -1);
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x100);
      if (*(int *)((longlong)param_1 + 8) == 0) {
        (*pcVar4)(pFVar3,param_3,0);
        *param_4 = iVar7;
      }
      else {
        uVar8 = *(ulonglong *)param_1;
        if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
        }
        (*pcVar4)(pFVar3,param_3,(longlong)iVar2 * (longlong)iVar7 + uVar8);
        *param_4 = iVar7;
      }
    }
  }
  return;
}

// GenericArray_RandomFromStream @ 147da11c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_RandomFromStream
          (void *param_1,FArrayProperty *param_2,FRandomStream *param_3,void *param_4,int *param_5)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FString local_38;
  
  *param_5 = -1;
  if ((param_1 != (void *)0x0) && (param_3 != (FRandomStream *)0x0)) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5 = RandomAccessToEmptyArrayWarning;
    iVar9 = *(int *)((longlong)param_1 + 8);
    pFVar3 = param_2->Inner;
    if (iVar9 < 1) {
      ::FString::PrintfImpl(&local_38,L"Attempted to access random index from empty array!");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,FVar5);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      UE::BlueprintPropertyHelpers::ResetToDefault(param_4,pFVar3);
    }
    else {
      uVar7 = param_3->Seed * 0xbb38435 + 0x3619636b;
      param_3->Seed = uVar7;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x100);
      iVar9 = (int)(((float)(uVar7 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar9);
      if (*(int *)((longlong)param_1 + 8) == 0) {
        (*pcVar4)(pFVar3,param_4,0);
        *param_5 = iVar9;
      }
      else {
        uVar8 = *(ulonglong *)param_1;
        if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
        }
        (*pcVar4)(pFVar3,param_4,(longlong)iVar9 * (longlong)iVar2 + uVar8);
        *param_5 = iVar9;
      }
    }
  }
  return;
}

// GenericArray_Remove @ 147da1390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Remove(void *param_1,FArrayProperty *param_2,int param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FString local_68;
  <lambda_1> local_58;
  FString local_48;
  FScriptArrayHelper local_38;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    local_38.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
    local_38.InnerProperty = param_2->Inner;
    local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
    local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_38.ArrayFlags = EVar1;
    if ((local_38.ElementSize < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_38.InnerProperty == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3 = RemoveOutOfBoundsWarning;
    if ((param_3 < 0) || ((local_38.field1_0x8.FreezableArray)->ArrayNum <= param_3)) {
      bVar4 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_68);
      }
      else {
        ::FString::FString(&local_68,L"None");
      }
      ::FString::PrintfImpl
                (&local_48,
                 L"Attempted to remove an item from an invalid index from array %s [%d/%d]!");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Warning,FVar3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (((local_38.field1_0x8.FreezableArray)->ArrayNum < param_3 + 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index + Count <= Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1128,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((local_38.InnerProperty)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
          CPF_None) {
        if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
          lVar6 = 0;
        }
        else {
          uVar5 = (local_38.field1_0x8.FreezableArray)->_padding_;
          if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar5 & 1) != 0)) {
            uVar5 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 +
                    ((longlong)uVar5 >> 0x18);
          }
          lVar6 = (longlong)local_38.ElementSize * (longlong)param_3 + uVar5;
        }
        if (((local_38.InnerProperty)->PropertyFlags >> 0x24 & 1) == 0) {
          (**(code **)((local_38.InnerProperty)->_padding_ + 0x138))(local_38.InnerProperty,lVar6);
        }
      }
      local_58.__this = &local_38;
      local_58.Count = 1;
      local_58.Index = param_3;
      FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                (&local_38,&local_58);
    }
  }
  return;
}

// GenericArray_RemoveItem @ 147da15d0

bool __cdecl
UKismetArrayLibrary::GenericArray_RemoveItem(void *param_1,FArrayProperty *param_2,void *param_3)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = GenericArray_Find(param_1,param_2,param_3), iVar1 != -1))
  {
    do {
      GenericArray_Remove(param_1,param_2,iVar1);
      iVar1 = GenericArray_Find(param_1,param_2,param_3);
    } while (iVar1 != -1);
    return true;
  }
  return false;
}

// GenericArray_Resize @ 147da1650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Resize(void *param_1,FArrayProperty *param_2,int param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_58;
  <lambda_1> local_48;
  FString local_38;
  FScriptArrayHelper local_28;
  
  FVar4 = ResizeArrayNegativeWarning;
  if (param_1 != (void *)0x0) {
    if (param_3 < 0) {
      bVar5 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      ::FString::PrintfImpl
                (&local_38,
                 L"Attempted to resize an array using negative size: Array = %s, Size = %d!");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Warning,FVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      EVar1 = param_2->ArrayFlags;
      local_28.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
      local_28.InnerProperty = param_2->Inner;
      local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
      local_28.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
      local_28.ArrayFlags = EVar1;
      if ((local_28.ElementSize < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_28.InnerProperty == (FProperty *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (local_28.field1_0x8.FreezableArray)->ArrayNum;
      if (iVar2 < param_3) {
        FScriptArrayHelper::AddValues(&local_28,param_3 - iVar2);
      }
      else if (param_3 < iVar2) {
        iVar6 = iVar2 - param_3;
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Count>=0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1127,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((local_28.field1_0x8.FreezableArray)->ArrayNum < iVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index + Count <= Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1128,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FScriptArrayHelper::DestructItems(&local_28,param_3,iVar6);
        local_48.__this = &local_28;
        local_48.Index = param_3;
        local_48.Count = iVar6;
        FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                  (&local_28,&local_48);
      }
    }
  }
  return;
}

// GenericArray_Reverse @ 147da1870

void __cdecl UKismetArrayLibrary::GenericArray_Reverse(void *param_1,FArrayProperty *param_2)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong64 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    uVar9 = (ulong64)iVar2;
    if ((iVar2 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = *(int *)((longlong)param_1 + 8);
    if (0 < iVar2 / 2) {
      lVar10 = 0;
      uVar12 = (ulonglong)(uint)(iVar2 / 2);
      lVar11 = lVar10;
      do {
        iVar2 = iVar2 + -1;
        if ((EVar1 & UsesMemoryImageAllocator) == None) {
          pvVar7 = (void *)(lVar11 + *(longlong *)param_1);
          pvVar8 = (void *)((longlong)iVar2 * uVar9 + *(longlong *)param_1);
        }
        else {
          uVar6 = *(ulonglong *)param_1;
          if ((uVar6 & 1) != 0) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_1;
          }
          pvVar7 = (void *)(uVar6 + lVar10 * uVar9);
          pvVar8 = (void *)(uVar9 * (longlong)iVar2 + uVar6);
        }
        FGenericPlatformMemory::Memswap(pvVar7,pvVar8,uVar9);
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + uVar9;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}

// GenericArray_Set @ 147da19c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Set
          (void *param_1,FArrayProperty *param_2,int param_3,void *param_4,bool param_5)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FScriptArrayHelper local_38;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    local_38.ElementAlignment = (**(code **)(param_2->Inner->_padding_ + 0x168))();
    local_38.InnerProperty = param_2->Inner;
    local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
    local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_38.ArrayFlags = EVar1;
    if ((local_38.ElementSize < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_38.InnerProperty == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = param_2->Inner;
    if (-1 < param_3) {
      if ((((local_38.field1_0x8.FreezableArray)->ArrayNum <= param_3) && (param_5)) &&
         (param_3 < 0x7fffffff)) {
        FScriptArrayHelper::AddValues
                  (&local_38,(param_3 - (local_38.field1_0x8.FreezableArray)->ArrayNum) + 1);
      }
      if (param_3 < (local_38.field1_0x8.FreezableArray)->ArrayNum) {
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x100);
        if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
          (*pcVar3)(pFVar2,0,param_4);
          return;
        }
        uVar7 = (local_38.field1_0x8.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar7 & 1) != 0)) {
          uVar7 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar7 >> 0x18);
        }
        (*pcVar3)(pFVar2,(longlong)local_38.ElementSize * (longlong)param_3 + uVar7,param_4);
        return;
      }
    }
    FVar5 = ReachedMaximumContainerSizeWarning;
    FVar4 = SetOutOfBoundsWarning;
    if (param_3 < 0x7fffffff) {
      bVar6 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_68);
      }
      else {
        ::FString::FString(&local_68,L"None");
      }
      ::FString::PrintfImpl(&local_48,L"Attempted to set an invalid index on array %s [%d/%d]!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar4);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar6 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_78);
      }
      else {
        ::FString::FString(&local_78,L"None");
      }
      ::FString::PrintfImpl
                (&local_58,
                 L"Attempted to set an index on array %s beyond its maximum supported capacity!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar5);
      local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GenericArray_SetArrayPropertyByName @ 147da1c60

void __cdecl
UKismetArrayLibrary::GenericArray_SetArrayPropertyByName
          (UObject *param_1,FName param_2,void *param_3)

{
  FProperty *this;
  bool bVar1;
  FName FVar2;
  void *pvVar3;
  FName FVar4;
  TFieldIterator<FArrayProperty> local_38;
  
  if ((param_1 != (UObject *)0x0) &&
     (local_38.Struct = *(UStruct **)&param_1->field_0x10, param_2 != (FName)0x0)) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FArrayProperty>::IterateToNext(&local_38);
    this = (FProperty *)local_38.Field;
    while (this != (FProperty *)0x0) {
      local_38.Field = (FField *)this;
      bVar1 = IsThisNotNull(this,"FField::GetFName");
      FVar2 = FVar4;
      if (bVar1) {
        FVar2 = (FName)this->_padding_;
      }
      if (FVar2 == param_2) {
        if (this == (FProperty *)0x0) {
          return;
        }
        pvVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
        (**(code **)(this->_padding_ + 0xf0))(this,pvVar3,param_3,1);
        return;
      }
      local_38.Field = (FField *)this->_padding_;
      TFieldIterator<FArrayProperty>::IterateToNext(&local_38);
      this = (FProperty *)local_38.Field;
    }
  }
  return;
}

// GenericArray_Shuffle @ 147da1d80

void __cdecl UKismetArrayLibrary::GenericArray_Shuffle(void *param_1,FArrayProperty *param_2)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulong64 uVar16;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar2 = param_2->Inner;
    iVar12 = pFVar2->ElementSize;
    uVar16 = (ulong64)iVar12;
    if ((iVar12 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pFVar2 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = __real_38000100;
    iVar15 = *(int *)((longlong)param_1 + 8) + -1;
    iVar12 = 0;
    if (-1 < iVar15) {
      lVar13 = 0;
      iVar14 = iVar15;
      do {
        if (iVar14 + 1 < 1) {
          iVar10 = 0;
        }
        else {
          uVar6 = rand();
          iVar7 = (int)((float)(uVar6 & 0x7fff) * (float)(iVar14 + 1) * fVar4);
          iVar10 = iVar14;
          if (iVar7 < iVar14) {
            iVar10 = iVar7;
          }
        }
        iVar10 = iVar10 + iVar12;
        if (iVar12 != iVar10) {
          if ((EVar1 & UsesMemoryImageAllocator) == None) {
            pvVar11 = (void *)((longlong)iVar10 * uVar16 + *(longlong *)param_1);
            pvVar9 = (void *)(lVar13 * uVar16 + *(longlong *)param_1);
          }
          else {
            uVar8 = *(ulonglong *)param_1;
            if ((uVar8 & 1) != 0) {
              uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
            }
            pvVar11 = (void *)((longlong)iVar10 * uVar16 + uVar8);
            pvVar9 = (void *)(lVar13 * uVar16 + uVar8);
          }
          FGenericPlatformMemory::Memswap(pvVar9,pvVar11,uVar16);
        }
        iVar12 = iVar12 + 1;
        iVar14 = iVar14 + -1;
        lVar13 = lVar13 + 1;
      } while (iVar12 <= iVar15);
    }
  }
  return;
}

// GenericArray_ShuffleFromStream @ 147da1f20

void __cdecl
UKismetArrayLibrary::GenericArray_ShuffleFromStream
          (void *param_1,FArrayProperty *param_2,FRandomStream *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  ulong64 uVar13;
  longlong lVar14;
  int iVar15;
  
  if ((param_1 != (void *)0x0) && (param_3 != (FRandomStream *)0x0)) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    uVar13 = (ulong64)iVar2;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = __real_3f800000;
    iVar15 = *(int *)((longlong)param_1 + 8);
    iVar12 = 0;
    iVar2 = iVar15 + -1;
    if (-1 < iVar2) {
      lVar14 = 0;
      do {
        if (iVar15 < 1) {
          iVar8 = 0;
        }
        else {
          uVar7 = param_3->Seed * 0xbb38435 + 0x3619636b;
          param_3->Seed = uVar7;
          iVar8 = (int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * (float)iVar15);
        }
        iVar8 = iVar8 + iVar12;
        if (iVar12 != iVar8) {
          if ((EVar1 & UsesMemoryImageAllocator) == None) {
            pvVar11 = (void *)((longlong)iVar8 * uVar13 + *(longlong *)param_1);
            pvVar10 = (void *)(lVar14 * uVar13 + *(longlong *)param_1);
          }
          else {
            uVar9 = *(ulonglong *)param_1;
            if ((uVar9 & 1) != 0) {
              uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_1;
            }
            pvVar11 = (void *)((longlong)iVar8 * uVar13 + uVar9);
            pvVar10 = (void *)(lVar14 * uVar13 + uVar9);
          }
          FGenericPlatformMemory::Memswap(pvVar10,pvVar11,uVar13);
        }
        iVar12 = iVar12 + 1;
        iVar15 = iVar15 + -1;
        lVar14 = lVar14 + 1;
      } while (iVar12 <= iVar2);
    }
  }
  return;
}

// GenericArray_Swap @ 147da20c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetArrayLibrary::GenericArray_Swap
          (void *param_1,FArrayProperty *param_2,int param_3,int param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulong64 uVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 != (void *)0x0) {
    EVar1 = param_2->ArrayFlags;
    (**(code **)(param_2->Inner->_padding_ + 0x168))();
    pFVar3 = param_2->Inner;
    iVar2 = pFVar3->ElementSize;
    uVar9 = (ulong64)iVar2;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5 = SwapElementsInArrayWarning;
    if (-1 < param_3) {
      if (((param_3 < *(int *)((longlong)param_1 + 8)) && (-1 < param_4)) &&
         (param_4 < *(int *)((longlong)param_1 + 8))) {
        if (param_3 == param_4) {
          return;
        }
        if ((EVar1 & UsesMemoryImageAllocator) != None) {
          uVar7 = *(ulonglong *)param_1;
          if ((uVar7 & 1) != 0) {
            uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_1;
          }
          FGenericPlatformMemory::Memswap
                    ((void *)((longlong)param_3 * uVar9 + uVar7),
                     (void *)((longlong)param_4 * uVar9 + uVar7),uVar9);
          return;
        }
        FGenericPlatformMemory::Memswap
                  ((void *)((longlong)param_3 * uVar9 + *(longlong *)param_1),
                   (void *)((longlong)param_4 * uVar9 + *(longlong *)param_1),uVar9);
        return;
      }
    }
    iVar2 = *(int *)((longlong)param_1 + 8);
    bVar6 = IsThisNotNull(param_2,"FField::GetName");
    if (iVar2 == 0) {
      if (bVar6) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_68);
      }
      else {
        ::FString::FString(&local_68,L"None");
      }
      ::FString::PrintfImpl(&local_48,L"Attempted to swap elements in empty array %s!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar5);
      local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (bVar6) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      ::FString::PrintfImpl
                (&local_38,
                 L"Attempted to swap elements [%d] and [%d] in array %s. Available index range: [0 %d)!"
                );
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,FVar5);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147da7cf0

UClass * __cdecl UKismetArrayLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetArrayLibrary",
               &Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton,
               StaticRegisterNativesUKismetArrayLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetArrayLibrary>,
               InternalVTableHelperCtorCaller<UKismetArrayLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetArrayLibrary.InnerSingleton;
}

// SetArrayPropertyByName @ 147dbf1b0

void __cdecl
UKismetArrayLibrary::SetArrayPropertyByName
          (UObject *param_1,FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                     ,0x2fa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SortByteArray @ 147dc2760

void __cdecl
UKismetArrayLibrary::SortByteArray
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          EArraySortOrder param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_res20[0] = 0;
  local_res10[0] = 0;
  if (param_2) {
    if (param_3 == Ascending) {
      AlgoImpl::
      StableSortInternal<unsigned_char,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TLess<unsigned_char>_>_>
                ((uchar *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<unsigned_char> *)local_res10);
      return;
    }
    AlgoImpl::
    StableSortInternal<unsigned_char,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TGreater<unsigned_char>_>_>
              ((uchar *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<unsigned_char> *)local_res20);
    return;
  }
  if (param_3 == Ascending) {
    AlgoImpl::
    IntroSortInternal<unsigned_char,int,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TLess<unsigned_char>_>_>
              ((uchar *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<unsigned_char> *)local_res10);
    return;
  }
  AlgoImpl::
  IntroSortInternal<unsigned_char,int,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TGreater<unsigned_char>_>_>
            ((uchar *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<unsigned_char> *)local_res20);
  return;
}

// SortFloatArray @ 147dc27e0

void __cdecl
UKismetArrayLibrary::SortFloatArray
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,bool param_2,EArraySortOrder param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_res20[0] = 0;
  local_res10[0] = 0;
  if (param_2) {
    if (param_3 == Ascending) {
      AlgoImpl::
      StableSortInternal<double,FIdentityFunctor,TDereferenceWrapper<double,TLess<double>_>_>
                ((double *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<double> *)local_res10);
      return;
    }
    AlgoImpl::
    StableSortInternal<double,FIdentityFunctor,TDereferenceWrapper<double,TGreater<double>_>_>
              ((double *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<double> *)local_res20);
    return;
  }
  if (param_3 == Ascending) {
    AlgoImpl::
    IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<double>_>_>
              ((double *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<double> *)local_res10);
    return;
  }
  AlgoImpl::
  IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TGreater<double>_>_>
            ((double *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<double> *)local_res20);
  return;
}

// SortInt64Array @ 147dc2860

void __cdecl
UKismetArrayLibrary::SortInt64Array
          (TArray<__int64,TSizedDefaultAllocator<32>_> *param_1,bool param_2,EArraySortOrder param_3
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_res20[0] = 0;
  local_res10[0] = 0;
  if (param_2) {
    if (param_3 == Ascending) {
      AlgoImpl::
      StableSortInternal<__int64,FIdentityFunctor,TDereferenceWrapper<__int64,TLess<__int64>_>_>
                ((long64 *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<__int64> *)local_res10);
      return;
    }
    AlgoImpl::
    StableSortInternal<__int64,FIdentityFunctor,TDereferenceWrapper<__int64,TGreater<__int64>_>_>
              ((long64 *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<__int64> *)local_res20);
    return;
  }
  if (param_3 == Ascending) {
    AlgoImpl::
    IntroSortInternal<__int64,int,FIdentityFunctor,TDereferenceWrapper<__int64,TLess<__int64>_>_>
              ((long64 *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<__int64> *)local_res10);
    return;
  }
  AlgoImpl::
  IntroSortInternal<__int64,int,FIdentityFunctor,TDereferenceWrapper<__int64,TGreater<__int64>_>_>
            ((long64 *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<__int64> *)local_res20);
  return;
}

// SortIntArray @ 147dc28e0

void __cdecl
UKismetArrayLibrary::SortIntArray
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,EArraySortOrder param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_res20[0] = 0;
  local_res10[0] = 0;
  if (param_2) {
    if (param_3 == Ascending) {
      AlgoImpl::StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                ((int *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<int> *)local_res10);
      return;
    }
    AlgoImpl::StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
              ((int *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<int> *)local_res20);
    return;
  }
  if (param_3 == Ascending) {
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              ((int *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<int> *)local_res10);
    return;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
            ((int *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<int> *)local_res20);
  return;
}

// SortNameArray @ 147dc2960

void __cdecl
UKismetArrayLibrary::SortNameArray
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3,
          EArraySortOrder param_4)

{
  int iVar1;
  FName *pFVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FName *)(param_1->AllocatorInstance).Data;
  local_res10[0] = param_3;
  local_res18[0] = param_3;
  if (param_2) {
    if (param_4 == Ascending) {
      AlgoImpl::
      StableSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_1>_>_>
                (pFVar2,iVar1,(FIdentityFunctor)param_3,(<lambda_1> *)local_res10);
      return;
    }
    AlgoImpl::
    StableSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_2>_>_>
              (pFVar2,iVar1,(FIdentityFunctor)param_3,(<lambda_2> *)local_res18);
    return;
  }
  if (param_4 == Ascending) {
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_1>_>_>
              (pFVar2,iVar1,(FIdentityFunctor)param_3,(<lambda_1> *)local_res10);
    return;
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_2>_>_>
            (pFVar2,iVar1,(FIdentityFunctor)param_3,(<lambda_2> *)local_res18);
  return;
}

// SortStringArray @ 147dc29d0

void __cdecl
UKismetArrayLibrary::SortStringArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2,EArraySortOrder param_3
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_res20[0] = 0;
  local_res10[0] = 0;
  if (param_2) {
    if (param_3 == Ascending) {
      AlgoImpl::
      StableSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
                ((FString *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<FString> *)local_res10);
      return;
    }
    AlgoImpl::
    StableSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
              ((FString *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<FString> *)local_res20);
    return;
  }
  if (param_3 == Ascending) {
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              ((FString *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TLess<FString> *)local_res10);
    return;
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
            ((FString *)pFVar2,iVar1,(FIdentityFunctor)0x0,(TGreater<FString> *)local_res20);
  return;
}

// StaticRegisterNativesUKismetArrayLibrary @ 147dc4090

void __cdecl UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x20;
  local_18.DataPtr = Z_Construct_UClass_UKismetArrayLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execArray_Add @ 147dcb8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Add(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FArrayProperty *pFVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar12 = auStack_58;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar3 = param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar4 = pFVar2->Inner;
    iVar9 = pFVar4->ElementSize;
    iVar1 = pFVar4->ArrayDim;
    iVar8 = iVar9 * iVar1;
    puVar12 = auStack_58;
    if (iVar8 != 0) {
      uVar11 = (ulonglong)(iVar8 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      _Dst = auStack_30 + -(uVar10 & 0xfffffffffffffff0);
      puVar12 = auStack_58 + -(uVar10 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x147dcb9f8;
      (*pcVar7)(pFVar4,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x147dcb9e7;
      memset(_Dst,0,(longlong)iVar9 * (longlong)iVar1);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcba05;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcba36;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcba1a;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar12 + -8) = 0x147dcba56;
    iVar9 = GenericArray_Add(puVar3,pFVar2,_Dst);
    *(int *)param_3 = iVar9;
    if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x147dcba79;
      (*pcVar7)(pFVar4,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x147dcba8e;
  return;
}

// execArray_AddUnique @ 147dcbab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UKismetArrayLibrary::execArray_AddUnique(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FArrayProperty *pFVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar12 = auStack_58;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar3 = param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar4 = pFVar2->Inner;
    iVar9 = pFVar4->ElementSize;
    iVar1 = pFVar4->ArrayDim;
    iVar8 = iVar9 * iVar1;
    puVar12 = auStack_58;
    if (iVar8 != 0) {
      uVar11 = (ulonglong)(iVar8 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      _Dst = auStack_30 + -(uVar10 & 0xfffffffffffffff0);
      puVar12 = auStack_58 + -(uVar10 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x147dcbbb8;
      (*pcVar7)(pFVar4,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x147dcbba7;
      memset(_Dst,0,(longlong)iVar9 * (longlong)iVar1);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcbbc5;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcbbf6;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcbbda;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar12 + -8) = 0x147dcbc16;
    iVar9 = GenericArray_AddUnique(puVar3,pFVar2,_Dst);
    *(int *)param_3 = iVar9;
    if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x147dcbc39;
      (*pcVar7)(pFVar4,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x147dcbc4e;
  return;
}

// execArray_Append @ 147dcbc70

void __cdecl UKismetArrayLibrary::execArray_Append(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FArrayProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0))
  {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = (FArrayProperty *)param_2->MostRecentProperty;
    if ((pFVar4 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      GenericArray_Append(puVar2,pFVar1,param_2->MostRecentPropertyAddress,pFVar4);
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execArray_Clear @ 147dcbd80

void __cdecl UKismetArrayLibrary::execArray_Clear(UObject *param_1,FFrame *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  FScriptArrayHelper_u_8 FVar3;
  code *pcVar4;
  bool bVar5;
  FScriptArrayHelper local_28;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  FVar3 = (FScriptArrayHelper_u_8)param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if ((TScriptArray<TMemoryImageAllocator<0>_> *)FVar3.HeapArray !=
        (TScriptArray<TMemoryImageAllocator<0>_> *)0x0) {
      EVar1 = (EArrayPropertyFlags)pFVar2[1]._padding_;
      local_28.ElementAlignment = (**(code **)(*(longlong *)pFVar2[1]._padding_ + 0x168))();
      local_28.InnerProperty = (FProperty *)pFVar2[1]._padding_;
      local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
      local_28.field1_0x8 = FVar3;
      local_28.ArrayFlags = EVar1;
      if (local_28.ElementSize < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_28.InnerProperty == (FProperty *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) {
        FScriptArrayHelper::DestructItems
                  (&local_28,0,(local_28.field1_0x8.FreezableArray)->ArrayNum);
        (local_28.field1_0x8.FreezableArray)->ArrayNum = 0;
        if ((local_28.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_28.field1_0x8.HeapArray,0,local_28.ElementSize,
                       local_28.ElementAlignment);
            return;
          }
        }
        else if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                    (local_28.field1_0x8.FreezableArray,0,local_28.ElementSize,
                     local_28.ElementAlignment);
          return;
        }
      }
    }
  }
  return;
}

// execArray_Contains @ 147dcbf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Contains(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FBoolProperty *this;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  char *_Dst;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  char acStack_30 [8];
  
  puVar13 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (char *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    this = (FBoolProperty *)pFVar3->Inner;
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    iVar2 = (int)this->_padding_;
    iVar9 = iVar10 * iVar2;
    puVar13 = auStack_68;
    if (iVar9 != 0) {
      uVar12 = (ulonglong)(iVar9 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = acStack_30 + -(uVar11 & 0xfffffffffffffff0);
      puVar13 = auStack_68 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)this->_padding_ >> 9 & 1) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x147dcc038;
      (*pcVar7)(this,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x147dcc027;
      memset(_Dst,0,(longlong)iVar10 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x147dcc045;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc076;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc05a;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      if (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ != 1) {
        *(char **)(puVar13 + 0x20) =
             "(BoolProperty->GetElementSize() * BoolProperty->ArrayDim) == sizeof(uint8)";
        *(undefined8 *)(puVar13 + -8) = 0x147dcc0c9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8047707666803327578>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                           ,0x25a,*(char **)(puVar13 + 0x20));
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      cVar1 = *_Dst;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc0e1;
      FBoolProperty::SetPropertyValue(this,_Dst,cVar1 != '\0');
    }
    *(undefined8 *)(puVar13 + -8) = 0x147dcc0ef;
    iVar10 = GenericArray_Find(puVar4,pFVar3,_Dst);
    *(byte *)param_3 = (byte)((uint)iVar10 >> 0x1f) ^ 1;
    if ((this->_padding_ & 0x1000000000U) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x147dcc117;
      (*pcVar7)(this,_Dst);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x147dcc12c;
  return;
}

// execArray_Find @ 147dcc150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Find(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FBoolProperty *this;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  char *_Dst;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  char acStack_30 [8];
  
  puVar13 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (char *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    this = (FBoolProperty *)pFVar3->Inner;
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    iVar2 = (int)this->_padding_;
    iVar9 = iVar10 * iVar2;
    puVar13 = auStack_68;
    if (iVar9 != 0) {
      uVar12 = (ulonglong)(iVar9 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = acStack_30 + -(uVar11 & 0xfffffffffffffff0);
      puVar13 = auStack_68 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)this->_padding_ >> 9 & 1) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x147dcc258;
      (*pcVar7)(this,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x147dcc247;
      memset(_Dst,0,(longlong)iVar10 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x147dcc265;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc296;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc27a;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      if (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ != 1) {
        *(char **)(puVar13 + 0x20) =
             "(BoolProperty->GetElementSize() * BoolProperty->ArrayDim) == sizeof(uint8)";
        *(undefined8 *)(puVar13 + -8) = 0x147dcc2e9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8047707666803327578>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                           ,0x25a,*(char **)(puVar13 + 0x20));
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      cVar1 = *_Dst;
      *(undefined8 *)(puVar13 + -8) = 0x147dcc301;
      FBoolProperty::SetPropertyValue(this,_Dst,cVar1 != '\0');
    }
    *(undefined8 *)(puVar13 + -8) = 0x147dcc30f;
    iVar10 = GenericArray_Find(puVar4,pFVar3,_Dst);
    *(int *)param_3 = iVar10;
    if ((this->_padding_ & 0x1000000000U) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x147dcc332;
      (*pcVar7)(this,_Dst);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x147dcc347;
  return;
}

// execArray_Get @ 147dcc370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Get(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uchar *_Dst;
  uchar *puVar15;
  int iVar16;
  undefined1 auStack_58 [32];
  int local_38 [2];
  ulonglong local_30;
  
  puVar14 = auStack_58;
  local_30 = __security_cookie.value ^ (ulonglong)local_38;
  _Dst = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
    goto LAB_147dcc5d4;
  }
  local_38[0] = 0;
  FIntProperty::StaticClass();
  puVar14 = auStack_58;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar5 = pFVar3->Inner;
  iVar1 = pFVar5->ElementSize;
  iVar2 = pFVar5->ArrayDim;
  iVar16 = iVar1 * iVar2;
  if (iVar16 != 0) {
    uVar12 = (longlong)(iVar16 + 0xf) + 0xf;
    if (uVar12 <= (ulonglong)(longlong)(iVar16 + 0xf)) {
      uVar12 = 0xffffffffffffff0;
    }
    puVar14 = auStack_58 + -(uVar12 & 0xfffffffffffffff0);
    _Dst = (uchar *)((longlong)&local_30 + -(uVar12 & 0xfffffffffffffff0));
  }
  if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(pFVar5->_padding_ + 0x150);
    *(undefined8 *)(puVar14 + -8) = 0x147dcc4b7;
    (*pcVar9)(pFVar5,_Dst);
  }
  else {
    *(undefined8 *)(puVar14 + -8) = 0x147dcc4a5;
    memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar14 + -8) = 0x147dcc4c4;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    *(undefined8 *)(puVar14 + -8) = 0x147dcc4f5;
    FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
  }
  else {
    pUVar6 = param_2->Object;
    *(undefined8 *)(puVar14 + -8) = 0x147dcc4d9;
    FFrame::Step(param_2,pUVar6,_Dst);
  }
  iVar1 = local_38[0];
  pFVar7 = param_2->MostRecentProperty;
  puVar15 = param_2->MostRecentPropertyAddress;
  lVar13 = pFVar5->_padding_;
  lVar8 = pFVar7->_padding_;
  if ((puVar15 == (uchar *)0x0) || (iVar16 != pFVar7->ElementSize * pFVar7->ArrayDim)) {
LAB_147dcc586:
    puVar15 = _Dst;
  }
  else {
    lVar11 = lVar8;
    if (*(ulonglong *)(lVar13 + 0x10) == 0) {
      for (; bVar10 = false, lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
        if (lVar11 == lVar13) {
          bVar10 = true;
          break;
        }
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar13 + 0x10)) != 0;
    }
    if (!bVar10) {
      if (*(ulonglong *)(lVar8 + 0x10) == 0) {
        do {
          bVar10 = true;
          if (lVar13 == lVar8) break;
          lVar13 = *(longlong *)(lVar13 + 0x20);
          bVar10 = false;
        } while (lVar13 != 0);
      }
      else {
        bVar10 = (*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar8 + 0x10)) != 0;
      }
      if (!bVar10) goto LAB_147dcc586;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(puVar14 + -8) = 0x147dcc5aa;
  GenericArray_Get(puVar4,pFVar3,iVar1,puVar15);
  if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar9 = *(code **)(pFVar5->_padding_ + 0x138);
    *(undefined8 *)(puVar14 + -8) = 0x147dcc5cb;
    (*pcVar9)(pFVar5,_Dst);
  }
LAB_147dcc5d4:
  *(undefined8 *)(puVar14 + -8) = 0x147dcc5e0;
  return;
}

// execArray_Identical @ 147dcc600

void __cdecl
UKismetArrayLibrary::execArray_Identical(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  bool bVar5;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FArrayProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0))
  {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = (FArrayProperty *)param_2->MostRecentProperty;
    if ((pFVar4 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      bVar5 = GenericArray_Identical(puVar2,pFVar1,param_2->MostRecentPropertyAddress,pFVar4);
      *(bool *)param_3 = bVar5;
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execArray_Insert @ 147dcc720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Insert(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  void *_Dst;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  puVar12 = auStack_48;
  local_20 = __security_cookie.value ^ (ulonglong)local_28;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar5 = pFVar3->Inner;
    iVar1 = pFVar5->ElementSize;
    iVar2 = pFVar5->ArrayDim;
    iVar9 = iVar1 * iVar2;
    puVar12 = auStack_48;
    if (iVar9 != 0) {
      uVar11 = (ulonglong)(iVar9 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      _Dst = (void *)((longlong)&local_20 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_48 + -(uVar10 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x147dcc825;
      (*pcVar8)(pFVar5,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x147dcc814;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcc832;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcc863;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcc847;
      FFrame::Step(param_2,pUVar6,_Dst);
    }
    local_28[0] = 0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcc86b;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcc89e;
      FFrame::StepExplicitProperty(param_2,local_28,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcc881;
      FFrame::Step(param_2,pUVar6,local_28);
    }
    iVar1 = local_28[0];
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar12 + -8) = 0x147dcc8c2;
    GenericArray_Insert(puVar4,pFVar3,_Dst,iVar1);
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x147dcc8e1;
      (*pcVar8)(pFVar5,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x147dcc8f6;
  return;
}

// execArray_IsEmpty @ 147dcc920

void __cdecl UKismetArrayLibrary::execArray_IsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 == (uchar *)0x0) {
      *(undefined1 *)param_3 = 1;
    }
    else {
      (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x168))();
      lVar3 = pFVar1[1]._padding_;
      if (*(int *)(lVar3 + 0x34) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (lVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(bool *)param_3 = *(int *)(puVar2 + 8) == 0;
    }
  }
  return;
}

// execArray_IsNotEmpty @ 147dcca60

void __cdecl
UKismetArrayLibrary::execArray_IsNotEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 == (uchar *)0x0) {
      *(undefined1 *)param_3 = 0;
    }
    else {
      (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x168))();
      lVar3 = pFVar1[1]._padding_;
      if (*(int *)(lVar3 + 0x34) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (lVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(bool *)param_3 = 0 < *(int *)(puVar2 + 8);
    }
  }
  return;
}

// execArray_IsValidIndex @ 147dccba0

void __cdecl
UKismetArrayLibrary::execArray_IsValidIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int local_res10 [2];
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    local_res10[0] = 0;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,local_res10);
    }
    iVar6 = local_res10[0];
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 != (uchar *)0x0) {
      (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x168))();
      lVar4 = pFVar1[1]._padding_;
      if ((*(int *)(lVar4 + 0x34) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((lVar4 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((-1 < iVar6) && (iVar6 < *(int *)(puVar2 + 8))) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execArray_LastIndex @ 147dccd20

void __cdecl
UKismetArrayLibrary::execArray_LastIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 == (uchar *)0x0) {
      *(undefined4 *)param_3 = 0xffffffff;
    }
    else {
      (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x168))();
      lVar3 = pFVar1[1]._padding_;
      if (*(int *)(lVar3 + 0x34) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (lVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(int *)param_3 = *(int *)(puVar2 + 8) + -1;
    }
  }
  return;
}

// execArray_Length @ 147dcce60

void __cdecl UKismetArrayLibrary::execArray_Length(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 != (uchar *)0x0) {
      (**(code **)(*(longlong *)pFVar1[1]._padding_ + 0x168))();
      lVar3 = pFVar1[1]._padding_;
      if (*(int *)(lVar3 + 0x34) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (lVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar6 = *(undefined4 *)(puVar2 + 8);
    }
    *(undefined4 *)param_3 = uVar6;
  }
  return;
}

// execArray_Random @ 147dccf90

void __cdecl UKismetArrayLibrary::execArray_Random(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    puVar3 = param_2->MostRecentPropertyAddress;
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_Random(puVar2,pFVar1,puVar3,(int *)param_2->MostRecentPropertyAddress);
  }
  return;
}

// execArray_RandomFromStream @ 147dcd0d0

void __cdecl
UKismetArrayLibrary::execArray_RandomFromStream(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FRandomStream *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FArrayProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0))
  {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar3 = (FRandomStream *)param_2->MostRecentPropertyAddress;
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    puVar4 = param_2->MostRecentPropertyAddress;
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_RandomFromStream
              (puVar2,pFVar1,pFVar3,puVar4,(int *)param_2->MostRecentPropertyAddress);
    return;
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execArray_Remove @ 147dcd260

void __cdecl UKismetArrayLibrary::execArray_Remove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  int local_res10 [2];
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    local_res10[0] = 0;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,local_res10);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_Remove(puVar2,pFVar1,local_res10[0]);
  }
  return;
}

// execArray_RemoveItem @ 147dcd360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UKismetArrayLibrary::execArray_RemoveItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FBoolProperty *this;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  char *_Dst;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  char acStack_30 [8];
  
  puVar14 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (char *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    this = (FBoolProperty *)pFVar3->Inner;
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    iVar2 = (int)this->_padding_;
    iVar9 = iVar10 * iVar2;
    puVar14 = auStack_68;
    if (iVar9 != 0) {
      uVar12 = (ulonglong)(iVar9 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = acStack_30 + -(uVar11 & 0xfffffffffffffff0);
      puVar14 = auStack_68 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)this->_padding_ >> 9 & 1) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x150);
      *(undefined8 *)(puVar14 + -8) = 0x147dcd468;
      (*pcVar7)(this,_Dst);
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x147dcd457;
      memset(_Dst,0,(longlong)iVar10 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x147dcd475;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar14 + -8) = 0x147dcd4a6;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar14 + -8) = 0x147dcd48a;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      if (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ != 1) {
        *(char **)(puVar14 + 0x20) =
             "(BoolProperty->GetElementSize() * BoolProperty->ArrayDim) == sizeof(uint8)";
        *(undefined8 *)(puVar14 + -8) = 0x147dcd4f9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8047707666803327578>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetArrayLibrary.cpp"
                           ,0x25a,*(char **)(puVar14 + 0x20));
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      cVar1 = *_Dst;
      *(undefined8 *)(puVar14 + -8) = 0x147dcd511;
      FBoolProperty::SetPropertyValue(this,_Dst,cVar1 != '\0');
    }
    uVar13 = 0;
    if (puVar4 != (uchar *)0x0) {
      *(undefined8 *)(puVar14 + -8) = 0x147dcd526;
      iVar10 = GenericArray_Find(puVar4,pFVar3,_Dst);
      if (iVar10 != -1) {
        uVar13 = 1;
        do {
          *(undefined8 *)(puVar14 + -8) = 0x147dcd53e;
          GenericArray_Remove(puVar4,pFVar3,iVar10);
          *(undefined8 *)(puVar14 + -8) = 0x147dcd54c;
          iVar10 = GenericArray_Find(puVar4,pFVar3,_Dst);
        } while (iVar10 != -1);
      }
    }
    *(undefined1 *)param_3 = uVar13;
    if ((this->_padding_ & 0x1000000000U) == 0) {
      pcVar7 = *(code **)(this->_padding_ + 0x138);
      *(undefined8 *)(puVar14 + -8) = 0x147dcd574;
      (*pcVar7)(this,_Dst);
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x147dcd589;
  return;
}

// execArray_Resize @ 147dcd5b0

void __cdecl UKismetArrayLibrary::execArray_Resize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  int local_res10 [2];
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    local_res10[0] = 0;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,local_res10);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_Resize(puVar2,pFVar1,local_res10[0]);
  }
  return;
}

// execArray_Reverse @ 147dcd6b0

void __cdecl UKismetArrayLibrary::execArray_Reverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  ulonglong *puVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *pvVar9;
  longlong lVar10;
  ulong64 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar10 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  puVar3 = (ulonglong *)param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
    return;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (puVar3 != (ulonglong *)0x0) {
    lVar5 = pFVar2[1]._padding_;
    (**(code **)(*(longlong *)pFVar2[1]._padding_ + 0x168))();
    lVar12 = pFVar2[1]._padding_;
    iVar1 = *(int *)(lVar12 + 0x34);
    uVar11 = (ulong64)iVar1;
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (int)puVar3[1];
    if (0 < iVar1 / 2) {
      uVar13 = (ulonglong)(uint)(iVar1 / 2);
      lVar12 = lVar10;
      do {
        iVar1 = iVar1 + -1;
        if ((lVar5 & 1) == 0) {
          pvVar8 = (void *)(lVar12 + *puVar3);
          pvVar9 = (void *)((longlong)iVar1 * uVar11 + *puVar3);
        }
        else {
          uVar7 = *puVar3;
          if ((uVar7 & 1) != 0) {
            uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar3;
          }
          pvVar8 = (void *)(uVar7 + lVar10 * uVar11);
          pvVar9 = (void *)(uVar11 * (longlong)iVar1 + uVar7);
        }
        FGenericPlatformMemory::Memswap(pvVar8,pvVar9,uVar11);
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + uVar11;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}

// execArray_Set @ 147dcd870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UKismetArrayLibrary::execArray_Set(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FArrayProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  void *_Dst;
  undefined1 auStack_58 [48];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  puVar12 = auStack_58;
  local_20 = __security_cookie.value ^ (ulonglong)&local_28;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    local_24 = 0;
    FIntProperty::StaticClass();
    puVar12 = auStack_58;
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,&local_24,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,&local_24);
    }
    pFVar5 = pFVar3->Inner;
    iVar1 = pFVar5->ElementSize;
    iVar2 = pFVar5->ArrayDim;
    iVar9 = iVar1 * iVar2;
    if (iVar9 != 0) {
      uVar11 = (ulonglong)(iVar9 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      puVar12 = auStack_58 + -(uVar10 & 0xfffffffffffffff0);
      _Dst = (void *)((longlong)&local_20 + -(uVar10 & 0xfffffffffffffff0));
    }
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x147dcd9b0;
      (*pcVar8)(pFVar5,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x147dcd99f;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcd9bd;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcd9ee;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcd9d2;
      FFrame::Step(param_2,pUVar6,_Dst);
    }
    local_28 = 0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcd9f6;
    FBoolProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x147dcda29;
      FFrame::StepExplicitProperty(param_2,&local_28,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x147dcda0c;
      FFrame::Step(param_2,pUVar6,&local_28);
    }
    iVar1 = local_24;
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    puVar12[0x20] = local_28 != 0;
    *(undefined8 *)(puVar12 + -8) = 0x147dcda58;
    GenericArray_Set(puVar4,pFVar3,iVar1,_Dst,(bool)puVar12[0x20]);
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x147dcda77;
      (*pcVar8)(pFVar5,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x147dcda8c;
  return;
}

// execArray_Shuffle @ 147dcdab0

void __cdecl UKismetArrayLibrary::execArray_Shuffle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FArrayProperty *pFVar2;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FArrayProperty *)param_2->MostRecentProperty;
  if ((pFVar2 != (FArrayProperty *)0x0) && ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) != 0))
  {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_Shuffle(param_2->MostRecentPropertyAddress,pFVar2);
    return;
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execArray_ShuffleFromStream @ 147dcdb50

void __cdecl
UKismetArrayLibrary::execArray_ShuffleFromStream(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_ShuffleFromStream
              (puVar2,pFVar1,(FRandomStream *)param_2->MostRecentPropertyAddress);
  }
  return;
}

// execArray_Swap @ 147dcdc40

void __cdecl UKismetArrayLibrary::execArray_Swap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FArrayProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  int local_res10 [4];
  int local_res20 [2];
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FArrayProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FArrayProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0))
  {
    local_res20[0] = 0;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,local_res20);
    }
    local_res10[0] = 0;
    FIntProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,local_res10);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    GenericArray_Swap(puVar2,pFVar1,local_res20[0],local_res10[0]);
    return;
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execFilterArray @ 147df4e20

void __cdecl UKismetArrayLibrary::execFilterArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *local_res10 [2];
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = (UObject *)0x0;
  pTVar2 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = local_res10[0];
  pTVar3 = &local_38;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  FilterArray(pTVar2,(TSubclassOf<AActor>)&local_res20,pTVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetArrayPropertyByName @ 147e2de80

void __cdecl
UKismetArrayLibrary::execSetArrayPropertyByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  void *pvVar7;
  longlong local_res10;
  UObject *local_res20;
  longlong lVar8;
  TFieldIterator<FArrayProperty> local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pUVar5 = local_res20;
  lVar4 = local_res10;
  puVar3 = param_2->MostRecentPropertyAddress;
  if ((param_2->MostRecentProperty == (FProperty *)0x0) ||
     ((*(uint *)(param_2->MostRecentProperty->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if ((local_res20 != (UObject *)0x0) &&
       (local_30.Struct = *(UStruct **)&local_res20->field_0x10, local_res10 != 0)) {
      if (local_30.Struct == (UStruct *)0x0) {
        local_30.Field = (FField *)0x0;
      }
      else {
        local_30.Field = (local_30.Struct)->ChildProperties;
      }
      local_30.InterfaceIndex = -1;
      local_30.bIncludeSuper = true;
      local_30.bIncludeDeprecated = true;
      local_30.bIncludeInterface = false;
      TFieldIterator<FArrayProperty>::IterateToNext(&local_30);
      pFVar2 = (FProperty *)local_30.Field;
      while (pFVar2 != (FProperty *)0x0) {
        local_30.Field = (FField *)pFVar2;
        bVar6 = IsThisNotNull(pFVar2,"FField::GetFName");
        if (bVar6) {
          lVar8 = pFVar2->_padding_;
        }
        else {
          lVar8 = 0;
        }
        if (lVar8 == lVar4) {
          if (pFVar2 == (FProperty *)0x0) {
            return;
          }
          pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar2,pUVar5,0);
          (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,pvVar7,puVar3,1,lVar8);
          return;
        }
        local_30.Field = (FField *)pFVar2->_padding_;
        TFieldIterator<FArrayProperty>::IterateToNext(&local_30);
        pFVar2 = (FProperty *)local_30.Field;
      }
    }
  }
  return;
}

// execSortByteArray @ 147e33410

void __cdecl UKismetArrayLibrary::execSortByteArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  void **ppvVar5;
  bool bVar6;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  int local_44;
  void *local_40;
  undefined8 local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  ppvVar5 = &local_40;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  bVar6 = local_44 == 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  local_res20[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  puVar4 = *ppvVar5;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::
      IntroSortInternal<unsigned_char,int,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TLess<unsigned_char>_>_>
                (puVar4,iVar2,(FIdentityFunctor)0x0,(TLess<unsigned_char> *)local_res20);
    }
    else {
      AlgoImpl::
      IntroSortInternal<unsigned_char,int,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TGreater<unsigned_char>_>_>
                (puVar4,iVar2,local_res10[0],(TGreater<unsigned_char> *)local_48);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::
    StableSortInternal<unsigned_char,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TLess<unsigned_char>_>_>
              (puVar4,iVar2,(FIdentityFunctor)0x0,(TLess<unsigned_char> *)local_res20);
  }
  else {
    AlgoImpl::
    StableSortInternal<unsigned_char,FIdentityFunctor,TDereferenceWrapper<unsigned_char,TGreater<unsigned_char>_>_>
              (puVar4,iVar2,local_res10[0],(TGreater<unsigned_char> *)local_48);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSortFloatArray @ 147e33590

void __cdecl UKismetArrayLibrary::execSortFloatArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  double *pdVar4;
  void **ppvVar5;
  bool bVar6;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  int local_44;
  void *local_40;
  undefined8 local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  ppvVar5 = &local_40;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  bVar6 = local_44 == 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  local_res20[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  pdVar4 = *ppvVar5;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::
      IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<double>_>_>
                (pdVar4,iVar2,(FIdentityFunctor)0x0,(TLess<double> *)local_res20);
    }
    else {
      AlgoImpl::
      IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TGreater<double>_>_>
                (pdVar4,iVar2,local_res10[0],(TGreater<double> *)local_48);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::
    StableSortInternal<double,FIdentityFunctor,TDereferenceWrapper<double,TLess<double>_>_>
              (pdVar4,iVar2,(FIdentityFunctor)0x0,(TLess<double> *)local_res20);
  }
  else {
    AlgoImpl::
    StableSortInternal<double,FIdentityFunctor,TDereferenceWrapper<double,TGreater<double>_>_>
              (pdVar4,iVar2,local_res10[0],(TGreater<double> *)local_48);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSortInt64Array @ 147e33710

void __cdecl UKismetArrayLibrary::execSortInt64Array(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  long64 *plVar4;
  void **ppvVar5;
  bool bVar6;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  int local_44;
  void *local_40;
  undefined8 local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  ppvVar5 = &local_40;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  bVar6 = local_44 == 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  local_res20[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  plVar4 = *ppvVar5;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::
      IntroSortInternal<__int64,int,FIdentityFunctor,TDereferenceWrapper<__int64,TLess<__int64>_>_>
                (plVar4,iVar2,(FIdentityFunctor)0x0,(TLess<__int64> *)local_res20);
    }
    else {
      AlgoImpl::
      IntroSortInternal<__int64,int,FIdentityFunctor,TDereferenceWrapper<__int64,TGreater<__int64>_>_>
                (plVar4,iVar2,local_res10[0],(TGreater<__int64> *)local_48);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::
    StableSortInternal<__int64,FIdentityFunctor,TDereferenceWrapper<__int64,TLess<__int64>_>_>
              (plVar4,iVar2,(FIdentityFunctor)0x0,(TLess<__int64> *)local_res20);
  }
  else {
    AlgoImpl::
    StableSortInternal<__int64,FIdentityFunctor,TDereferenceWrapper<__int64,TGreater<__int64>_>_>
              (plVar4,iVar2,local_res10[0],(TGreater<__int64> *)local_48);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSortIntArray @ 147e33890

void __cdecl UKismetArrayLibrary::execSortIntArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  int *piVar4;
  void **ppvVar5;
  bool bVar6;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  int local_44;
  void *local_40;
  undefined8 local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  ppvVar5 = &local_40;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  bVar6 = local_44 == 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  local_res20[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  piVar4 = *ppvVar5;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (piVar4,iVar2,(FIdentityFunctor)0x0,(TLess<int> *)local_res20);
    }
    else {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
                (piVar4,iVar2,local_res10[0],(TGreater<int> *)local_48);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (piVar4,iVar2,(FIdentityFunctor)0x0,(TLess<int> *)local_res20);
  }
  else {
    AlgoImpl::StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
              (piVar4,iVar2,local_res10[0],(TGreater<int> *)local_48);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSortNameArray @ 147e33a10

void __cdecl UKismetArrayLibrary::execSortNameArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  FName *pFVar4;
  void **ppvVar5;
  bool bVar6;
  bool bVar7;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_58 [4];
  int local_54;
  int local_50 [2];
  void *local_48;
  undefined8 local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_54 = 0;
  ppvVar5 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  bVar6 = local_54 == 0;
  local_50[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  bVar7 = local_50[0] != 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar5 + 1);
  pFVar4 = *ppvVar5;
  local_res20[0] = bVar7;
  local_58[0] = bVar7;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_1>_>_>
                (pFVar4,iVar2,(FIdentityFunctor)0x0,(<lambda_1> *)local_res20);
    }
    else {
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_2>_>_>
                (pFVar4,iVar2,local_res10[0],(<lambda_2> *)local_58);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::
    StableSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_1>_>_>
              (pFVar4,iVar2,(FIdentityFunctor)0x0,(<lambda_1> *)local_res20);
  }
  else {
    AlgoImpl::
    StableSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,_UKismetArrayLibrary::SortNameArray_::__l2::<lambda_2>_>_>
              (pFVar4,iVar2,local_res10[0],(<lambda_2> *)local_58);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execSortStringArray @ 147e33bc0

void __cdecl
UKismetArrayLibrary::execSortStringArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  FString *pFVar4;
  FString **ppFVar5;
  bool bVar6;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  int local_44;
  FString *local_40;
  undefined8 local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_40 = (FString *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  ppFVar5 = &local_40;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar5 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  bVar6 = local_44 == 0;
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48[0] = 0;
  local_res20[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppFVar5 + 1);
  pFVar4 = *ppFVar5;
  if (bVar6) {
    if (local_res10[0] == (FIdentityFunctor)0x0) {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
                (pFVar4,iVar2,(FIdentityFunctor)0x0,(TLess<FString> *)local_res20);
    }
    else {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
                (pFVar4,iVar2,local_res10[0],(TGreater<FString> *)local_48);
    }
  }
  else if (local_res10[0] == (FIdentityFunctor)0x0) {
    AlgoImpl::
    StableSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              (pFVar4,iVar2,(FIdentityFunctor)0x0,(TLess<FString> *)local_res20);
  }
  else {
    AlgoImpl::
    StableSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
              (pFVar4,iVar2,local_res10[0],(TGreater<FString> *)local_48);
  }
  DestructItems<FString,int>(local_40,(int)local_38);
  if (local_40 != (FString *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}


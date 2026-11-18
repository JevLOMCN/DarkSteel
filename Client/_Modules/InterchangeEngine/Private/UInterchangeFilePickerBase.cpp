// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 12

// StaticClass @ 14e4cc0a0

UClass * __cdecl UInterchangeFilePickerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeFilePickerBase",
               &Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton,
               StaticRegisterNativesUInterchangeFilePickerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFilePickerBase>,
               InternalVTableHelperCtorCaller<UInterchangeFilePickerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton;
}

// UInterchangeFilePickerBase @ 14e4d84c0

UInterchangeFilePickerBase * __thiscall
UInterchangeFilePickerBase::UInterchangeFilePickerBase
          (UInterchangeFilePickerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeFilePickerBase__6B_;
  return this;
}

// UInterchangeFilePickerBase @ 14e4d84f0

UInterchangeFilePickerBase * __thiscall
UInterchangeFilePickerBase::UInterchangeFilePickerBase
          (UInterchangeFilePickerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeFilePickerBase__6B_;
  return this;
}

// ~UInterchangeFilePickerBase @ 14e4dacf0

void __thiscall
UInterchangeFilePickerBase::~UInterchangeFilePickerBase(UInterchangeFilePickerBase *this)

{
  *(undefined ***)this = &___7UInterchangeFilePickerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FilePickerForTranslatorAssetType @ 14e4f2810

bool __thiscall
UInterchangeFilePickerBase::FilePickerForTranslatorAssetType
          (UInterchangeFilePickerBase *this,EInterchangeTranslatorAssetType param_1,
          FInterchangeFilePickerParameters *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// FilePickerForTranslatorType @ 14e4f2820

bool __thiscall
UInterchangeFilePickerBase::FilePickerForTranslatorType
          (UInterchangeFilePickerBase *this,EInterchangeTranslatorType param_1,
          FInterchangeFilePickerParameters *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// GetPrivateStaticClass @ 14e4f7e70

UClass * __cdecl UInterchangeFilePickerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeFilePickerBase",
               &Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton,
               StaticRegisterNativesUInterchangeFilePickerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFilePickerBase>,
               InternalVTableHelperCtorCaller<UInterchangeFilePickerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton;
}

// ScriptedFilePickerForTranslatorAssetType @ 14e503a00

bool __thiscall
UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorAssetType
          (UInterchangeFilePickerBase *this,EInterchangeTranslatorAssetType param_1,
          FInterchangeFilePickerParameters *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  ForAnyElementType FVar6;
  undefined1 uVar7;
  UFunction *this_00;
  UClass *pUVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_98 [16];
  EInterchangeTranslatorAssetType local_88 [8];
  bool local_80;
  FText local_78;
  FString local_68;
  bool local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  char local_30;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType);
  pUVar8 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar8->ClassFlags & CLASS_Native) != CLASS_None) {
    uVar7 = (**(code **)(*(longlong *)this + 0x2b0))(this,param_1,param_2,param_3);
    return (bool)uVar7;
  }
  local_80 = false;
  FText::FText(&local_78);
  ::FString::FString(&local_68,L"");
  TVar5.Reference = local_78.TextData.Reference;
  pIVar3 = (param_2->Title).TextData.Reference;
  local_80 = param_2->bAllowMultipleFiles;
  local_58 = false;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_30 = '\0';
  local_88[0] = param_1;
  if (local_78.TextData.Reference != pIVar3) {
    local_78.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_98);
    }
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
    }
  }
  local_78.Flags = (param_2->Title).Flags;
  ::FString::operator=(&local_68,&param_2->DefaultPath);
  local_58 = param_2->bShowAllFactoriesExtension;
  pTVar1 = &param_2->ExtraFormats;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_50,pTVar1);
  if (&local_40 != param_3) {
    DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
    iVar9 = param_3->ArrayNum;
    pFVar4 = (param_3->AllocatorInstance).Data;
    local_40.ArrayNum = iVar9;
    if ((iVar9 == 0) && (local_40.ArrayMax == 0)) {
      local_40.ArrayNum = 0;
      local_40.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,local_40.ArrayMax,&local_40.AllocatorInstance,iVar9,&local_40.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_40.AllocatorInstance.Data,(FString *)pFVar4,iVar9);
    }
  }
  (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_88);
  param_2->bAllowMultipleFiles = local_80;
  pIVar3 = (param_2->Title).TextData.Reference;
  if (pIVar3 != local_78.TextData.Reference) {
    (param_2->Title).TextData.Reference = local_78.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_98);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->Title).Flags = local_78.Flags;
  ::FString::operator=(&param_2->DefaultPath,&local_68);
  param_2->bShowAllFactoriesExtension = local_58;
  if (pTVar1 != &local_50) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(param_2->ExtraFormats).ArrayNum);
    FVar6.Data = local_50.AllocatorInstance.Data;
    iVar9 = local_50.ArrayNum;
    piVar2 = &(param_2->ExtraFormats).ArrayMax;
    (param_2->ExtraFormats).ArrayNum = local_50.ArrayNum;
    if ((local_50.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_50.ArrayNum,*piVar2,&pTVar1->AllocatorInstance,local_50.ArrayNum,
                 piVar2);
      ConstructItems<FString,FString,int>
                ((pTVar1->AllocatorInstance).Data,(FString *)FVar6.Data,iVar9);
    }
  }
  if (param_3 != &local_40) {
    DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    FVar6.Data = local_40.AllocatorInstance.Data;
    iVar9 = local_40.ArrayNum;
    piVar2 = &param_3->ArrayMax;
    param_3->ArrayNum = local_40.ArrayNum;
    if ((local_40.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      iVar9 = 0;
      goto LAB_14e503c98;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_40.ArrayNum,*piVar2,&param_3->AllocatorInstance,local_40.ArrayNum,piVar2
              );
    ConstructItems<FString,FString,int>
              ((param_3->AllocatorInstance).Data,(FString *)FVar6.Data,iVar9);
  }
  iVar9 = local_40.ArrayNum;
LAB_14e503c98:
  bVar10 = local_30 != '\0';
  DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,iVar9);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return bVar10;
}

// ScriptedFilePickerForTranslatorType @ 14e503d40

bool __thiscall
UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorType
          (UInterchangeFilePickerBase *this,EInterchangeTranslatorType param_1,
          FInterchangeFilePickerParameters *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  ForAnyElementType FVar6;
  undefined1 uVar7;
  UFunction *this_00;
  UClass *pUVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_98 [16];
  EInterchangeTranslatorType local_88 [8];
  bool local_80;
  FText local_78;
  FString local_68;
  bool local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  char local_30;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType);
  pUVar8 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar8->ClassFlags & CLASS_Native) != CLASS_None) {
    uVar7 = (**(code **)(*(longlong *)this + 0x2b8))(this,param_1,param_2,param_3);
    return (bool)uVar7;
  }
  local_80 = false;
  FText::FText(&local_78);
  ::FString::FString(&local_68,L"");
  TVar5.Reference = local_78.TextData.Reference;
  pIVar3 = (param_2->Title).TextData.Reference;
  local_80 = param_2->bAllowMultipleFiles;
  local_58 = false;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_30 = '\0';
  local_88[0] = param_1;
  if (local_78.TextData.Reference != pIVar3) {
    local_78.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_98);
    }
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
    }
  }
  local_78.Flags = (param_2->Title).Flags;
  ::FString::operator=(&local_68,&param_2->DefaultPath);
  local_58 = param_2->bShowAllFactoriesExtension;
  pTVar1 = &param_2->ExtraFormats;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_50,pTVar1);
  if (&local_40 != param_3) {
    DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
    iVar9 = param_3->ArrayNum;
    pFVar4 = (param_3->AllocatorInstance).Data;
    local_40.ArrayNum = iVar9;
    if ((iVar9 == 0) && (local_40.ArrayMax == 0)) {
      local_40.ArrayNum = 0;
      local_40.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,local_40.ArrayMax,&local_40.AllocatorInstance,iVar9,&local_40.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_40.AllocatorInstance.Data,(FString *)pFVar4,iVar9);
    }
  }
  (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_88);
  param_2->bAllowMultipleFiles = local_80;
  pIVar3 = (param_2->Title).TextData.Reference;
  if (pIVar3 != local_78.TextData.Reference) {
    (param_2->Title).TextData.Reference = local_78.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_98);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->Title).Flags = local_78.Flags;
  ::FString::operator=(&param_2->DefaultPath,&local_68);
  param_2->bShowAllFactoriesExtension = local_58;
  if (pTVar1 != &local_50) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(param_2->ExtraFormats).ArrayNum);
    FVar6.Data = local_50.AllocatorInstance.Data;
    iVar9 = local_50.ArrayNum;
    piVar2 = &(param_2->ExtraFormats).ArrayMax;
    (param_2->ExtraFormats).ArrayNum = local_50.ArrayNum;
    if ((local_50.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_50.ArrayNum,*piVar2,&pTVar1->AllocatorInstance,local_50.ArrayNum,
                 piVar2);
      ConstructItems<FString,FString,int>
                ((pTVar1->AllocatorInstance).Data,(FString *)FVar6.Data,iVar9);
    }
  }
  if (param_3 != &local_40) {
    DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    FVar6.Data = local_40.AllocatorInstance.Data;
    iVar9 = local_40.ArrayNum;
    piVar2 = &param_3->ArrayMax;
    param_3->ArrayNum = local_40.ArrayNum;
    if ((local_40.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      iVar9 = 0;
      goto LAB_14e503fd8;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_40.ArrayNum,*piVar2,&param_3->AllocatorInstance,local_40.ArrayNum,piVar2
              );
    ConstructItems<FString,FString,int>
              ((param_3->AllocatorInstance).Data,(FString *)FVar6.Data,iVar9);
  }
  iVar9 = local_40.ArrayNum;
LAB_14e503fd8:
  bVar10 = local_30 != '\0';
  DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,iVar9);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return bVar10;
}

// StaticRegisterNativesUInterchangeFilePickerBase @ 14e50aa60

void __cdecl UInterchangeFilePickerBase::StaticRegisterNativesUInterchangeFilePickerBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeFilePickerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execScriptedFilePickerForTranslatorAssetType @ 14e50efa0

void __cdecl
UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorAssetType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  FString **ppFVar4;
  undefined1 local_res8 [8];
  FString *local_68;
  undefined8 local_60;
  uchar local_58 [8];
  FText local_50;
  FString local_40;
  undefined1 local_30;
  FString *local_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58[0] = '\0';
  FText::FText(&local_50);
  ::FString::FString(&local_40,L"");
  local_30 = 0;
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_68 = (FString *)0x0;
  local_60 = 0;
  puVar3 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  ppFVar4 = &local_68;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar4 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8[0],puVar3,ppFVar4);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FString,int>(local_68,(int)local_60);
  if (local_68 != (FString *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return;
}

// execScriptedFilePickerForTranslatorType @ 14e50f170

void __cdecl
UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  FString **ppFVar4;
  undefined1 local_res8 [8];
  FString *local_68;
  undefined8 local_60;
  uchar local_58 [8];
  FText local_50;
  FString local_40;
  undefined1 local_30;
  FString *local_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58[0] = '\0';
  FText::FText(&local_50);
  ::FString::FString(&local_40,L"");
  local_30 = 0;
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_68 = (FString *)0x0;
  local_60 = 0;
  puVar3 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  ppFVar4 = &local_68;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar4 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0],puVar3,ppFVar4);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FString,int>(local_68,(int)local_60);
  if (local_68 != (FString *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return;
}


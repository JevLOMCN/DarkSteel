// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 32

// StaticClass @ 14c695340

UClass * __cdecl UMovieSceneFolderExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneFolderExtensions",
               &Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneFolderExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFolderExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneFolderExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton;
}

// UMovieSceneFolderExtensions @ 14c698700

UMovieSceneFolderExtensions * __thiscall
UMovieSceneFolderExtensions::UMovieSceneFolderExtensions
          (UMovieSceneFolderExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneFolderExtensions__6B_;
  return this;
}

// UMovieSceneFolderExtensions @ 14c698730

UMovieSceneFolderExtensions * __thiscall
UMovieSceneFolderExtensions::UMovieSceneFolderExtensions
          (UMovieSceneFolderExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneFolderExtensions__6B_;
  return this;
}

// ~UMovieSceneFolderExtensions @ 14c698d20

void __thiscall
UMovieSceneFolderExtensions::~UMovieSceneFolderExtensions(UMovieSceneFolderExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneFolderExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddChildFolder @ 14c6997e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::AddChildFolder(UMovieSceneFolder *param_1,UMovieSceneFolder *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildFolder with a null parent folder",Error,(FName)0x0);
    return false;
  }
  if (param_2 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildFolder with a null child folder",Error,(FName)0x0);
    return false;
  }
  UMovieSceneFolder::AddChildFolder(param_1,param_2);
  return true;
}

// AddChildObjectBinding @ 14c699840

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::AddChildObjectBinding
          (UMovieSceneFolder *param_1,FMovieSceneBindingProxy *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildObjectBinding with a null folder",Error,(FName)0x0);
  }
  else if ((((param_2->BindingID).D != 0 || (param_2->BindingID).C != 0) ||
           (param_2->BindingID).B != 0) || (param_2->BindingID).A != 0) {
    UMovieSceneFolder::AddChildObjectBinding(param_1,&param_2->BindingID);
    return true;
  }
  return false;
}

// AddChildTrack @ 14c699890

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::AddChildTrack(UMovieSceneFolder *param_1,UMovieSceneTrack *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call AddChildTrack with a null folder",Error,(FName)0x0)
    ;
    return false;
  }
  if (param_2 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call AddChildTrack with a null track",Error,(FName)0x0);
    return false;
  }
  UMovieSceneFolder::AddChildTrack(param_1,param_2);
  return true;
}

// GetChildFolders @ 14c69de00

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneFolderExtensions::GetChildFolders
          (TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneFolder *param_1)

{
  UMovieSceneFolder **_Src;
  TArrayView<UMovieSceneFolder_*_const,int> *pTVar1;
  longlong lVar2;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  TArrayView<UMovieSceneFolder_*_const,int> local_18;
  
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetChildFolders on a null folder",Error,(FName)0x0)
    ;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pTVar1 = UMovieSceneFolder::GetChildFolders(param_1,&local_18);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = pTVar1->ArrayNum;
  lVar2 = (longlong)local_20;
  _Src = pTVar1->DataPtr;
  if (local_20 == 0) {
    local_1c = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar2 << 3);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = local_20;
  __return_storage_ptr__->ArrayMax = local_1c;
  return __return_storage_ptr__;
}

// GetChildObjectBindings @ 14c69df00

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneFolderExtensions::GetChildObjectBindings
          (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneFolder *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  UObject *local_48;
  
  if (param_1 == (UMovieSceneFolder *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetChildObjectBindings with a null folder",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar9 = (UObject *)param_1->_padding_;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (pUVar9 == (UObject *)0x0) {
LAB_14c69df9f:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14c69df9f;
  }
  pUVar9 = *(UObject **)&pUVar9->field_0x20;
  if (pUVar9 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14c69dfd1;
  }
  pUVar9 = (UObject *)0x0;
LAB_14c69dfd1:
  pTVar6 = UMovieSceneFolder::GetChildObjectBindings(param_1);
  iVar1 = pTVar6->ArrayNum;
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  pFVar10 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar6->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar10) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
      __return_storage_ptr__->ArrayNum = (int)local_60;
      __return_storage_ptr__->ArrayMax = local_60._4_4_;
      return __return_storage_ptr__;
    }
    local_58 = *(undefined8 *)pFVar8;
    uStack_50 = *(undefined8 *)(pFVar8 + 8);
    local_48 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    if (((local_68.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_68.Data + (longlong)local_60._4_4_ * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_60;
    if ((int)local_60 == local_60._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_68,(int *)((longlong)&local_60 + 4));
    }
    local_60 = CONCAT44(local_60._4_4_,iVar4 + 1);
    *(undefined8 *)(local_68.Data + (longlong)iVar4 * 0x18) = local_58;
    *(undefined8 *)(local_68.Data + (longlong)iVar4 * 0x18 + 8) = uStack_50;
    *(UObject **)(local_68.Data + (longlong)iVar4 * 0x18 + 0x10) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar7 = (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar7;
}

// GetChildTracks @ 14c69e300

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneFolderExtensions::GetChildTracks
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneFolder *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetChildTracks with a null folder",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  pTVar3 = UMovieSceneFolder::GetChildTracks(param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// GetFolderColor @ 14c69ee90

/* WARNING: Enum "Type": Some values do not have unique names */

FColor __cdecl UMovieSceneFolderExtensions::GetFolderColor(UMovieSceneFolder *param_1)

{
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetFolderColor on a null folder",Error,(FName)0x0);
    *(undefined4 *)&param_1->_padding_ = 0;
    return (FColor)SUB84(param_1,0);
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FColor)SUB84(param_1,0);
}

// GetFolderName @ 14c69eee0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl UMovieSceneFolderExtensions::GetFolderName(UMovieSceneFolder *param_1)

{
  UMovieSceneFolder *in_RDX;
  
  if (in_RDX == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetFolderName on a null folder",Error,(FName)0x0);
    param_1->_padding_ = 0;
    return (FName)param_1;
  }
  UMovieSceneFolder::GetFolderName(in_RDX);
  return (FName)param_1;
}

// GetPrivateStaticClass @ 14c6a1b10

UClass * __cdecl UMovieSceneFolderExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneFolderExtensions",
               &Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneFolderExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFolderExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneFolderExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton;
}

// RemoveChildFolder @ 14c6a4920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::RemoveChildFolder
          (UMovieSceneFolder *param_1,UMovieSceneFolder *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildFolder with a null parent folder",Error,(FName)0x0);
    return false;
  }
  if (param_2 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildFolder with a null child folder",Error,(FName)0x0);
    return false;
  }
  UMovieSceneFolder::RemoveChildFolder(param_1,param_2);
  return true;
}

// RemoveChildObjectBinding @ 14c6a4980

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::RemoveChildObjectBinding
          (UMovieSceneFolder *param_1,FMovieSceneBindingProxy *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildObjectBinding with a null folder",Error,(FName)0x0);
  }
  else if ((((param_2->BindingID).D != 0 || (param_2->BindingID).C != 0) ||
           (param_2->BindingID).B != 0) || (param_2->BindingID).A != 0) {
    UMovieSceneFolder::RemoveChildObjectBinding(param_1,&param_2->BindingID);
    return true;
  }
  return false;
}

// RemoveChildTrack @ 14c6a49d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneFolderExtensions::RemoveChildTrack(UMovieSceneFolder *param_1,UMovieSceneTrack *param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildTrack with a null folder",Error,(FName)0x0);
    return false;
  }
  if (param_2 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildTrack with a null track",Error,(FName)0x0);
    return false;
  }
  UMovieSceneFolder::RemoveChildTrack(param_1,param_2);
  return true;
}

// SetFolderColor @ 14c6a5740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneFolderExtensions::SetFolderColor(UMovieSceneFolder *param_1,FColor param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetFolderColor on a null folder",Error,(FName)0x0);
    return false;
  }
  return true;
}

// SetFolderName @ 14c6a5780

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneFolderExtensions::SetFolderName(UMovieSceneFolder *param_1,FName param_2)

{
  if (param_1 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetFolderName on a null folder",Error,(FName)0x0);
    return false;
  }
  UMovieSceneFolder::SetFolderName(param_1,param_2);
  return true;
}

// StaticRegisterNativesUMovieSceneFolderExtensions @ 14c6a70e0

void __cdecl UMovieSceneFolderExtensions::StaticRegisterNativesUMovieSceneFolderExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChildFolder @ 14c6a88c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execAddChildFolder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  UMovieSceneFolder *local_res18;
  undefined8 local_res20;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildFolder with a null parent folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildFolder with a null child folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  UMovieSceneFolder::AddChildFolder(local_res10,local_res18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execAddChildObjectBinding @ 14c6a89d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execAddChildObjectBinding
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  undefined8 local_res18;
  FGuid local_38;
  UObject *local_28;
  FGuid local_20;
  UObject *local_10;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_10 = local_28;
  local_20.A = local_38.A;
  local_20.B = local_38.B;
  local_20.C = local_38.C;
  local_20.D = local_38.D;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddChildObjectBinding with a null folder",Error,(FName)0x0);
  }
  else if (((local_20.D != 0 || local_20.C != 0) || local_20.B != 0) || local_20.A != 0) {
    UMovieSceneFolder::AddChildObjectBinding(local_res10,&local_20);
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execAddChildTrack @ 14c6a8b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execAddChildTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  UMovieSceneTrack *local_res18;
  undefined8 local_res20;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UMovieSceneTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call AddChildTrack with a null folder",Error,(FName)0x0)
    ;
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18 == (UMovieSceneTrack *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call AddChildTrack with a null track",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  UMovieSceneFolder::AddChildTrack(local_res10,local_res18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetChildFolders @ 14c6ad6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execGetChildFolders(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder **_Src;
  TArrayView<UMovieSceneFolder_*_const,int> *pTVar2;
  ForAnyElementType FVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  UMovieSceneFolder *local_res10;
  UMovieSceneFolder *local_res18;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TArrayView<UMovieSceneFolder_*_const,int> local_38;
  undefined1 local_28 [16];
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call GetChildFolders on a null folder",Error,(FName)0x0)
    ;
    FVar3.Data = (FScriptContainerElement *)0x0;
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    pTVar2 = UMovieSceneFolder::GetChildFolders(local_res10,&local_38);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = pTVar2->ArrayNum;
    lVar5 = (longlong)local_40;
    _Src = pTVar2->DataPtr;
    if (local_40 == 0) {
      FVar3.Data = local_48.Data;
      iVar6 = 0;
      iVar4 = local_40;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar5 << 3);
      FVar3.Data = local_48.Data;
      iVar6 = local_3c;
      iVar4 = local_40;
    }
  }
  if (param_3 != local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar3.Data;
    FVar3.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar4;
    *(int *)((longlong)param_3 + 0xc) = iVar6;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// execGetChildObjectBindings @ 14c6ad870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execGetChildObjectBindings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UMovieSceneFolder *this;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  ForAnyElementType FVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  FScriptContainerElement *pFVar13;
  UObject *pUVar14;
  undefined1 local_res10 [8];
  UMovieSceneFolder *local_res18;
  undefined8 local_res20;
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  FScriptContainerElement local_58 [16];
  UObject *local_48;
  
  pUVar14 = (UObject *)0x0;
  local_res18 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetChildObjectBindings with a null folder",Error,(FName)0x0);
    FVar9.Data = (FScriptContainerElement *)pUVar14;
    uVar12 = 0;
    uVar10 = 0;
    goto LAB_14c6adad3;
  }
  pUVar8 = (UObject *)local_res18->_padding_;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (pUVar8 == (UObject *)0x0) {
LAB_14c6ad95d:
    pUVar8 = pUVar14;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14c6ad95d;
  }
  pUVar8 = *(UObject **)&pUVar8->field_0x20;
  if (pUVar8 == (UObject *)0x0) {
LAB_14c6ad98c:
    pUVar8 = pUVar14;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14c6ad98c;
  }
  pTVar7 = UMovieSceneFolder::GetChildObjectBindings(this);
  iVar1 = pTVar7->ArrayNum;
  pFVar13 = (pTVar7->AllocatorInstance).Data;
  pFVar11 = pFVar13 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar7->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar11) break;
    local_58._0_8_ = *(undefined8 *)pFVar13;
    local_58._8_8_ = *(undefined8 *)(pFVar13 + 8);
    local_48 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    if (((local_78.Data <= (UObject *)local_58) &&
        (local_58 < local_78.Data + (longlong)local_70._4_4_ * 0x18)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_78,(int *)((longlong)&local_70 + 4));
    }
    local_70 = CONCAT44(local_70._4_4_,iVar5 + 1);
    *(undefined8 *)(local_78.Data + (longlong)iVar5 * 0x18) = local_58._0_8_;
    *(undefined8 *)(local_78.Data + (longlong)iVar5 * 0x18 + 8) = local_58._8_8_;
    *(UObject **)(local_78.Data + (longlong)iVar5 * 0x18 + 0x10) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    pFVar13 = pFVar13 + 0x10;
  }
  FVar9.Data = local_78.Data;
  uVar12 = (int)local_70;
  uVar10 = local_70._4_4_;
LAB_14c6adad3:
  if (param_3 != local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar9.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar12;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
    FVar9.Data = (FScriptContainerElement *)pUVar14;
  }
  if ((UObject *)FVar9.Data != (UObject *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// execGetChildTracks @ 14c6adc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execGetChildTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UMovieSceneFolder *local_res10;
  undefined8 local_res18;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetChildTracks with a null folder",Error,(FName)0x0);
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pTVar3 = UMovieSceneFolder::GetChildTracks(local_res10);
    local_28.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar3->ArrayNum;
    _Src = (pTVar3->AllocatorInstance).Data;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,_Src,(longlong)iVar1 << 3);
    }
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetFolderColor @ 14c6aeaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execGetFolderColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetFolderColor on a null folder",Error,(FName)0x0);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFolderName @ 14c6aeb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execGetFolderName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  UMovieSceneFolder *local_res18;
  
  local_res18 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieSceneFolder *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetFolderName on a null folder",Error,(FName)0x0);
    local_res10 = 0;
  }
  else {
    UMovieSceneFolder::GetFolderName(local_res18);
  }
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execRemoveChildFolder @ 14c6b4970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execRemoveChildFolder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  UMovieSceneFolder *local_res18;
  undefined8 local_res20;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildFolder with a null parent folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildFolder with a null child folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  UMovieSceneFolder::RemoveChildFolder(local_res10,local_res18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execRemoveChildObjectBinding @ 14c6b4a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execRemoveChildObjectBinding
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  undefined8 local_res18;
  FGuid local_38;
  UObject *local_28;
  FGuid local_20;
  UObject *local_10;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_10 = local_28;
  local_20.A = local_38.A;
  local_20.B = local_38.B;
  local_20.C = local_38.C;
  local_20.D = local_38.D;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildObjectBinding with a null folder",Error,(FName)0x0);
  }
  else if (((local_20.D != 0 || local_20.C != 0) || local_20.B != 0) || local_20.A != 0) {
    UMovieSceneFolder::RemoveChildObjectBinding(local_res10,&local_20);
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveChildTrack @ 14c6b4bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execRemoveChildTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *local_res10;
  UMovieSceneTrack *local_res18;
  undefined8 local_res20;
  
  local_res10 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UMovieSceneTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildTrack with a null folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18 == (UMovieSceneTrack *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveChildTrack with a null track",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  UMovieSceneFolder::RemoveChildTrack(local_res10,local_res18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetFolderColor @ 14c6b6870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execSetFolderColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == 0) {
    local_res18[1] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetFolderColor on a null folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetFolderName @ 14c6b6960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneFolderExtensions::execSetFolderName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UMovieSceneFolder *local_res18;
  undefined8 local_res20;
  
  local_res18 = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieSceneFolder *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetFolderName on a null folder",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  UMovieSceneFolder::SetFolderName(local_res18,local_res10);
  *(undefined1 *)param_3 = 1;
  return;
}


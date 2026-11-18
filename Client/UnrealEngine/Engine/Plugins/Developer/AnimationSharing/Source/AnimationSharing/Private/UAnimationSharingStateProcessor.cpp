// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 15

// StaticClass @ 14e2a7450

UClass * __cdecl UAnimationSharingStateProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingStateProcessor",
               &Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton,
               StaticRegisterNativesUAnimationSharingStateProcessor,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationSharingStateProcessor>,
               InternalVTableHelperCtorCaller<UAnimationSharingStateProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton;
}

// UAnimationSharingStateProcessor @ 14e2abef0

UAnimationSharingStateProcessor * __thiscall
UAnimationSharingStateProcessor::UAnimationSharingStateProcessor
          (UAnimationSharingStateProcessor *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->AnimationStateEnum).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAnimationSharingStateProcessor__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UAnimationSharingStateProcessor @ 14e2abf40

UAnimationSharingStateProcessor * __thiscall
UAnimationSharingStateProcessor::UAnimationSharingStateProcessor
          (UAnimationSharingStateProcessor *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->AnimationStateEnum).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAnimationSharingStateProcessor__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UAnimationSharingStateProcessor @ 14e2ac530

void __thiscall
UAnimationSharingStateProcessor::~UAnimationSharingStateProcessor
          (UAnimationSharingStateProcessor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAnimationSharingStateProcessor__6B_;
  pvVar1 = *(void **)&(this->AnimationStateEnum).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAnimationStateEnum @ 14e2af820

UEnum * __thiscall
UAnimationSharingStateProcessor::GetAnimationStateEnum(UAnimationSharingStateProcessor *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  UEnum *pUVar2;
  UEnum *local_res10 [3];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = (UEnum *)0x0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2af885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UEnum *)(**(code **)(this->_padding_ + 0x2b8))(this);
  return pUVar2;
}

// GetAnimationStateEnum_Implementation @ 14e2af8a0

UEnum * __thiscall
UAnimationSharingStateProcessor::GetAnimationStateEnum_Implementation
          (UAnimationSharingStateProcessor *this)

{
  UEnum *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e2af8a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UEnum *)(**(code **)(this->_padding_ + 0x2c8))();
  return pUVar1;
}

// GetAnimationStateEnum_Internal @ 14e2af8b0

UEnum * __thiscall
UAnimationSharingStateProcessor::GetAnimationStateEnum_Internal
          (UAnimationSharingStateProcessor *this)

{
  int iVar1;
  UEnum *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UEnum *)TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AnimationStateEnum);
  if (pUVar2 == (UEnum *)0x0) {
    if (*(longlong *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x8 == 0) {
      return (UEnum *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->AnimationStateEnum).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UEnum *)TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AnimationStateEnum)
    ;
  }
  if (pUVar2 != (UEnum *)0x0) {
    pUVar3 = Z_Construct_UClass_UEnum_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UEnum *)0x0;
}

// GetPrivateStaticClass @ 14e2b06d0

UClass * __cdecl UAnimationSharingStateProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingStateProcessor",
               &Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton,
               StaticRegisterNativesUAnimationSharingStateProcessor,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationSharingStateProcessor>,
               InternalVTableHelperCtorCaller<UAnimationSharingStateProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton;
}

// ProcessActorState @ 14e2b1c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingStateProcessor::ProcessActorState
          (UAnimationSharingStateProcessor *this,int *param_1,AActor *param_2,uchar param_3,
          uchar param_4,bool *param_5)

{
  UFunction *this_00;
  UClass *pUVar1;
  int local_28 [2];
  AActor *local_20;
  uchar local_18;
  uchar local_17;
  bool local_16;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimationSharingStateProcessor_ProcessActorState);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28[0] = *param_1;
    local_17 = param_4;
    local_16 = *param_5 != false;
    local_20 = param_2;
    local_18 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_28);
    *param_1 = local_28[0];
    *param_5 = local_16;
  }
  else {
    (**(code **)(this->_padding_ + 0x2b0))(this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ProcessActorState_Implementation @ 14e2b1cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingStateProcessor::ProcessActorState_Implementation
          (UAnimationSharingStateProcessor *this,int *param_1,AActor *param_2,uchar param_3,
          uchar param_4,bool *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014e2b1d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// ProcessActorState_Internal @ 14e2b1d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingStateProcessor::ProcessActorState_Internal
          (UAnimationSharingStateProcessor *this,int *param_1,AActor *param_2,uchar param_3,
          uchar param_4,bool *param_5)

{
  return;
}

// ProcessActorStates @ 14e2b1d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingStateProcessor::ProcessActorStates
          (UAnimationSharingStateProcessor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  AActor *pAVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < param_2->ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < param_5->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_5->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar8 < param_4->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (param_4->AllocatorInstance).Data[lVar9];
      uVar7 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (param_3->AllocatorInstance).Data[lVar9];
      uVar7 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar4 = *(AActor **)((param_2->AllocatorInstance).Data + lVar9 * 8);
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ProcessActorState(this,(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4),
                        pAVar4,(uchar)FVar2,(uchar)FVar1,(bool *)(pFVar3 + lVar9));
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < param_2->ArrayNum);
  }
  return;
}

// StaticRegisterNativesUAnimationSharingStateProcessor @ 14e2b9180

void __cdecl
UAnimationSharingStateProcessor::StaticRegisterNativesUAnimationSharingStateProcessor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAnimationStateEnum @ 14e2be700

void __cdecl
UAnimationSharingStateProcessor::execGetAnimationStateEnum
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execProcessActorState @ 14e2be7f0

void __cdecl
UAnimationSharingStateProcessor::execProcessActorState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  uchar local_28 [8];
  undefined8 local_20;
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_20 = 0;
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))
            (param_1,puVar3,local_20,local_res20[0],local_res10[0],puVar2);
  return;
}


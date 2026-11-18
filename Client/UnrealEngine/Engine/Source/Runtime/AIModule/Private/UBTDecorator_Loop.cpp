// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146ea8b30

UClass * __cdecl UBTDecorator_Loop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Loop",
               &Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Loop,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTDecorator_Loop>,
               InternalVTableHelperCtorCaller<UBTDecorator_Loop>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton;
}

// UBTDecorator_Loop @ 146ec7280

UBTDecorator_Loop * __thiscall
UBTDecorator_Loop::UBTDecorator_Loop(UBTDecorator_Loop *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  (this->NumLoops)._padding_ = 0;
  *(undefined2 *)&(this->NumLoops)._padding_ = 0xffff;
  (this->NumLoops).DefaultValue = 0;
  (this->InfiniteLoopTimeoutTime)._padding_ = 0;
  *(undefined2 *)&(this->InfiniteLoopTimeoutTime)._padding_ = 0xffff;
  (this->InfiniteLoopTimeoutTime).DefaultValue = 0.0;
  return this;
}

// UBTDecorator_Loop @ 146ec72f0

UBTDecorator_Loop * __thiscall
UBTDecorator_Loop::UBTDecorator_Loop(UBTDecorator_Loop *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FString local_28;
  undefined2 uStack_e;
  
  UObject::UObject((UObject *)this,param_1);
  this->field_0x55 = this->field_0x55 & 0xf8;
  puVar1 = &this->field_0x30;
  this->field_0x59 = 0xff;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x58 = this->field_0x58 & 0xf0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffff47 | 0x47;
  *(undefined ***)this = &_vftable__for__UObject__;
  this->field_0x54 = 0;
  this->field_0x64 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NumLoops)._padding_ = 0;
  *(undefined2 *)&(this->NumLoops)._padding_ = 0xffff;
  (this->NumLoops).DefaultValue = 0;
  (this->InfiniteLoopTimeoutTime)._padding_ = 0;
  *(undefined2 *)&(this->InfiniteLoopTimeoutTime)._padding_ = 0xffff;
  (this->InfiniteLoopTimeoutTime).DefaultValue = 0.0;
  ::FString::FString(&local_28,"Loop");
  if ((FString *)puVar1 != &local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x38 = local_28.Data.ArrayNum;
    *(int *)&this->field_0x3c = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->field_0x58 = this->field_0x58 & 0xf8;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffffc8 | 8;
  (this->NumLoops)._padding_ = 0;
  (this->NumLoops)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->NumLoops).DefaultValue = 3;
  (this->InfiniteLoopTimeoutTime)._padding_ = 0;
  (this->InfiniteLoopTimeoutTime)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->InfiniteLoopTimeoutTime).DefaultValue = -1.0;
  return this;
}

// ~UBTDecorator_Loop @ 146eccfa0

void __thiscall UBTDecorator_Loop::~UBTDecorator_Loop(UBTDecorator_Loop *this)

{
  *(undefined ***)this = &UBTNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  *(undefined ***)&this->field_0x28 = &___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CleanupMemory @ 146ed5ef0

void __thiscall
UBTDecorator_Loop::CleanupMemory
          (UBTDecorator_Loop *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edbde0

/* WARNING: Removing unreachable block (ram,0x000146edc058) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_Loop::DescribeRuntimeValues
          (UBTDecorator_Loop *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  UBTAuxiliaryNode::DescribeRuntimeValues((UBTAuxiliaryNode *)this,param_1,param_2,param_3,param_4);
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar6 = (this->InfiniteLoopTimeoutTime).DefaultValue;
  }
  else {
    fVar6 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,
                       (FName *)&this->InfiniteLoopTimeoutTime,
                       (FKey *)&(this->InfiniteLoopTimeoutTime)._padding_,
                       &(this->InfiniteLoopTimeoutTime).DefaultValue);
  }
  if (this->bInfiniteLoop == false) {
    ::FString::PrintfImpl(&local_48,L"loops remaining: %d");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar5 = (longlong)iVar4;
    param_4->ArrayNum = iVar4 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar5 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar5 * 0x10) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar1 + lVar5 * 0x10 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar1 + lVar5 * 0x10 + 0xc) = local_48.Data.ArrayMax;
    local_28[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    if (fVar6 <= 0.0) {
      return;
    }
    lVar5 = (**(code **)(*(longlong *)this + 0x180))(this);
    dVar7 = (double)fVar6 - (*(double *)(lVar5 + 0x8f8) - *(double *)(param_2 + 8));
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    ::FString::SanitizeFloat(local_28,dVar7,1);
    ::FString::PrintfImpl(&local_38,L"time remaining: %s");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar5 = (longlong)iVar4;
    param_4->ArrayNum = iVar4 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar5 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar5 * 0x10) = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar5 * 0x10 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar1 + lVar5 * 0x10 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetInstanceMemorySize @ 146ee5a50

ushort __thiscall UBTDecorator_Loop::GetInstanceMemorySize(UBTDecorator_Loop *this)

{
  return 0x10;
}

// GetPrivateStaticClass @ 146ee7b70

UClass * __cdecl UBTDecorator_Loop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Loop",
               &Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Loop,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTDecorator_Loop>,
               InternalVTableHelperCtorCaller<UBTDecorator_Loop>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Loop.InnerSingleton;
}

// GetStaticDescription @ 146eebfb0

FString * __thiscall
UBTDecorator_Loop::GetStaticDescription(UBTDecorator_Loop *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  if (this->bInfiniteLoop == false) {
    FValueOrBBKey_Int32::ToString(&this->NumLoops,&local_28);
    UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_18);
    pwVar1 = L"%s: %s loops";
  }
  else {
    if ((this->InfiniteLoopTimeoutTime)._padding_ == 0) {
      if ((this->InfiniteLoopTimeoutTime).DefaultValue <= 0.0) {
        UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_28);
        ::FString::PrintfImpl(__return_storage_ptr__,L"%s: infinite");
        goto LAB_146eec0db;
      }
      ::FString::PrintfImpl(&local_28,L"%.2f");
    }
    else {
      FValueOrBlackboardKeyBase::ToStringKeyName
                ((FValueOrBlackboardKeyBase *)&this->InfiniteLoopTimeoutTime,&local_28);
    }
    UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_18);
    pwVar1 = L"%s: loop for %s seconds";
  }
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_146eec0db:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2d20

void __thiscall
UBTDecorator_Loop::InitializeMemory
          (UBTDecorator_Loop *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FName local_res8;
  FString local_18;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
  }
  uVar3 = (**(code **)(*(longlong *)this + 0x2d0))();
  if (uVar3 < 0x10) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(*(longlong *)this + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnNodeActivation @ 146ef8430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_Loop::OnNodeActivation(UBTDecorator_Loop *this,FBehaviorTreeSearchData *param_1)

{
  int *piVar1;
  float *pfVar2;
  ushort uVar3;
  int iVar4;
  UBehaviorTreeComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  UBlackboardComponent *pUVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  FBTCompositeMemory *pFVar12;
  UClass *pUVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  float fVar17;
  
  pUVar5 = param_1->OwnerComp;
  uVar3 = pUVar5->ActiveInstanceIdx;
  if (((pUVar5->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = (pUVar5->InstanceStack).AllocatorInstance.Data;
  lVar15 = (ulonglong)uVar3 * 0x68;
  lVar14 = *(longlong *)(pFVar6 + lVar15 + 0x30);
  if ((*(int *)(pFVar6 + lVar15 + 0x38) < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar16 = (int *)((ulonglong)*(ushort *)&this->field_0x52 + lVar14);
  pFVar12 = UBTNode::GetNodeMemory<FBTCompositeMemory>(*(UBTNode **)&this->field_0x48,param_1);
  lVar14 = *(longlong *)&this->field_0x48;
  pUVar13 = UBTComposite_SimpleParallel::StaticClass();
  lVar14 = *(longlong *)(lVar14 + 0x10);
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    if ((int)pFVar12->CurrentChild == (uint)(byte)this->field_0x59) goto LAB_146ef859a;
  }
  else if (pFVar12->CurrentChild != -1) goto LAB_146ef859a;
  piVar1 = &(this->NumLoops).DefaultValue;
  pUVar7 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
  if (pUVar7 == (UBlackboardComponent *)0x0) {
    uVar11 = *piVar1;
  }
  else {
    uVar11 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                       (pUVar7,(FName *)&this->NumLoops,(FKey *)&(this->NumLoops)._padding_,piVar1);
  }
  if (((uVar11 != (uVar11 & 0xff)) || ((int)uVar11 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(char *)(piVar16 + 1) = (char)uVar11;
  lVar14 = (**(code **)(*(longlong *)this + 0x180))(this);
  *(undefined8 *)(piVar16 + 2) = *(undefined8 *)(lVar14 + 0x8f8);
LAB_146ef859a:
  bVar9 = false;
  if (this->bInfiniteLoop == false) {
    bVar9 = (char)piVar16[1] == '\0';
    if (!bVar9) {
      cVar10 = (char)piVar16[1] + -1;
      *(char *)(piVar16 + 1) = cVar10;
      bVar9 = cVar10 == '\0';
    }
    bVar9 = !bVar9;
  }
  else {
    if (param_1->SearchId != *piVar16) {
      pfVar2 = &(this->InfiniteLoopTimeoutTime).DefaultValue;
      pUVar7 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
      if (pUVar7 == (UBlackboardComponent *)0x0) {
        fVar17 = *pfVar2;
      }
      else {
        fVar17 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                           (pUVar7,(FName *)&this->InfiniteLoopTimeoutTime,
                            (FKey *)&(this->InfiniteLoopTimeoutTime)._padding_,pfVar2);
      }
      if ((fVar17 < 0.0) ||
         (lVar14 = (**(code **)(*(longlong *)this + 0x180))(this),
         *(double *)(lVar14 + 0x8f8) <= (double)fVar17 + *(double *)(piVar16 + 2) &&
         (double)fVar17 + *(double *)(piVar16 + 2) != *(double *)(lVar14 + 0x8f8))) {
        bVar9 = true;
      }
    }
    *piVar16 = param_1->SearchId;
  }
  if (bVar9) {
    (**(code **)(**(longlong **)&this->field_0x48 + 0x300))
              (*(longlong **)&this->field_0x48,param_1,this->field_0x59);
  }
  return;
}

// StaticRegisterNativesUBTDecorator_Loop @ 146f00c20

void __cdecl UBTDecorator_Loop::StaticRegisterNativesUBTDecorator_Loop(void)

{
  return;
}


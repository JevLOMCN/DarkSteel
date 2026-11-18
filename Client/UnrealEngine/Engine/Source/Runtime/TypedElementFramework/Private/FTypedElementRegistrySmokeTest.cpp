// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142c831b0

EAutomationTestFlags __thiscall
FTypedElementRegistrySmokeTest::GetTestFlags(FTypedElementRegistrySmokeTest *this)

{
  return SmokeFilter|EditorContext;
}

// IsStressTest @ 142c831c0

bool __thiscall FTypedElementRegistrySmokeTest::IsStressTest(FTypedElementRegistrySmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142c831d0

uint __thiscall
FTypedElementRegistrySmokeTest::GetRequiredDeviceNum(FTypedElementRegistrySmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142c831e0

FString * __thiscall
FTypedElementRegistrySmokeTest::GetTestSourceFileName
          (FTypedElementRegistrySmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142c83210

int __thiscall
FTypedElementRegistrySmokeTest::GetTestSourceFileLine(FTypedElementRegistrySmokeTest *this)

{
  return 0x47;
}

// GetTests @ 142c83230

/* WARNING: Removing unreachable block (ram,0x000142c8331d) */
/* WARNING: Removing unreachable block (ram,0x000142c833e8) */

void __thiscall
FTypedElementRegistrySmokeTest::GetTests
          (FTypedElementRegistrySmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Runtime.TypedElementRegistry.SmokeTest");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 142c83410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FTypedElementRegistrySmokeTest::RunTest(FTypedElementRegistrySmokeTest *this,FString *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  FTypedElementReferences *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  byte bVar10;
  UTypedElementRegistry *pUVar11;
  FName FVar12;
  TTypedElementInternalData<FTestTypedElementData> *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  UObject *pUVar17;
  UTestTypedElementInterfaceA_ImplTyped *pUVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  TRegisteredElementType<void,1> *this_00;
  UTestTypedElementInterfaceA_ImplUntyped *pUVar21;
  TTypedElementList<FTypedElementHandle> *pTVar22;
  longlong *plVar23;
  longlong lVar24;
  uint uVar25;
  FTypedElementHandle *pFVar26;
  longlong lVar27;
  undefined1 *puVar28;
  FTypedElementHandle *pFVar29;
  int iVar30;
  undefined1 auStackY_278 [32];
  UTypedElementRegistry *local_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d [5];
  FName local_238;
  longlong *local_230;
  TTypedElementList<FTypedElementHandle> *local_228;
  FSharedReferencer<1> FStack_220;
  FName local_218;
  longlong *local_210;
  FTypedElementHandle local_208;
  FTypedElementHandle local_1f8;
  TTypedElementOwner<FTestTypedElementData> local_1e0;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  local_1d0;
  TTypedElementOwner<void> local_1c8;
  TTypedElementOwner<FTestTypedElementData> local_1b8;
  TTypedElementOwner<FTestTypedElementData> local_1a8;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  TObjectPtr<UClass>_u_0 local_180;
  TObjectPtr<UClass>_u_0 local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  TRawPtrProxy<TTypedElementList<FTypedElementHandle>_> local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  TTypedElementOwner<void> local_140;
  TTypedElementOwner<void> local_130;
  UTypedElementRegistry **local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code *local_100;
  undefined1 **local_f8;
  code *local_f0;
  undefined1 **local_e8;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar17 = GetTransientPackageAsObject();
  local_248 = NewObject<UTypedElementRegistry>(pUVar17);
  local_120 = &local_248;
  local_118 = &local_23f;
  local_110 = local_23d;
  local_108 = &local_23e;
  ::FName::FName(&local_238,"DummyElementType_Typed");
  UTypedElementRegistry::RegisterElementType<FTestTypedElementData,1>(local_248,local_238);
  pUVar17 = GetTransientPackageAsObject();
  pUVar18 = NewObject<UTestTypedElementInterfaceA_ImplTyped>(pUVar17);
  UTypedElementRegistry::RegisterElementInterface<ITestTypedElementInterfaceA>
            (local_248,local_238,(UObject *)pUVar18,false);
  pUVar17 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar17,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar19 = UTestTypedElementInterfaceBAndC_Typed::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar19);
  local_c8._8_8_ = pUVar17;
  pUVar17 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar23 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  FVar12 = local_238;
  pUVar11 = local_248;
  pUVar19 = *(UClass **)&pUVar17->field_0x10;
  pUVar20 = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
  bVar14 = UClass::ImplementsInterface(pUVar19,pUVar20);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                          ,0xa1,
                          L"The InElementInterface pass must implement the interface to register."),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_180.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_180.DebugPtr);
  }
  UTypedElementRegistry::RegisterElementInterfaceImpl
            (pUVar11,FVar12,pUVar17,(TSubclassOf<UInterface> *)&local_180.ObjectPtr,false);
  FVar12 = local_238;
  pUVar11 = local_248;
  pUVar19 = *(UClass **)&pUVar17->field_0x10;
  pUVar20 = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
  bVar14 = UClass::ImplementsInterface(pUVar19,pUVar20);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                          ,0xa1,
                          L"The InElementInterface pass must implement the interface to register."),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_178.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_178.DebugPtr);
  }
  UTypedElementRegistry::RegisterElementInterfaceImpl
            (pUVar11,FVar12,pUVar17,(TSubclassOf<UInterface> *)&local_178.ObjectPtr,false);
  ::FName::FName(&local_218,"DummyElementType_Untyped");
  FVar12 = local_218;
  pUVar11 = local_248;
  this_00 = ::operator_new(0x130);
  local_1d0.Ptr = (FRegisteredElementType *)0x0;
  if (this_00 != (TRegisteredElementType<void,1> *)0x0) {
    memset(this_00,0,0x130);
    local_1d0.Ptr =
         (FRegisteredElementType *)
         UTypedElementRegistry::TRegisteredElementType<void,1>::TRegisteredElementType<void,1>
                   (this_00);
  }
  UTypedElementRegistry::RegisterElementTypeImpl(pUVar11,FVar12,&local_1d0);
  if ((TRegisteredElementType<void,1> *)local_1d0.Ptr != (TRegisteredElementType<void,1> *)0x0) {
    (**(code **)(local_1d0.Ptr)->_padding_)(local_1d0.Ptr,1);
  }
  pUVar17 = GetTransientPackageAsObject();
  pUVar21 = NewObject<UTestTypedElementInterfaceA_ImplUntyped>(pUVar17);
  UTypedElementRegistry::RegisterElementInterface<ITestTypedElementInterfaceA>
            (local_248,local_218,(UObject *)pUVar21,false);
  UTypedElementRegistry::CreateElementImpl<FTestTypedElementData>(local_248,&local_1e0,local_238,-1)
  ;
  ::FName::FName(&local_170,"TypedElement1");
  if ((local_1e0.DataPtr == (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1e2,L"Handle data is null!"), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  ((local_1e0.DataPtr)->Data).InternalElementId = local_170;
  UTypedElementRegistry::CreateElementImpl<FTestTypedElementData>(local_248,&local_1a8,local_238,-1)
  ;
  ::FName::FName(&local_168,"TypedElement2");
  pTVar13 = local_1a8.DataPtr;
  if ((local_1a8.DataPtr == (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1e2,L"Handle data is null!"), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  (pTVar13->Data).InternalElementId = local_168;
  UTypedElementRegistry::CreateElementImpl<FTestTypedElementData>(local_248,&local_1b8,local_238,-1)
  ;
  ::FName::FName(&local_160,"TypedElement3");
  pTVar13 = local_1b8.DataPtr;
  if ((local_1b8.DataPtr == (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1e2,L"Handle data is null!"), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  (pTVar13->Data).InternalElementId = local_160;
  UTypedElementRegistry::CreateElementImpl<void>(local_248,&local_1c8,local_218,0);
  UTypedElementRegistry::CreateElementImpl<void>(local_248,&local_130,local_218,1);
  UTypedElementRegistry::CreateElementImpl<void>(local_248,&local_140,local_218,2);
  local_208.DataPtr = (FTypedElementInternalData *)0x0;
  local_208.ReferenceId = -1;
  if (local_1e0.DataPtr != (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    local_208.DataPtr = (FTypedElementInternalData *)local_1e0.DataPtr;
    local_208.ReferenceId =
         FTypedElementInternalData::AddRef((FTypedElementInternalData *)local_1e0.DataPtr,true);
  }
  `FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_4>::operator()(&local_120,&local_208);
  iVar5 = local_208.ReferenceId;
  if ((TTypedElementInternalData<FTestTypedElementData> *)local_208.DataPtr !=
      (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    lVar27 = (longlong)local_208.ReferenceId;
    LOCK();
    (&(local_208.DataPtr)->Id)[1] = (FTypedElementId)(*(int *)(&(local_208.DataPtr)->Id + 1) + -1);
    UNLOCK();
    pFVar6 = ((local_208.DataPtr)->References).Ptr;
    if ((pFVar6 != (FTypedElementReferences *)0x0) && (local_208.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
      lVar7 = *(longlong *)&(pFVar6->References).field_0x0;
      bVar10 = (byte)iVar5 & 0x1f;
      uVar25 = 1 << bVar10 | 1U >> 0x20 - bVar10;
      if (((iVar5 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar5)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      puVar8 = *(undefined1 **)&(pFVar6->References).field_0x20;
      puVar28 = &(pFVar6->References).field_0x10;
      if (puVar8 != (undefined1 *)0x0) {
        puVar28 = puVar8;
      }
      lVar24 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5);
      lVar4 = lVar24 * 4;
      if (((*(uint *)(puVar28 + lVar24 * 4) & uVar25) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationFlags[Index]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                              ,0xc5,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      if (*(int *)&(pFVar6->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + lVar7) = iVar5;
      }
      *(undefined4 *)(lVar27 * 0x108 + lVar7) = 0xffffffff;
      if (*(int *)&(pFVar6->References).field_0x34 < 1) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(undefined4 *)&(pFVar6->References).field_0x30;
      }
      *(undefined4 *)(lVar27 * 0x108 + 4 + lVar7) = uVar16;
      puVar8 = &(pFVar6->References).field_0x34;
      *(int *)puVar8 = *(int *)puVar8 + 1;
      *(int *)&(pFVar6->References).field_0x30 = iVar5;
      if (((iVar5 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar5)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      lVar27 = *(longlong *)&(pFVar6->References).field_0x20;
      uVar25 = ~uVar25;
      if (lVar27 == 0) {
        puVar3 = (uint *)(&((TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *)
                           (&pFVar6->ReferencesCS + 1))->field_0x0 + lVar4 + 0x10);
        *puVar3 = *puVar3 & uVar25;
      }
      else {
        puVar3 = (uint *)(lVar27 + lVar4);
        *puVar3 = *puVar3 & uVar25;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
    }
  }
  local_208.DataPtr = (FTypedElementInternalData *)0x0;
  local_208.ReferenceId = -1;
  local_1f8.DataPtr = (FTypedElementInternalData *)0x0;
  local_1f8.ReferenceId = -1;
  if ((FTypedElementInternalData *)local_1c8.DataPtr != (FTypedElementInternalData *)0x0) {
    local_1f8.DataPtr = (FTypedElementInternalData *)local_1c8.DataPtr;
    local_1f8.ReferenceId =
         FTypedElementInternalData::AddRef((FTypedElementInternalData *)local_1c8.DataPtr,true);
  }
  `FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_4>::operator()(&local_120,&local_1f8);
  iVar5 = local_1f8.ReferenceId;
  if (local_1f8.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar27 = (longlong)local_1f8.ReferenceId;
    LOCK();
    (local_1f8.DataPtr)->RefCount = (local_1f8.DataPtr)->RefCount + -1;
    UNLOCK();
    pFVar6 = ((local_1f8.DataPtr)->References).Ptr;
    if ((pFVar6 != (FTypedElementReferences *)0x0) && (local_1f8.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
      lVar7 = *(longlong *)&(pFVar6->References).field_0x0;
      bVar10 = (byte)iVar5 & 0x1f;
      uVar25 = 1 << bVar10 | 1U >> 0x20 - bVar10;
      if (((iVar5 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar5)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      puVar8 = *(undefined1 **)&(pFVar6->References).field_0x20;
      puVar28 = &(pFVar6->References).field_0x10;
      if (puVar8 != (undefined1 *)0x0) {
        puVar28 = puVar8;
      }
      lVar24 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5);
      lVar4 = lVar24 * 4;
      if (((*(uint *)(puVar28 + lVar24 * 4) & uVar25) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationFlags[Index]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                              ,0xc5,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      if (*(int *)&(pFVar6->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + lVar7) = iVar5;
      }
      *(undefined4 *)(lVar27 * 0x108 + lVar7) = 0xffffffff;
      if (*(int *)&(pFVar6->References).field_0x34 < 1) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(undefined4 *)&(pFVar6->References).field_0x30;
      }
      *(undefined4 *)(lVar27 * 0x108 + 4 + lVar7) = uVar16;
      puVar8 = &(pFVar6->References).field_0x34;
      *(int *)puVar8 = *(int *)puVar8 + 1;
      *(int *)&(pFVar6->References).field_0x30 = iVar5;
      if (((iVar5 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar5)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      lVar27 = *(longlong *)&(pFVar6->References).field_0x20;
      uVar25 = ~uVar25;
      if (lVar27 == 0) {
        puVar3 = (uint *)(&((TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *)
                           (&pFVar6->ReferencesCS + 1))->field_0x0 + lVar4 + 0x10);
        *puVar3 = *puVar3 & uVar25;
      }
      else {
        puVar3 = (uint *)(lVar27 + lVar4);
        *puVar3 = *puVar3 & uVar25;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
    }
  }
  pUVar11 = local_248;
  local_1f8.DataPtr = (FTypedElementInternalData *)0x0;
  local_1f8.ReferenceId = -1;
  pTVar22 = ::operator_new(0xe0);
  if (pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_158.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  }
  else {
    local_158.Object =
         TTypedElementList<FTypedElementHandle>::TTypedElementList<FTypedElementHandle>
                   (pTVar22,pUVar11);
    if (((local_158.Object != (TTypedElementList<FTypedElementHandle> *)0x0) &&
        ((local_158.Object)->_padding_ != 0)) &&
       (((local_158.Object)->_padding_ != 0 &&
        ((0 < *(int *)((local_158.Object)->_padding_ + 8) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar14)))))) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
  }
  TSharedRef<TTypedElementList<FTypedElementHandle>,1>::
  TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_>
            (&local_d8,&local_158);
  local_228 = local_d8.Object;
  FStack_220.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if ((local_d8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pTVar22 = local_228;
  if ((uint)(*(int *)&(local_228->ElementCombinedIds).Elements.field_0x8 -
            *(int *)&(local_228->ElementCombinedIds).Elements.field_0x34) < 6) {
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_228->ElementCombinedIds,6);
    for (lVar27 = 0x3f; 0x15UL >> lVar27 == 0; lVar27 = lVar27 + -1) {
    }
    iVar5 = (pTVar22->ElementCombinedIds).HashSize;
    iVar30 = 1 << ((byte)lVar27 & 0x1f);
    local_188 = (undefined4)lVar27;
    if ((iVar5 == 0) || (iVar5 < iVar30)) {
      (pTVar22->ElementCombinedIds).HashSize = iVar30;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                (&pTVar22->ElementCombinedIds);
    }
  }
  if ((pTVar22->ElementHandles).ArrayMax < 6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,&(pTVar22->ElementHandles).AllocatorInstance,
               (pTVar22->ElementHandles).ArrayNum,&(pTVar22->ElementHandles).ArrayMax);
  }
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<FTestTypedElementData>(pTVar22,&local_1e0);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<FTestTypedElementData>(pTVar22,&local_1a8);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<FTestTypedElementData>(pTVar22,&local_1b8);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<void>(pTVar22,&local_1c8);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<void>(pTVar22,&local_130);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  TTypedElementList<FTypedElementHandle>::Add<void>(pTVar22,&local_140);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  iVar5 = (pTVar22->ElementHandles).ArrayNum;
  pFVar26 = (FTypedElementHandle *)(pTVar22->ElementHandles).AllocatorInstance.Data;
  pFVar29 = pFVar26 + iVar5;
  while( true ) {
    if ((pTVar22->ElementHandles).ArrayNum != iVar5) {
      local_240 = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_240);
    }
    if (pFVar26 == pFVar29) break;
    if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
      `FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_4>::operator()(&local_120,pFVar26);
    }
    pFVar26 = pFVar26 + 1;
  }
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_198 = &local_23f;
  local_f8 = &local_198;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_6>,bool,TTypedElement<ITestTypedElementInterfaceA>_const_&>
              ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITestTypedElementInterfaceA>
            (pTVar22,(TFunctionRef<bool___cdecl(TTypedElement<ITestTypedElementInterfaceA>_const_&)>
                      *)&local_100);
  if ((pTVar22 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_190 = &local_23e;
  local_e8 = &local_190;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_7>,bool,TTypedElement<ITestTypedElementInterfaceC>_const_&>
             ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITestTypedElementInterfaceC>
            (pTVar22,(TFunctionRef<bool___cdecl(TTypedElement<ITestTypedElementInterfaceC>_const_&)>
                      *)&local_f0);
  local_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_228 = (TTypedElementList<FTypedElementHandle> *)0x0;
  local_150 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_220,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.ReferenceController);
  UTypedElementRegistry::CreateScriptHandle(local_248,(FTypedElementId *)&local_230);
  plVar23 = local_230;
  if (((local_230 == (longlong *)0x0) || (*local_230 == 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptHandleTyped.IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                          ,0xce,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  UTypedElementRegistry::CreateScriptHandle(local_248,(FTypedElementId *)&local_210);
  plVar2 = local_210;
  if (((local_210 == (longlong *)0x0) || (*local_210 == 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptHandleUntyped.IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                          ,0xd1,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  UTypedElementRegistry::DestroyElement<FTestTypedElementData>(local_248,&local_1e0);
  UTypedElementRegistry::DestroyElement<FTestTypedElementData>(local_248,&local_1a8);
  UTypedElementRegistry::DestroyElement<FTestTypedElementData>(local_248,&local_1b8);
  UTypedElementRegistry::DestroyElement(local_248,&local_1c8);
  UTypedElementRegistry::DestroyElement(local_248,&local_130);
  UTypedElementRegistry::DestroyElement(local_248,&local_140);
  if (((plVar23 != (longlong *)0x0) && (*plVar23 != 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ScriptHandleTyped.IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                          ,0xdb,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ScriptHandleUntyped.IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                          ,0xdc,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  UTypedElementRegistry::ProcessDeferredElementsToDestroy(local_248);
  if (plVar2 != (longlong *)0x0) {
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      ::operator_delete(plVar2,0x10);
      local_210 = (longlong *)0x0;
    }
  }
  if (plVar23 != (longlong *)0x0) {
    plVar2 = plVar23 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      ::operator_delete(plVar23,0x10);
      local_230 = (longlong *)0x0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_220.ReferenceController);
  if ((local_140.DataPtr != (TTypedElementInternalData<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if ((local_130.DataPtr != (TTypedElementInternalData<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if (((FTypedElementInternalData *)local_1c8.DataPtr != (FTypedElementInternalData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if ((local_1b8.DataPtr != (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if ((local_1a8.DataPtr != (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if ((local_1e0.DataPtr != (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                          ,0x1b5,
                          L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  return true;
}

// GetBeautifiedTestName @ 142c842b0

FString * __thiscall
FTypedElementRegistrySmokeTest::GetBeautifiedTestName
          (FTypedElementRegistrySmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Runtime.TypedElementRegistry.SmokeTest");
  return __return_storage_ptr__;
}

// operator() @ 142c9e100

void __thiscall
`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TTypedElement<ITestTypedElementInterfaceA> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ITextData *pIVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res10 [8];
  ITextData *local_58;
  uint local_50;
  longlong *local_48 [2];
  longlong *local_38 [2];
  FText local_28;
  FText local_18;
  
  pFVar5 = FText::FText(&local_28);
  plVar1 = *(longlong **)&param_1->field_0x10;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  local_58 = (pFVar5->TextData).Reference;
  if (local_58 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58 + 8))(local_58,local_res10);
  }
  local_50 = pFVar5->Flags;
  (*pcVar2)(plVar1,param_1,&local_58,1);
  pIVar3 = (pFVar5->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  (**(code **)(**(longlong **)&param_1->field_0x10 + 0x18))
            (*(longlong **)&param_1->field_0x10,local_48,param_1);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterfacePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                       ,0x155,L"Interface is null!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x10;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  pFVar5 = FText::FText(&local_18);
  (*pcVar2)(plVar1,param_1,pFVar5,1);
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterfacePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                       ,0x155,L"Interface is null!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(**(longlong **)&param_1->field_0x10 + 0x18))
            (*(longlong **)&param_1->field_0x10,local_38,param_1);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  return;
}

// operator() @ 142c9f9f0

void __thiscall
`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_4>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  UTypedElementRegistry *pUVar4;
  LPCRITICAL_SECTION p_Var5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  byte bVar7;
  undefined4 uVar8;
  bool bVar9;
  LONG LVar10;
  ITestTypedElementInterfaceA *pIVar11;
  FText *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  longlong *plVar15;
  HANDLE *ppvVar16;
  FTypedElementId *pFVar17;
  longlong lVar18;
  uint uVar19;
  FTypedElementId *pFVar20;
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined1 local_b0 [16];
  longlong *local_a0;
  TTypedElement<ITestTypedElementInterfaceA> local_98;
  TObjectPtr<UClass>_u_0 local_80;
  longlong local_78;
  TObjectPtr<UClass>_u_0 local_70;
  TObjectPtr<UClass>_u_0 local_68;
  longlong *local_60 [2];
  FText local_50;
  
  pIVar11 = UTypedElementRegistry::GetElementInterface<ITestTypedElementInterfaceA>
                      ((UTypedElementRegistry *)**(undefined8 **)this,param_1);
  if (pIVar11 != (ITestTypedElementInterfaceA *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar11 + 0x28);
    pFVar12 = FText::FText(&local_50);
    (*pcVar3)(pIVar11,param_1,pFVar12,1);
    (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,local_60,param_1);
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  pUVar4 = (UTypedElementRegistry *)**(undefined8 **)this;
  local_98._0_8_ = 0;
  local_98._8_4_ = -1;
  local_98._16_8_ = 0;
  local_res18.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceA>
            (pUVar4,param_1,(TSubclassOf<UInterface> *)&local_res18.ObjectPtr,&local_98);
  if ((local_98._0_8_ != 0) && (local_98._16_8_ != 0)) {
    __l2::<lambda_1>::operator()(*(void **)((longlong)this + 8),&local_98);
  }
  uVar8 = local_98._8_4_;
  if (local_98._0_8_ != 0) {
    lVar18 = (longlong)(int)local_98._8_4_;
    LOCK();
    *(int *)(local_98._0_8_ + 0xc) = *(int *)(local_98._0_8_ + 0xc) + -1;
    UNLOCK();
    p_Var5 = *(LPCRITICAL_SECTION *)(local_98._0_8_ + 0x10);
    if ((p_Var5 != (LPCRITICAL_SECTION)0x0) && (local_98._8_4_ != -1)) {
      EnterCriticalSection(p_Var5);
      p_Var6 = p_Var5[1].DebugInfo;
      bVar7 = (byte)uVar8 & 0x1f;
      uVar19 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var5[2].DebugInfo <= (int)uVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar16 = (HANDLE *)p_Var5[1].SpinCount;
      if ((HANDLE *)p_Var5[1].SpinCount == (HANDLE *)0x0) {
        ppvVar16 = &p_Var5[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar16 + lVar2) & uVar19) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (p_Var5[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)p_Var5[2].LockCount * 0x108 + (longlong)p_Var6) = uVar8;
      }
      *(undefined4 *)(lVar18 * 0x108 + (longlong)p_Var6) = 0xffffffff;
      if (p_Var5[2].RecursionCount < 1) {
        LVar10 = -1;
      }
      else {
        LVar10 = p_Var5[2].LockCount;
      }
      *(LONG *)(lVar18 * 0x108 + 4 + (longlong)p_Var6) = LVar10;
      p_Var5[2].RecursionCount = p_Var5[2].RecursionCount + 1;
      p_Var5[2].LockCount = uVar8;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var5[2].DebugInfo <= (int)uVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ppvVar16 = (HANDLE *)p_Var5[1].SpinCount;
      if ((HANDLE *)p_Var5[1].SpinCount == (HANDLE *)0x0) {
        ppvVar16 = &p_Var5[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar16 + lVar2);
      *puVar1 = *puVar1 & ~uVar19;
      LeaveCriticalSection(p_Var5);
    }
  }
  local_98._16_8_ = 0;
  local_98._0_8_ = 0;
  local_98._8_4_ = 0xffffffff;
  pUVar4 = (UTypedElementRegistry *)**(undefined8 **)this;
  local_res20.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
  }
  pFVar20 = &FTypedElementId::Unset;
  pFVar17 = &param_1->DataPtr->Id;
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar17 = &FTypedElementId::Unset;
  }
  pUVar13 = UTypedElementRegistry::GetElementInterfaceImpl
                      (pUVar4,(pFVar17->field0_0x0)._s_0.TypeId,
                       (TSubclassOf<UInterface> *)&local_res20.ObjectPtr);
  if (pUVar13 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar13,pUVar14);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15,param_1);
    }
  }
  pUVar4 = (UTypedElementRegistry *)**(undefined8 **)this;
  local_c8._0_8_ = 0;
  local_c8._8_4_ = -1;
  local_b8 = (longlong *)0x0;
  local_80.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_80.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceB>
            (pUVar4,param_1,(TSubclassOf<UInterface> *)&local_80.ObjectPtr,
             (TTypedElement<ITestTypedElementInterfaceB> *)local_c8);
  if (local_c8._0_8_ != 0) {
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x18))(local_b8,local_c8);
      if ((local_b8 == (longlong *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterfacePtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                             ,0x155,L"Interface is null!"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*local_b8 + 0x18))(local_b8,local_c8);
    }
    uVar8 = local_c8._8_4_;
    if (local_c8._0_8_ != 0) {
      lVar18 = (longlong)(int)local_c8._8_4_;
      LOCK();
      *(int *)(local_c8._0_8_ + 0xc) = *(int *)(local_c8._0_8_ + 0xc) + -1;
      UNLOCK();
      p_Var5 = *(LPCRITICAL_SECTION *)(local_c8._0_8_ + 0x10);
      if ((p_Var5 != (LPCRITICAL_SECTION)0x0) && (local_c8._8_4_ != -1)) {
        EnterCriticalSection(p_Var5);
        p_Var6 = p_Var5[1].DebugInfo;
        bVar7 = (byte)uVar8 & 0x1f;
        uVar19 = 1 << bVar7 | 1U >> 0x20 - bVar7;
        if ((((int)uVar8 < 0) || (*(int *)&p_Var5[2].DebugInfo <= (int)uVar8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78 = (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
        ppvVar16 = (HANDLE *)p_Var5[1].SpinCount;
        if ((HANDLE *)p_Var5[1].SpinCount == (HANDLE *)0x0) {
          ppvVar16 = &p_Var5[1].OwningThread;
        }
        if (((*(uint *)((longlong)ppvVar16 + local_78) & uVar19) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (p_Var5[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)p_Var5[2].LockCount * 0x108 + (longlong)p_Var6) = uVar8;
        }
        *(undefined4 *)(lVar18 * 0x108 + (longlong)p_Var6) = 0xffffffff;
        if (p_Var5[2].RecursionCount < 1) {
          LVar10 = -1;
        }
        else {
          LVar10 = p_Var5[2].LockCount;
        }
        *(LONG *)(lVar18 * 0x108 + 4 + (longlong)p_Var6) = LVar10;
        p_Var5[2].RecursionCount = p_Var5[2].RecursionCount + 1;
        p_Var5[2].LockCount = uVar8;
        if ((((int)uVar8 < 0) || (*(int *)&p_Var5[2].DebugInfo <= (int)uVar8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ppvVar16 = (HANDLE *)p_Var5[1].SpinCount;
        if ((HANDLE *)p_Var5[1].SpinCount == (HANDLE *)0x0) {
          ppvVar16 = &p_Var5[1].OwningThread;
        }
        *(uint *)((longlong)ppvVar16 + local_78) =
             *(uint *)((longlong)ppvVar16 + local_78) & ~uVar19;
        LeaveCriticalSection(p_Var5);
      }
    }
  }
  local_b8 = (longlong *)0x0;
  local_c8._0_8_ = 0;
  local_c8._8_4_ = 0xffffffff;
  pUVar4 = (UTypedElementRegistry *)**(undefined8 **)this;
  local_70.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_70.DebugPtr);
  }
  if (param_1->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar20 = &param_1->DataPtr->Id;
  }
  pUVar13 = UTypedElementRegistry::GetElementInterfaceImpl
                      (pUVar4,(pFVar20->field0_0x0)._s_0.TypeId,
                       (TSubclassOf<UInterface> *)&local_70.ObjectPtr);
  if (pUVar13 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar13,pUVar14);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15,param_1);
    }
  }
  pUVar4 = (UTypedElementRegistry *)**(undefined8 **)this;
  local_b0._0_8_ = (FTypedElementInternalData *)0x0;
  local_b0._8_4_ = -1;
  local_a0 = (longlong *)0x0;
  local_68.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceC>
            (pUVar4,param_1,(TSubclassOf<UInterface> *)&local_68.ObjectPtr,
             (TTypedElement<ITestTypedElementInterfaceC> *)local_b0);
  if ((FTypedElementInternalData *)local_b0._0_8_ != (FTypedElementInternalData *)0x0) {
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x18))(local_a0,local_b0);
      if ((local_a0 == (longlong *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterfacePtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                             ,0x155,L"Interface is null!"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*local_a0 + 0x18))(local_a0,local_b0);
    }
    if ((FTypedElementInternalData *)local_b0._0_8_ != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef
                ((FTypedElementInternalData *)local_b0._0_8_,local_b0._8_4_);
    }
  }
  return;
}


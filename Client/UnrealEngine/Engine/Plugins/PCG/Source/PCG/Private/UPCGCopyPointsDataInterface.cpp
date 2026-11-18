// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 14972caf0

UClass * __cdecl UPCGCopyPointsDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataInterface",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataInterface>,local_res8,
               UPCGKernelParamsDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton;
}

// UPCGCopyPointsDataInterface @ 14973ae40

UPCGCopyPointsDataInterface * __thiscall
UPCGCopyPointsDataInterface::UPCGCopyPointsDataInterface
          (UPCGCopyPointsDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGCopyPointsDataInterface__6B_;
  return this;
}

// UPCGCopyPointsDataInterface @ 14973ae70

UPCGCopyPointsDataInterface * __thiscall
UPCGCopyPointsDataInterface::UPCGCopyPointsDataInterface
          (UPCGCopyPointsDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGCopyPointsDataInterface__6B_;
  return this;
}

// ~UPCGCopyPointsDataInterface @ 14973dae0

void __thiscall
UPCGCopyPointsDataInterface::~UPCGCopyPointsDataInterface(UPCGCopyPointsDataInterface *this)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14974ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGCopyPointsDataInterface::CreateDataProvider(UPCGCopyPointsDataInterface *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UPCGCopyPointsDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UComputeDataProvider *)pUVar1;
}

// GetClassName @ 149754810

wchar_t * __thiscall UPCGCopyPointsDataInterface::GetClassName(UPCGCopyPointsDataInterface *this)

{
  return L"PCGCopyPoints";
}

// GetDefines @ 149754b40

/* WARNING: Removing unreachable block (ram,0x000149755604) */
/* WARNING: Removing unreachable block (ram,0x0001497552e6) */
/* WARNING: Removing unreachable block (ram,0x000149754fcb) */
/* WARNING: Removing unreachable block (ram,0x000149754cd6) */
/* WARNING: Removing unreachable block (ram,0x000149754e56) */
/* WARNING: Removing unreachable block (ram,0x000149755157) */
/* WARNING: Removing unreachable block (ram,0x000149755475) */
/* WARNING: Removing unreachable block (ram,0x0001497557bb) */
/* WARNING: Removing unreachable block (ram,0x000149755612) */
/* WARNING: Removing unreachable block (ram,0x0001497552f4) */
/* WARNING: Removing unreachable block (ram,0x000149754fd9) */
/* WARNING: Removing unreachable block (ram,0x000149754ce5) */
/* WARNING: Removing unreachable block (ram,0x000149754e65) */
/* WARNING: Removing unreachable block (ram,0x000149755165) */
/* WARNING: Removing unreachable block (ram,0x000149755483) */
/* WARNING: Removing unreachable block (ram,0x0001497557c9) */

void __thiscall
UPCGCopyPointsDataInterface::GetDefines
          (UPCGCopyPointsDataInterface *this,FComputeKernelDefinitionSet *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *local_208;
  undefined8 local_200;
  FScriptContainerElement *local_1f8;
  undefined8 local_1f0;
  FScriptContainerElement *local_1e8;
  undefined8 local_1e0;
  FScriptContainerElement *local_1d8;
  undefined8 local_1d0;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  FScriptContainerElement *local_1b8;
  undefined8 local_1b0;
  FScriptContainerElement *local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  FScriptContainerElement *local_178;
  undefined8 local_170;
  FScriptContainerElement *local_168;
  undefined8 local_160;
  FScriptContainerElement *local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  undefined8 local_140;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  FScriptContainerElement *local_128;
  undefined8 local_120;
  FScriptContainerElement *local_118;
  int local_110;
  int iStack_10c;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_108,0);
  pFVar4 = ::FString::FString(&local_88,L"PCG_COPY_POINTS_INHERITANCE_MODE_Relative");
  local_208 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200._0_4_ = (pFVar4->Data).ArrayNum;
  local_200._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_1f8 = local_108.Data.AllocatorInstance.Data;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = local_108.Data.ArrayNum;
  local_1f0._4_4_ = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_208) &&
      ((FScriptContainerElement *)&local_208 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_208;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_200;
  *(undefined4 *)(pFVar5 + 0xc) = local_200._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_1f8;
  *(int *)(pFVar5 + 0x18) = (int)local_1f0;
  *(int *)(pFVar5 + 0x1c) = local_1f0._4_4_;
  local_1f0 = 0;
  local_1f8 = (FScriptContainerElement *)0x0;
  local_200 = 0;
  local_208 = (FScriptContainerElement *)0x0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_f8,1);
  pFVar4 = ::FString::FString(&local_78,L"PCG_COPY_POINTS_INHERITANCE_MODE_Source");
  local_1e8 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0._0_4_ = (pFVar4->Data).ArrayNum;
  local_1e0._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_1d8 = local_f8.Data.AllocatorInstance.Data;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0._0_4_ = local_f8.Data.ArrayNum;
  local_1d0._4_4_ = local_f8.Data.ArrayMax;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_1e8;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_1e0;
  *(undefined4 *)(pFVar5 + 0xc) = local_1e0._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_1d8;
  *(int *)(pFVar5 + 0x18) = (int)local_1d0;
  *(int *)(pFVar5 + 0x1c) = local_1d0._4_4_;
  local_1d0 = 0;
  local_1d8 = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1e8 = (FScriptContainerElement *)0x0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_e8,2);
  pFVar4 = ::FString::FString(&local_68,L"PCG_COPY_POINTS_INHERITANCE_MODE_Target");
  local_1c8 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = (pFVar4->Data).ArrayNum;
  local_1c0._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_1b8 = local_e8.Data.AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0._0_4_ = local_e8.Data.ArrayNum;
  local_1b0._4_4_ = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_1c8) &&
      ((FScriptContainerElement *)&local_1c8 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_1c8;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_1c0;
  *(undefined4 *)(pFVar5 + 0xc) = local_1c0._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_1b8;
  *(int *)(pFVar5 + 0x18) = (int)local_1b0;
  *(int *)(pFVar5 + 0x1c) = local_1b0._4_4_;
  local_1b0 = 0;
  local_1b8 = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1c8 = (FScriptContainerElement *)0x0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_d8,0);
  pFVar4 = ::FString::FString(&local_58,L"PCG_COPY_POINTS_METADATA_INHERITANCE_MODE_SourceFirst");
  local_1a8 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0._0_4_ = (pFVar4->Data).ArrayNum;
  local_1a0._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_198 = local_d8.Data.AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = local_d8.Data.ArrayNum;
  local_190._4_4_ = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_1a8) &&
      ((FScriptContainerElement *)&local_1a8 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_1a8;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_1a0;
  *(undefined4 *)(pFVar5 + 0xc) = local_1a0._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_198;
  *(int *)(pFVar5 + 0x18) = (int)local_190;
  *(int *)(pFVar5 + 0x1c) = local_190._4_4_;
  local_190 = 0;
  local_198 = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_1a8 = (FScriptContainerElement *)0x0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_c8,1);
  pFVar4 = ::FString::FString(&local_48,L"PCG_COPY_POINTS_METADATA_INHERITANCE_MODE_TargetFirst");
  local_188 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180._0_4_ = (pFVar4->Data).ArrayNum;
  local_180._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_178 = local_c8.Data.AllocatorInstance.Data;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170._0_4_ = local_c8.Data.ArrayNum;
  local_170._4_4_ = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_188) &&
      ((FScriptContainerElement *)&local_188 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_188;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_180;
  *(undefined4 *)(pFVar5 + 0xc) = local_180._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_178;
  *(int *)(pFVar5 + 0x18) = (int)local_170;
  *(int *)(pFVar5 + 0x1c) = local_170._4_4_;
  local_170 = 0;
  local_178 = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_188 = (FScriptContainerElement *)0x0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_b8,2);
  pFVar4 = ::FString::FString(&local_38,L"PCG_COPY_POINTS_METADATA_INHERITANCE_MODE_SourceOnly");
  local_168 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160._0_4_ = (pFVar4->Data).ArrayNum;
  local_160._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_158 = local_b8.Data.AllocatorInstance.Data;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150._0_4_ = local_b8.Data.ArrayNum;
  local_150._4_4_ = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_168;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_160;
  *(undefined4 *)(pFVar5 + 0xc) = local_160._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_158;
  *(int *)(pFVar5 + 0x18) = (int)local_150;
  *(int *)(pFVar5 + 0x1c) = local_150._4_4_;
  local_150 = 0;
  local_158 = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_168 = (FScriptContainerElement *)0x0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_a8,3);
  pFVar4 = ::FString::FString(&local_28,L"PCG_COPY_POINTS_METADATA_INHERITANCE_MODE_TargetOnly");
  local_148 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140._0_4_ = (pFVar4->Data).ArrayNum;
  local_140._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_138 = local_a8.Data.AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = local_a8.Data.ArrayNum;
  local_130._4_4_ = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
      ((FScriptContainerElement *)&local_148 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_148;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_140;
  *(undefined4 *)(pFVar5 + 0xc) = local_140._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_138;
  *(int *)(pFVar5 + 0x18) = (int)local_130;
  *(int *)(pFVar5 + 0x1c) = local_130._4_4_;
  local_130 = 0;
  local_138 = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_148 = (FScriptContainerElement *)0x0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_98,4);
  pFVar4 = ::FString::FString(&local_18,L"PCG_COPY_POINTS_METADATA_INHERITANCE_MODE_None");
  local_128 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120._0_4_ = (pFVar4->Data).ArrayNum;
  local_120._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_118 = local_98.Data.AllocatorInstance.Data;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110 = local_98.Data.ArrayNum;
  iStack_10c = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20
      )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_128;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_120;
  *(undefined4 *)(pFVar5 + 0xc) = local_120._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_118;
  *(int *)(pFVar5 + 0x18) = local_110;
  *(int *)(pFVar5 + 0x1c) = iStack_10c;
  return;
}

// GetHLSL @ 149757d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGCopyPointsDataInterface::GetHLSL
          (UPCGCopyPointsDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_c8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FString local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UPCGKernelParamsDataInterface::GetHLSL((UPCGKernelParamsDataInterface *)this,param_1,param_2);
  pFVar1 = ::FString::FString(&local_78,param_2);
  FStringFormatArg::FStringFormatArg(&local_98,pFVar1);
  ::FString::FString(&local_b8.StringValue,L"DataInterfaceName");
  local_c8.Key = &local_b8.StringValue;
  local_c8.Value = &local_98;
  local_b8._0_8_ = &local_c8;
  local_b8.field1_0x8.StringLiteralANSIValue = (char *)&local_b8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68,
             (initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> *)
             &local_b8);
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl
            ((FString *)&local_c8,
             L"StructuredBuffer<uint2> {DataInterfaceName}_SourceAndTargetDataIndices;\n\nvoid CopyPoints_GetSourceAndTargetDataIndices_{DataInterfaceName}(uint InOutputDataIndex, int InSourceDataCount, int InTargetDataCount, out uint OutSourceIndex, out uint OutTargetIndex)\n{\n#if USE_INPUT_DATA_INDICES_BUFFER\n\tconst uint2 Indices = {DataInterfaceName}_SourceAndTargetDataIndices[InOutputDataIndex];\n\tOutSourceIndex = Indices[0];\n\tOutTargetIndex = Indices[1];\n#else\n\tif ({DataInterfaceName}_bCopyEachSourceOnEveryTarget)\n\t{\n\t\tOutSourceIndex = InOutputDataIndex / InTargetDataCount;\n\t\tOutTargetIndex = InOutputDataIndex % InTargetDataCount;\n\t}\n\telse\n\t{\n\t\tOutSourceIndex = clamp(InOutputDataIndex, 0u, (uint)(InSourceDataCount - 1));\n\t\tOutTargetIndex = clamp(InOutputDataIndex, 0u, (uint)(InTargetDataCount - 1));\n\t}\n#endif\n}\n"
             ,(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
               *)local_68);
  iVar2 = (int)local_c8.Value + -1;
  if ((int)local_c8.Value == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_c8.Key,iVar2);
  if (local_c8.Key != (FString *)0x0) {
    FMemory::Free(local_c8.Key);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// GetPermutations @ 14975a8d0

void __thiscall
UPCGCopyPointsDataInterface::GetPermutations
          (UPCGCopyPointsDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"USE_INPUT_DATA_INDICES_BUFFER");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14975ad80

UClass * __cdecl UPCGCopyPointsDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataInterface",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataInterface>,local_res8,
               UPCGKernelParamsDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton;
}

// GetShaderParameters @ 149760140

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGCopyPointsDataInterface::GetShaderParameters
          (UPCGCopyPointsDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_28;
  
  uVar5 = (ulonglong)_tls_index;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0xf & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGCopyPointsDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGCopyPointsDataInterfaceParameters",L"FPCGCopyPointsDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                 ,0x28,0x30,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar3 = (param_2->Members).ArrayNum;
  piVar1 = &(param_2->Members).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Members).ArrayNum = iVar3 + 1;
  uVar2 = param_2->NextMemberOffset;
  pFVar6 = (param_2->Members).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(wchar_t **)pFVar6 = param_1;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x30;
  return;
}

// GetSupportedInputs @ 149762a10

void __thiscall
UPCGCopyPointsDataInterface::GetSupportedInputs
          (UPCGCopyPointsDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FString local_18;
  
  UPCGKernelParamsDataInterface::GetSupportedInputs((UPCGKernelParamsDataInterface *)this,param_1);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"CopyPoints_GetSourceAndTargetDataIndices");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,Out);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,Out);
  return;
}

// StaticRegisterNativesUPCGCopyPointsDataInterface @ 149778600

void __cdecl UPCGCopyPointsDataInterface::StaticRegisterNativesUPCGCopyPointsDataInterface(void)

{
  return;
}


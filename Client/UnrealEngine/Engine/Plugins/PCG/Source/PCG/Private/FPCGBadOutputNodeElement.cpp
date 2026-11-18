// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149ff4dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGBadOutputNodeElement::ExecuteInternal(FPCGBadOutputNodeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPCGDataPtrWrapper *this_00;
  undefined1 auStackY_e8 [32];
  TObjectPtr<UPCGData_const_>_u_0 local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ForElementType<FSetElementId> FStack_50;
  ulonglong uStack_40;
  TObjectPtr<UPCGData_const_>_u_0 local_38;
  undefined2 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar2 = (TObjectPtr<UPCGData_const_>_u_0 *)
           (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  local_30 = 0x100;
  local_98.DebugPtr = (UPCGData *)0x0;
  local_90 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0x8000000000;
  local_38.DebugPtr = (UPCGData *)0x0;
  local_2c = 0;
  local_24 = 0xffffffff;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  FStack_50.InlineData[0] = '\0';
  FStack_50.InlineData[1] = '\0';
  FStack_50.InlineData[2] = '\0';
  FStack_50.InlineData[3] = '\0';
  FStack_50._padding_ = 0;
  local_58 = 0xffffffff;
  FStack_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_40 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  if ((pTVar2 <= &local_98) &&
     (&local_98 < pTVar2 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar7 * 0x78);
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_00,(FPCGDataPtrWrapper *)&local_98.ObjectPtr);
  *(undefined8 *)
   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements = 0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88);
  this_00[6].Data.field0_0x0 = local_38;
  *(undefined1 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_30;
  *(undefined1 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 1) = local_30._1_1_;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = local_2c;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = local_24;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if (FStack_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_50.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar7 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  uVar4 = uStack_60._4_4_;
  local_58 = 0xffffffff;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_60 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_98.ObjectPtr);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
  return true;
}


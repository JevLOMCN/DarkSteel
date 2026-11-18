// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// Add @ 144327d00

void __thiscall
UE::Net::FNetReferenceCollector::Add
          (FNetReferenceCollector *this,FNetReferenceInfo *param_1,
          FQuantizedObjectReference *param_2,FNetSerializerChangeMaskParam *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar7;
  FNetReferenceInfo local_28;
  undefined6 uStack_26;
  FNetRefHandle_u_0 FStack_20;
  undefined8 uStack_18;
  FNetSerializerChangeMaskParam FStack_10;
  
  if ((param_2->RemoteReferencePtr == (FQuantizedRemoteObjectReference *)0x0) &&
     (((((param_2->NetReference).RefHandle.field0_0x0.Value != 0 ||
        (((param_2->NetReference).PathToken.field0_0x0.Value & 0xfffff) != 0)) ||
       ((this->Traits & IncludeInvalidReferences) != None)) &&
      ((((param_2->NetReference).Traits & CanBeExported) != None ||
       ((this->Traits & OnlyCollectReferencesThatCanBeExported) == None)))))) {
    local_28 = *param_1;
    FVar3 = (this->ReferenceInfos).AllocatorInstance.SecondaryData;
    FStack_20 = (param_2->NetReference).RefHandle.field0_0x0;
    uStack_18._0_4_ = (param_2->NetReference).PathToken;
    uStack_18._4_4_ = (param_2->NetReference).Traits;
    FStack_10 = *param_3;
    FVar7 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
    if (FVar3 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
      FVar7 = FVar3;
    }
    if ((ulonglong)FVar7 <= &local_28) {
      FVar7 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
      if (FVar3 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar7 = FVar3;
      }
      if ((&local_28 <
           (FNetReferenceInfo *)((longlong)(this->ReferenceInfos).ArrayMax * 0x20 + (longlong)FVar7)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->ReferenceInfos).ArrayNum;
    piVar1 = &(this->ReferenceInfos).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>_>
                        (0x820,(ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
                               this,piVar1);
    }
    (this->ReferenceInfos).ArrayNum = iVar6 + 1;
    FVar3 = (this->ReferenceInfos).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
      this = (FNetReferenceCollector *)FVar3;
    }
    puVar2 = (undefined8 *)((longlong)iVar6 * 0x20 + (longlong)this);
    *puVar2 = CONCAT62(uStack_26,local_28);
    *(FNetRefHandle_u_0 *)(puVar2 + 1) = FStack_20;
    puVar2 = (undefined8 *)((longlong)iVar6 * 0x20 + 0x10 + (longlong)this);
    *puVar2 = uStack_18;
    *(FNetSerializerChangeMaskParam *)(puVar2 + 1) = FStack_10;
  }
  return;
}


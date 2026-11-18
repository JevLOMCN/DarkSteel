// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGAttributeAccessorKeysPointIndices @ 1497de5f0

FPCGAttributeAccessorKeysPointIndices * __thiscall
FPCGAttributeAccessorKeysPointIndices::FPCGAttributeAccessorKeysPointIndices
          (FPCGAttributeAccessorKeysPointIndices *this,UPCGBasePointData *param_1,bool param_2)

{
  UPCGBasePointData *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long64 lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 local_28 [32];
  
  this->PointData = param_1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointIndices__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MetadataEntryKeys).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->MetadataEntryKeys).ElementView.BytesBetweenElements = 0;
  (this->MetadataEntryKeys).ElementView.NumElements = 0;
  (this->MetadataEntryKeys).NumElements = 0;
  (this->ConstMetadataEntryKeys).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->ConstMetadataEntryKeys).ElementView.BytesBetweenElements = 0;
  (this->ConstMetadataEntryKeys).ElementView.NumElements = 0;
  (this->ConstMetadataEntryKeys).NumElements = 0;
  puVar9 = (undefined4 *)(**(code **)(this->PointData->_padding_ + 0x4f8))(this->PointData,local_28)
  ;
  pUVar1 = this->PointData;
  uVar2 = puVar9[1];
  iVar3 = puVar9[2];
  iVar4 = puVar9[3];
  *(undefined4 *)&(this->MetadataEntryKeys).ElementView.FirstElementPtr = *puVar9;
  *(undefined4 *)((longlong)&(this->MetadataEntryKeys).ElementView.FirstElementPtr + 4) = uVar2;
  (this->MetadataEntryKeys).ElementView.BytesBetweenElements = iVar3;
  (this->MetadataEntryKeys).ElementView.NumElements = iVar4;
  uVar2 = puVar9[5];
  uVar5 = puVar9[6];
  uVar6 = puVar9[7];
  (this->MetadataEntryKeys).NumElements = puVar9[4];
  *(undefined4 *)&(this->MetadataEntryKeys).field_0x14 = uVar2;
  *(undefined4 *)&(this->MetadataEntryKeys).StubValue = uVar5;
  *(undefined4 *)((longlong)&(this->MetadataEntryKeys).StubValue + 4) = uVar6;
  puVar10 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x538))(pUVar1,local_28);
  uVar7 = puVar10[1];
  (this->ConstMetadataEntryKeys).ElementView.FirstElementPtr = (long64 *)*puVar10;
  (this->ConstMetadataEntryKeys).ElementView.BytesBetweenElements = (int)uVar7;
  (this->ConstMetadataEntryKeys).ElementView.NumElements = (int)((ulonglong)uVar7 >> 0x20);
  lVar8 = puVar10[3];
  *(undefined8 *)&(this->ConstMetadataEntryKeys).NumElements = puVar10[2];
  (this->ConstMetadataEntryKeys).StubValue = lVar8;
  return this;
}

// GetKeyIndices @ 1498156a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysPointIndices::GetKeyIndices
          (FPCGAttributeAccessorKeysPointIndices *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar4 = (**(code **)(this->PointData->_padding_ + 0x488))();
  if (iVar4 == 0) {
    return false;
  }
  iVar4 = (**(code **)(this->PointData->_padding_ + 0x488))();
  if (iVar4 < param_1 + param_2) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_3,param_2,Default);
    uVar7 = 0;
    if (0 < param_2) {
      lVar8 = 0;
      do {
        iVar4 = (**(code **)(this->PointData->_padding_ + 0x488))();
        iVar5 = uVar7 + param_1;
        uVar6 = 0;
        if ((int)uVar7 < param_3->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        uVar7 = uVar7 + 1;
        *(int *)((param_3->AllocatorInstance).Data + lVar8) = iVar5 % iVar4;
        lVar8 = lVar8 + 4;
      } while ((int)uVar7 < param_2);
    }
    return true;
  }
  *param_4 = true;
  return true;
}

// GetMetadataEntryKeys @ 149816120

bool __thiscall
FPCGAttributeAccessorKeysPointIndices::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPointIndices *this,int param_1,
          TArrayView<__int64_*,int> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long64 *plVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((this->PointData == (UPCGBasePointData *)0x0) ||
     (iVar6 = (**(code **)(this->PointData->_padding_ + 0x488))(), iVar6 == 0)) {
    return false;
  }
  if (((this->MetadataEntryKeys).NumElements == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MetadataEntryKeys.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                         ,0x123,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      iVar1 = (this->MetadataEntryKeys).NumElements;
      uVar2 = (longlong)(int)(uVar10 + param_1) % (longlong)iVar1;
      uVar7 = (uint)uVar2;
      uVar8 = 0;
      if ((int)uVar7 < iVar1) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar8 = (uint)((longlong)((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar2 & 0xffffffff)
                    % (longlong)(this->MetadataEntryKeys).ElementView.NumElements);
      if (uVar7 == uVar8) {
        plVar9 = (long64 *)
                 ((longlong)(this->MetadataEntryKeys).ElementView.BytesBetweenElements *
                  (longlong)(int)uVar8 +
                 (longlong)(this->MetadataEntryKeys).ElementView.FirstElementPtr);
      }
      else {
        plVar9 = &(this->MetadataEntryKeys).StubValue;
      }
      uVar8 = 0;
      if ((int)uVar10 < iVar6) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar10 = uVar10 + 1;
      iVar6 = param_2->ArrayNum;
      *(long64 **)(lVar11 + (longlong)param_2->DataPtr) = plVar9;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < iVar6);
  }
  return true;
}

// GetMetadataEntryKeys @ 1498162b0

bool __thiscall
FPCGAttributeAccessorKeysPointIndices::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPointIndices *this,int param_1,
          TArrayView<__int64_const_*,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long64 *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((this->PointData == (UPCGBasePointData *)0x0) ||
     (iVar4 = (**(code **)(this->PointData->_padding_ + 0x488))(), iVar4 == 0)) {
    return false;
  }
  if (((this->ConstMetadataEntryKeys).NumElements == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ConstMetadataEntryKeys.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                         ,0x135,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      plVar5 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                         (&this->ConstMetadataEntryKeys,
                          (int)(uVar7 + param_1) % (this->ConstMetadataEntryKeys).NumElements);
      uVar6 = 0;
      if ((int)uVar7 < iVar4) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar7 = uVar7 + 1;
      iVar4 = param_2->ArrayNum;
      *(long64 **)(lVar8 + (longlong)param_2->DataPtr) = plVar5;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar4);
  }
  return true;
}

// GetNum @ 1498164b0

int __thiscall
FPCGAttributeAccessorKeysPointIndices::GetNum(FPCGAttributeAccessorKeysPointIndices *this)

{
  int iVar1;
  
  if (this->PointData != (UPCGBasePointData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498164bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->PointData->_padding_ + 0x488))();
    return iVar1;
  }
  return 0;
}


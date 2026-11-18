// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// GetRangeImpl @ 149e68550

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  TQuat<double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  TArrayView<void_const_*,int> local_48 [3];
  
  PCGPropertyAccessor::GetContainerKeys(&local_68,param_2,param_1->ArrayNum,param_3);
  if (local_68.ArrayNum == 0) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return false;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_48[0].DataPtr = (void **)local_58;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_48);
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < local_68.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      puVar1 = *(undefined8 **)(local_68.AllocatorInstance.Data + lVar13);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pTVar2 = param_1->DataPtr;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
      puVar1 = (undefined8 *)((longlong)&pTVar2->X + lVar12);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)&pTVar2->Z + lVar12);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      lVar12 = lVar12 + 0x20;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e68740

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TRotator<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TRotator<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TRotator<double> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  TArrayView<void_const_*,int> local_48 [3];
  
  PCGPropertyAccessor::GetContainerKeys(&local_68,param_2,param_1->ArrayNum,param_3);
  if (local_68.ArrayNum == 0) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return false;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_48[0].DataPtr = (void **)local_58;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_48);
  uVar10 = 0;
  if (0 < param_1->ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < local_68.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      puVar2 = *(undefined8 **)(local_68.AllocatorInstance.Data + lVar12);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar1 = puVar2[2];
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pTVar3 = param_1->DataPtr;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
      puVar2 = (undefined8 *)((longlong)&pTVar3->Pitch + lVar11);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      *(undefined8 *)((longlong)&pTVar3->Roll + lVar11) = uVar1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e68930

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TTransform<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_a8;
  FScriptContainerElement *local_98;
  TArrayView<void_const_*,int> local_88 [7];
  
  PCGPropertyAccessor::GetContainerKeys(&local_a8,param_2,param_1->ArrayNum,param_3);
  if (local_a8.ArrayNum == 0) {
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    return false;
  }
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return (bool)uVar17;
  }
  local_88[0].DataPtr = (void **)local_98;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_88);
  uVar20 = 0;
  if (0 < param_1->ArrayNum) {
    lVar19 = 0;
    lVar21 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar20 < local_a8.ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      puVar1 = *(undefined8 **)(local_a8.AllocatorInstance.Data + lVar21);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar8 = puVar1[4];
      uVar9 = puVar1[5];
      uVar10 = puVar1[6];
      uVar11 = puVar1[7];
      uVar12 = puVar1[8];
      uVar13 = puVar1[9];
      uVar14 = puVar1[10];
      uVar15 = puVar1[0xb];
      uVar18 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      pTVar2 = param_1->DataPtr;
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 8;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Rotation).XY.m128d_f64 + lVar19);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Rotation).ZW.m128d_f64 + lVar19);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Translation).XY.m128d_f64 + lVar19);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Translation).ZW.m128d_f64 + lVar19);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Scale3D).XY.m128d_f64 + lVar19);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1 = (undefined8 *)((longlong)(pTVar2->Scale3D).ZW.m128d_f64 + lVar19);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      lVar19 = lVar19 + 0x60;
    } while ((int)uVar20 < param_1->ArrayNum);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e68b90

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  TArrayView<void_const_*,int> local_38 [2];
  
  PCGPropertyAccessor::GetContainerKeys(&local_58,param_2,param_1->ArrayNum,param_3);
  if (local_58.ArrayNum == 0) {
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    return false;
  }
  local_48 = local_58.AllocatorInstance.Data;
  if ((local_58.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_38[0].DataPtr = (void **)local_48;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_38);
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < local_58.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar3 = **(undefined8 **)(local_58.AllocatorInstance.Data + lVar10);
      uVar4 = (*(undefined8 **)(local_58.AllocatorInstance.Data + lVar10))[1];
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
      puVar1 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar9);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e68d60

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  TVector4<double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  TArrayView<void_const_*,int> local_48 [3];
  
  PCGPropertyAccessor::GetContainerKeys(&local_68,param_2,param_1->ArrayNum,param_3);
  if (local_68.ArrayNum == 0) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return false;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_48[0].DataPtr = (void **)local_58;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_48);
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < local_68.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      puVar1 = *(undefined8 **)(local_68.AllocatorInstance.Data + lVar13);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pTVar2 = param_1->DataPtr;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar12);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar12 + 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      lVar12 = lVar12 + 0x20;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e68f50

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  TArrayView<void_const_*,int> local_48 [3];
  
  PCGPropertyAccessor::GetContainerKeys(&local_68,param_2,param_1->ArrayNum,param_3);
  if (local_68.ArrayNum == 0) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return false;
  }
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_48[0].DataPtr = (void **)local_58;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_48);
  uVar10 = 0;
  if (0 < param_1->ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < local_68.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      puVar2 = *(undefined8 **)(local_68.AllocatorInstance.Data + lVar12);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar1 = puVar2[2];
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pTVar3 = param_1->DataPtr;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
      puVar2 = (undefined8 *)((longlong)&pTVar3->field0_0x0 + lVar11);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      *(undefined8 *)((longlong)&pTVar3->field0_0x0 + lVar11 + 0x10) = uVar1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4a80

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  TQuat<double> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar9 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar2 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar10 < local_48.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      puVar1 = (undefined8 *)((longlong)&pTVar2->X + lVar11);
      uVar5 = puVar1[1];
      uVar10 = uVar10 + 1;
      puVar3 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)&pTVar2->Z + lVar11);
      uVar5 = puVar1[1];
      lVar11 = lVar11 + 0x20;
      puVar3[2] = *puVar1;
      puVar3[3] = uVar5;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar9);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4c60

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TRotator<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TRotator<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  TRotator<double> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar9 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar2 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar10 < local_48.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      puVar1 = (undefined8 *)((longlong)&pTVar2->Pitch + lVar11);
      uVar5 = puVar1[1];
      uVar10 = uVar10 + 1;
      puVar3 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)&pTVar2->Roll + lVar11);
      lVar11 = lVar11 + 0x18;
      puVar3[2] = *puVar1;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar9);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4e40

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TTransform<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      puVar8 = (undefined8 *)((longlong)(param_1->DataPtr->Rotation).XY.m128d_f64 + lVar10);
      uVar6 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar3 = puVar8[1];
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x60;
      puVar1 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar1 = *puVar8;
      puVar1[1] = uVar3;
      uVar3 = puVar8[3];
      puVar1[2] = puVar8[2];
      puVar1[3] = uVar3;
      uVar3 = puVar8[5];
      puVar1[4] = puVar8[4];
      puVar1[5] = uVar3;
      uVar3 = puVar8[7];
      puVar1[6] = puVar8[6];
      puVar1[7] = uVar3;
      uVar3 = puVar8[9];
      puVar1[8] = puVar8[8];
      puVar1[9] = uVar3;
      uVar3 = puVar8[0xb];
      puVar1[10] = puVar8[10];
      puVar1[0xb] = uVar3;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea5040

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  TVector2<double> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar9 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar9) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar2 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar11 < local_48.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar12);
      uVar5 = puVar1[1];
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      puVar3 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar10 * 8);
      lVar10 = lVar10 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar9);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea5210

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  TVector4<double> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar9 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar2 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar10 < local_48.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar11);
      uVar5 = puVar1[1];
      uVar10 = uVar10 + 1;
      puVar3 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar11 + 0x10);
      uVar5 = puVar1[1];
      lVar11 = lVar11 + 0x20;
      puVar3[2] = *puVar1;
      puVar3[3] = uVar5;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar9);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea53f0

bool __thiscall
FPCGPropertyStructAccessor<UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGPropertyStructAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  TVector<double> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar10 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pTVar2 = param_1->DataPtr;
      uVar9 = 0;
      if ((int)uVar11 < local_48.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      puVar1 = (undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar12);
      uVar5 = puVar1[1];
      uVar11 = uVar11 + 1;
      puVar3 = *(undefined8 **)(local_48.AllocatorInstance.Data + lVar13 * 8);
      lVar13 = lVar13 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      lVar6 = lVar12 + 0x10;
      lVar12 = lVar12 + 0x18;
      puVar3[2] = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + lVar6);
      iVar10 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar10);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea55d0

bool __thiscall
FPCGPropertyStructAccessor<FSoftClassPath>::SetRangeImpl
          (FPCGPropertyStructAccessor<FSoftClassPath> *this,
          TArrayView<FSoftClassPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FSoftClassPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar7 < local_48.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FSoftObjectPath::operator=
                (*(FSoftObjectPath **)(local_48.AllocatorInstance.Data + lVar8),
                 (FSoftObjectPath *)(pFVar1 + (int)uVar7));
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea57a0

bool __thiscall
FPCGPropertyStructAccessor<FSoftObjectPath>::SetRangeImpl
          (FPCGPropertyStructAccessor<FSoftObjectPath> *this,
          TArrayView<FSoftObjectPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FSoftObjectPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar7 < local_48.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FSoftObjectPath::operator=
                (*(FSoftObjectPath **)(local_48.AllocatorInstance.Data + lVar8),pFVar1 + (int)uVar7)
      ;
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}


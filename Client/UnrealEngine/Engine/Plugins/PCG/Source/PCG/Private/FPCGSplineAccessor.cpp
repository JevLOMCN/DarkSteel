// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// GetRangeImpl @ 1498c43b0

bool __thiscall
FPCGSplineAccessor<UE::Math::TTransform<double>,0>::GetRangeImpl
          (FPCGSplineAccessor<UE::Math::TTransform<double>,0> *this,
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
  undefined8 *puVar16;
  undefined4 uVar17;
  bool bVar18;
  char cVar19;
  undefined1 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 *local_98 [2];
  TArrayView<void_const_*,int> local_88;
  TArrayView<void_const_*,int> local_78 [7];
  
  uVar17 = local_88._12_4_;
  local_88.ArrayNum = 1;
  local_98[0] = (undefined8 *)0x0;
  local_88.DataPtr = local_98;
  bVar18 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar18) {
    cVar19 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar19 != '\0') {
      local_78[0].ArrayNum = 1;
      local_78[0]._12_4_ = uVar17;
      local_78[0].DataPtr = local_98;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_78)
      ;
      puVar16 = local_98[0];
      iVar22 = param_1->ArrayNum;
      uVar23 = 0;
      if (0 < iVar22) {
        lVar24 = 0;
        do {
          uVar4 = *puVar16;
          uVar5 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = puVar16[3];
          uVar8 = puVar16[4];
          uVar9 = puVar16[5];
          uVar10 = puVar16[6];
          uVar11 = puVar16[7];
          uVar12 = puVar16[8];
          uVar13 = puVar16[9];
          uVar21 = 0;
          if ((int)uVar23 < iVar22) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          uVar14 = puVar16[10];
          uVar15 = puVar16[0xb];
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar3 = (code *)swi(3);
            uVar20 = (*pcVar3)();
            return (bool)uVar20;
          }
          pTVar2 = param_1->DataPtr;
          uVar23 = uVar23 + 1;
          iVar22 = param_1->ArrayNum;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Rotation).XY.m128d_f64 + lVar24);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Rotation).ZW.m128d_f64 + lVar24);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Translation).XY.m128d_f64 + lVar24);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Translation).ZW.m128d_f64 + lVar24);
          *puVar1 = uVar10;
          puVar1[1] = uVar11;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Scale3D).XY.m128d_f64 + lVar24);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)((longlong)(pTVar2->Scale3D).ZW.m128d_f64 + lVar24);
          *puVar1 = uVar14;
          puVar1[1] = uVar15;
          lVar24 = lVar24 + 0x60;
        } while ((int)uVar23 < iVar22);
      }
      return true;
    }
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2625181124820730142>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                        ,0x11e,"Keys.IsClassSupported(TopPropertyStruct)");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      uVar20 = (*pcVar3)();
      return (bool)uVar20;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c45a0

bool __thiscall
FPCGSplineAccessor<bool,1>::GetRangeImpl
          (FPCGSplineAccessor<bool,1> *this,TArrayView<bool,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  void *local_48 [2];
  TArrayView<void_const_*,int> local_38;
  TArrayView<void_const_*,int> local_28 [2];
  
  uVar3 = local_38._12_4_;
  local_38.ArrayNum = 1;
  local_48[0] = (void *)0x0;
  local_38.DataPtr = local_48;
  bVar4 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_38);
  if (bVar4) {
    cVar5 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar5 != '\0') {
      local_28[0].ArrayNum = 1;
      local_28[0]._12_4_ = uVar3;
      local_28[0].DataPtr = local_48;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_28)
      ;
      pvVar2 = local_48[0];
      iVar9 = param_1->ArrayNum;
      uVar10 = 0;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          bVar4 = *(bool *)((longlong)pvVar2 + 0x7c);
          uVar8 = 0;
          if ((int)uVar10 < iVar9) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar10 = uVar10 + 1;
          iVar9 = param_1->ArrayNum;
          param_1->DataPtr[lVar11] = bVar4;
          lVar11 = lVar11 + 1;
        } while ((int)uVar10 < iVar9);
      }
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2625181124820730142>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                       ,0x11e,"Keys.IsClassSupported(TopPropertyStruct)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// SetRangeImpl @ 1498eaaf0

bool __thiscall
FPCGSplineAccessor<UE::Math::TTransform<double>,0>::SetRangeImpl
          (FPCGSplineAccessor<UE::Math::TTransform<double>,0> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double *pdVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  TTransform<double> *pTVar9;
  int iVar10;
  double *local_48 [2];
  TArrayView<void_*,int> local_38;
  TArrayView<void_*,int> local_28 [2];
  
  uVar5 = local_38._12_4_;
  local_38.ArrayNum = 1;
  iVar10 = 0;
  local_48[0] = (double *)0x0;
  local_38.DataPtr = local_48;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_38);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 != '\0') {
      local_28[0].ArrayNum = 1;
      local_28[0]._12_4_ = uVar5;
      local_28[0].DataPtr = local_48;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_28)
      ;
      pdVar4 = local_48[0];
      iVar1 = param_1->ArrayNum;
      if (0 < iVar1) {
        do {
          pTVar9 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,iVar10);
          iVar10 = iVar10 + 1;
          dVar3 = (pTVar9->Rotation).XY.m128d_f64[1];
          *pdVar4 = (pTVar9->Rotation).XY.m128d_f64[0];
          pdVar4[1] = dVar3;
          dVar3 = (pTVar9->Rotation).ZW.m128d_f64[1];
          pdVar4[2] = (pTVar9->Rotation).ZW.m128d_f64[0];
          pdVar4[3] = dVar3;
          dVar3 = (pTVar9->Translation).XY.m128d_f64[1];
          pdVar4[4] = (pTVar9->Translation).XY.m128d_f64[0];
          pdVar4[5] = dVar3;
          dVar3 = (pTVar9->Translation).ZW.m128d_f64[1];
          pdVar4[6] = (pTVar9->Translation).ZW.m128d_f64[0];
          pdVar4[7] = dVar3;
          dVar3 = (pTVar9->Scale3D).XY.m128d_f64[1];
          pdVar4[8] = (pTVar9->Scale3D).XY.m128d_f64[0];
          pdVar4[9] = dVar3;
          dVar3 = (pTVar9->Scale3D).ZW.m128d_f64[1];
          pdVar4[10] = (pTVar9->Scale3D).ZW.m128d_f64[0];
          pdVar4[0xb] = dVar3;
        } while (iVar10 < iVar1);
      }
      return true;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2625181124820730191>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                       ,0x14f,"Keys.IsClassSupported(TopPropertyStruct)");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  return false;
}


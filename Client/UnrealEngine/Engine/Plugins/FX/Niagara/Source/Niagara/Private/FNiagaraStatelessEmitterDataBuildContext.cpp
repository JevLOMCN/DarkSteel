// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 29

// AddDistribution<FNiagaraDistributionColor> @ 149417d50

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionColor>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionColor *param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  code *pcVar7;
  FLinearColor_u_0 FVar8;
  float fVar9;
  FLinearColor FVar10;
  bool bVar11;
  uint uVar12;
  TArrayView<FLinearColor_const_,int> *pTVar13;
  TIntVector3<unsigned_int> *pTVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  float fVar18;
  TIntVector3<unsigned_int>_u_0 local_118;
  FLinearColor_u_0 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FLinearColor_u_0 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FLinearColor_u_0 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<FLinearColor_const_,int> local_c8;
  FLinearColor_u_0 local_b8;
  TArrayView<FLinearColor_const_,int> local_a8;
  FLinearColor_u_0 local_98;
  TArrayView<FLinearColor_const_,int> local_88;
  FLinearColor_u_0 local_78;
  TArrayView<FLinearColor_const_,int> local_68;
  FLinearColor_u_0 local_58;
  TArrayView<FLinearColor_const_,int> local_48;
  TArrayView<FLinearColor_const_,int> local_38 [2];
  
  FVar10.field0_0x0 = FLinearColor::White.field0_0x0;
  cVar2 = (char)param_1->_padding_;
  FVar8 = FLinearColor::White.field0_0x0;
  if (cVar2 == '\0') {
    uVar17 = (param_1->Values).ArrayNum;
    pTVar13 = TArrayView<FLinearColor_const_,int>::
              TArrayView<FLinearColor_const_,int><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                        (local_38,&param_1->Values);
    local_c8.DataPtr = pTVar13->DataPtr;
    local_c8.ArrayNum = pTVar13->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    uVar12 = AddStaticData(this,&local_c8);
    fVar9 = __real_38d1b717;
    local_118._s_0.Z = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    local_b8 = FVar10.field0_0x0;
    if ((uVar12 == 0xffffffff) || (uVar17 == 0)) {
      uStack_100 = 1;
      local_108 = &local_b8;
      local_a8._12_4_ = uStack_fc;
      local_a8.ArrayNum = 1;
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      local_a8.DataPtr = (FLinearColor *)local_108;
      uVar17 = AddStaticData(this,&local_a8);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters
                ((TIntVector3<unsigned_int> *)&local_118._s_0,uVar17,1);
      uVar16 = local_118._s_0.X;
    }
    else {
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      if ((0x1ffff < uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BufferOffset <= EFlags::BufferOffsetMask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x9c,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar14;
      }
      if ((0x1ff < uVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x9d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar14;
      }
      uVar15 = local_118._s_0.X & 0xfffe0000;
      local_118._0_8_ = 0;
      uVar16 = (uVar15 | uVar12) & 0xfc01ffff | (uVar17 - 1) * 0x20000;
      local_118._s_0.Z = (uint)(float)(uVar17 - 1);
      if ((float)local_118._s_0.Z <= fVar9) {
        local_118._s_0.Z = (uint)fVar9;
      }
    }
    bVar3 = *(byte *)((longlong)&param_1->_padding_ + 1);
    bVar4 = *(byte *)((longlong)&param_1->_padding_ + 2);
    uVar17 = (bVar3 & 2) << 0x1c ^
             (((uint)(byte)~bVar3 << 0x1e ^ uVar16) & 0x40000000 ^ uVar16) & 0xdfffffff;
    uVar12 = uVar17 & 0xf3ffffff;
    local_118._0_8_ = CONCAT44(local_118._s_0.Y,uVar17) & 0xfffffffff3ffffff | 0x10000000;
    if (bVar4 == 0xff) {
      uVar12 = uVar12 | 0x1c000000;
    }
    else {
      if ((2 < bVar4) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValueMode <= EFlags::LookupValueModeMask - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar14;
      }
      uVar12 = uVar12 | 0x10000000 | (uint)bVar4 << 0x1a;
    }
    fVar18 = (param_1->ValuesTimeRange).field0_0x0._s_0.X;
    fVar1 = (param_1->ValuesTimeRange).field0_0x0._s_0.Y;
    if (fVar18 <= fVar9) {
      fVar18 = fVar9;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (uint)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (uint)fVar18;
    return __return_storage_ptr__;
  }
  if (cVar2 == '\x01') {
    uVar17 = AddRendererBinding(this,(FNiagaraVariableBase *)((longlong)&param_1->_padding_ + 4));
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar12 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_98 = FVar10.field0_0x0;
    if (uVar17 == 0xffffffff) {
      uStack_f0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar12 | 0x90000000;
      pTVar13 = &local_88;
      local_f8 = &local_98;
      local_88._12_4_ = uStack_ec;
      local_88.ArrayNum = 1;
      local_88.DataPtr = (FLinearColor *)local_f8;
LAB_14941800d:
      uVar17 = AddStaticData(this,pTVar13);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar17,1);
      return __return_storage_ptr__;
    }
  }
  else {
    if (cVar2 != '\x02') {
      local_d8 = (param_1->Values).AllocatorInstance.Data;
      iVar6 = (param_1->Values).ArrayNum;
      uVar5 = *(uchar *)((longlong)&param_1->_padding_ + 2);
      if ((iVar6 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar14;
      }
      local_48._12_4_ = uStack_cc;
      local_48.ArrayNum = iVar6;
      local_48.DataPtr = (FLinearColor *)local_d8;
      local_58 = FVar10.field0_0x0;
      iStack_d0 = iVar6;
      InternalAddDistribution<FLinearColor>
                (this,__return_storage_ptr__,(ENiagaraDistributionMode)param_1->_padding_,&local_48,
                 &param_1->ValuesTimeRange,uVar5,(FLinearColor *)&local_58._s_0);
      return __return_storage_ptr__;
    }
    uVar17 = AddExpression(this,(FInstancedStruct *)&param_1->_padding_);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar12 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_78._s_0 = FVar8._s_0;
    if (uVar17 == 0xffffffff) {
      uStack_e0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar12 | 0x90000000;
      pTVar13 = &local_68;
      local_e8 = &local_78;
      local_68._12_4_ = uStack_dc;
      local_68.ArrayNum = 1;
      local_68.DataPtr = (FLinearColor *)local_e8;
      goto LAB_14941800d;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar12 | 0x10000000;
  FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar17,1);
  return __return_storage_ptr__;
}

// AddDistribution<FNiagaraDistributionFloat> @ 149418130

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionFloat>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionFloat *param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<float_const_,int> *pTVar11;
  TIntVector3<unsigned_int> *pTVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  float local_res18 [4];
  TIntVector3<unsigned_int>_u_0 local_98;
  float *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38 [2];
  
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\0') {
    uVar15 = (param_1->Values).ArrayNum;
    local_res18[0] = 0.0;
    pTVar11 = TArrayView<float_const_,int>::
              TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                        (local_38,&param_1->Values);
    local_68.DataPtr = pTVar11->DataPtr;
    local_68.ArrayNum = pTVar11->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    uVar10 = AddStaticData(this,&local_68);
    fVar8 = __real_38d1b717;
    local_98._s_0.Z = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    if ((uVar10 == 0xffffffff) || (uVar15 == 0)) {
      uStack_80 = 1;
      local_88 = local_res18;
      local_58._12_4_ = uStack_7c;
      local_58.ArrayNum = 1;
      local_98._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      local_58.DataPtr = local_88;
      uVar15 = AddStaticData(this,&local_58);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters
                ((TIntVector3<unsigned_int> *)&local_98._s_0,uVar15,1);
      uVar14 = local_98._s_0.X;
    }
    else {
      local_98._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      if ((0x1ffff < uVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BufferOffset <= EFlags::BufferOffsetMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9c,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      if ((0x1ff < uVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9d,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      uVar13 = local_98._s_0.X & 0xfffe0000;
      local_98._0_8_ = 0;
      uVar14 = (uVar13 | uVar10) & 0xfc01ffff | (uVar15 - 1) * 0x20000;
      local_98._s_0.Z = (uint)(float)(uVar15 - 1);
      if ((float)local_98._s_0.Z <= fVar8) {
        local_98._s_0.Z = (uint)fVar8;
      }
    }
    bVar3 = *(byte *)((longlong)&param_1->_padding_ + 1);
    bVar4 = *(byte *)((longlong)&param_1->_padding_ + 2);
    uVar15 = (bVar3 & 2) << 0x1c ^
             (((uint)(byte)~bVar3 << 0x1e ^ uVar14) & 0x40000000 ^ uVar14) & 0xdfffffff;
    uVar10 = uVar15 & 0xf3ffffff;
    local_98._0_8_ = CONCAT44(local_98._s_0.Y,uVar15) & 0xfffffffff3ffffff | 0x10000000;
    if (bVar4 == 0xff) {
      uVar10 = uVar10 | 0x1c000000;
    }
    else {
      if ((2 < bVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueMode <= EFlags::LookupValueModeMask - 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      uVar10 = uVar10 | 0x10000000 | (uint)bVar4 << 0x1a;
    }
    fVar16 = (param_1->ValuesTimeRange).field0_0x0._s_0.X;
    fVar1 = (param_1->ValuesTimeRange).field0_0x0._s_0.Y;
    if (fVar16 <= fVar8) {
      fVar16 = fVar8;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (uint)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (uint)fVar16;
  }
  else if (cVar2 == '\x01') {
    uVar15 = AddRendererBinding(this,(FNiagaraVariableBase *)((longlong)&param_1->_padding_ + 4));
    InternalAddDistribution<float>(this,__return_storage_ptr__,uVar15,1,0.0,false);
  }
  else if (cVar2 == '\x02') {
    uVar15 = AddExpression(this,(FInstancedStruct *)&param_1->_padding_);
    InternalAddDistribution<float>(this,__return_storage_ptr__,uVar15,1,0.0,false);
  }
  else {
    local_78 = (param_1->Values).AllocatorInstance.Data;
    iVar6 = (param_1->Values).ArrayNum;
    uVar5 = *(uchar *)((longlong)&param_1->_padding_ + 2);
    if ((iVar6 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
      return pTVar12;
    }
    local_48._12_4_ = uStack_6c;
    local_48.ArrayNum = iVar6;
    local_48.DataPtr = (float *)local_78;
    iStack_70 = iVar6;
    InternalAddDistribution<float>
              (this,__return_storage_ptr__,(ENiagaraDistributionMode)param_1->_padding_,&local_48,
               &param_1->ValuesTimeRange,uVar5,0.0);
  }
  return __return_storage_ptr__;
}

// AddDistribution<FNiagaraDistributionPosition> @ 149418480

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionPosition>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionPosition *param_1)

{
  char cVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar9;
  TIntVector3<unsigned_int> *pTVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  TIntVector3<unsigned_int>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TVector<float>_u_0 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TVector<float>_u_0 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TVector<float> *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_88;
  TArrayView<UE::Math::TVector<float>_const_,int> local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TArrayView<UE::Math::TVector<float>_const_,int> local_58;
  TArrayView<UE::Math::TVector<float>_const_,int> local_48;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38 [2];
  
  uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  pTVar9 = &local_58;
  cVar1 = param_1->field_0x8;
  if (cVar1 == '\0') {
    uVar13 = *(uint *)&param_1->field_0x30;
    pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::
             TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                       (local_38,(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                 &param_1->field_0x28);
    local_88.DataPtr = pTVar9->DataPtr;
    local_88.ArrayNum = pTVar9->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    uVar8 = AddStaticData(this,&local_88);
    fVar14 = __real_38d1b717;
    local_118._s_0.Z = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    local_108._0_8_ = uVar6;
    local_108._s_0.Z = (float)uVar12;
    if ((uVar8 == 0xffffffff) || (uVar13 == 0)) {
      uStack_c0 = 1;
      local_c8 = &local_108;
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = 1;
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      local_78.DataPtr = (TVector<float> *)local_c8;
      uVar13 = AddStaticData(this,&local_78);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters
                ((TIntVector3<unsigned_int> *)&local_118._s_0,uVar13,1);
      uVar12 = local_118._s_0.X;
    }
    else {
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      if ((0x1ffff < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BufferOffset <= EFlags::BufferOffsetMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9c,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TIntVector3<unsigned_int> *)(*pcVar5)();
        return pTVar10;
      }
      if ((0x1ff < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TIntVector3<unsigned_int> *)(*pcVar5)();
        return pTVar10;
      }
      uVar11 = local_118._s_0.X & 0xfffe0000;
      local_118._0_8_ = 0;
      uVar12 = (uVar11 | uVar8) & 0xfc01ffff | (uVar13 - 1) * 0x20000;
      local_118._s_0.Z = (uint)(float)(uVar13 - 1);
      if ((float)local_118._s_0.Z <= fVar14) {
        local_118._s_0.Z = (uint)fVar14;
      }
    }
    bVar2 = param_1->field_0xa;
    uVar13 = ((byte)param_1->field_0x9 & 2) << 0x1c ^
             (((uint)(byte)~param_1->field_0x9 << 0x1e ^ uVar12) & 0x40000000 ^ uVar12) & 0xdfffffff
    ;
    uVar8 = uVar13 & 0xf3ffffff;
    local_118._0_8_ = CONCAT44(local_118._s_0.Y,uVar13) & 0xfffffffff3ffffff | 0x10000000;
    if (bVar2 == 0xff) {
      uVar8 = uVar8 | 0x1c000000;
    }
    else {
      if ((2 < bVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueMode <= EFlags::LookupValueModeMask - 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TIntVector3<unsigned_int> *)(*pcVar5)();
        return pTVar10;
      }
      uVar8 = uVar8 | 0x10000000 | (uint)bVar2 << 0x1a;
    }
    uVar13 = *(uint *)&param_1->field_0x3c;
    fVar15 = *(float *)&param_1->field_0x38;
    if (*(float *)&param_1->field_0x38 <= fVar14) {
      fVar15 = fVar14;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = uVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (uint)fVar15;
    return __return_storage_ptr__;
  }
  if (cVar1 == '\x01') {
    uVar13 = AddRendererBinding(this,(FNiagaraVariableBase *)&param_1->field_0xc);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar8 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_f8._0_8_ = uVar6;
    local_f8._s_0.Z = (float)uVar12;
    if (uVar13 == 0xffffffff) {
      uStack_b0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar8 | 0x90000000;
      pTVar9 = &local_68;
      local_b8 = &local_f8;
      local_68._12_4_ = uStack_ac;
      local_68.ArrayNum = 1;
      local_68.DataPtr = (TVector<float> *)local_b8;
LAB_149418755:
      uVar13 = AddStaticData(this,pTVar9);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar13,1);
      return __return_storage_ptr__;
    }
  }
  else {
    if (cVar1 != '\x02') {
      local_98 = *(TVector<float> **)&param_1->field_0x28;
      iVar4 = *(int *)&param_1->field_0x30;
      uVar3 = param_1->field_0xa;
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TIntVector3<unsigned_int> *)(*pcVar5)();
        return pTVar10;
      }
      local_48._12_4_ = uStack_8c;
      local_48.ArrayNum = iVar4;
      local_48.DataPtr = local_98;
      local_d8._0_8_ = uVar6;
      local_d8._s_0.Z = (float)uVar12;
      iStack_90 = iVar4;
      InternalAddDistribution<UE::Math::TVector<float>_>
                (this,__return_storage_ptr__,param_1->field_0x8,&local_48,
                 (TVector2<float> *)&param_1->field_0x38,uVar3,(TVector<float> *)&local_d8._s_0);
      return __return_storage_ptr__;
    }
    fVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = AddExpression(this,(FInstancedStruct *)&param_1->field_0x18);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar8 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_e8._0_8_ = uVar6;
    local_e8._s_0.Z = fVar14;
    if (uVar13 == 0xffffffff) {
      uStack_a0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar8 | 0x90000000;
      local_a8 = &local_e8;
      local_58._12_4_ = uStack_9c;
      local_58.ArrayNum = 1;
      local_58.DataPtr = (TVector<float> *)local_a8;
      goto LAB_149418755;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar8 | 0x10000000;
  FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar13,1);
  return __return_storage_ptr__;
}

// AddDistribution<FNiagaraDistributionVector2> @ 1494188a0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionVector2>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionVector2 *param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  TVector2<float> TVar9;
  bool bVar10;
  uint uVar11;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar12;
  TIntVector3<unsigned_int> *pTVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  float fVar17;
  TVector2<float>_u_0 local_res18;
  TIntVector3<unsigned_int>_u_0 local_98;
  TVector2<float>_u_0 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_68;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_58;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_48;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_38 [2];
  
  TVar9.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\0') {
    uVar16 = (param_1->Values).ArrayNum;
    pTVar12 = TArrayView<UE::Math::TVector2<float>_const_,int>::
              TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                        (local_38,&param_1->Values);
    local_68.DataPtr = pTVar12->DataPtr;
    local_68.ArrayNum = pTVar12->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
    uVar11 = AddStaticData(this,&local_68);
    fVar8 = __real_38d1b717;
    local_98._s_0.Z = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    local_res18 = TVar9.field0_0x0;
    if ((uVar11 == 0xffffffff) || (uVar16 == 0)) {
      uStack_80 = 1;
      local_88 = &local_res18;
      local_58._12_4_ = uStack_7c;
      local_58.ArrayNum = 1;
      local_98._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      local_58.DataPtr = (TVector2<float> *)local_88;
      uVar16 = AddStaticData(this,&local_58);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters
                ((TIntVector3<unsigned_int> *)&local_98._s_0,uVar16,1);
      uVar15 = local_98._s_0.X;
    }
    else {
      local_98._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      if ((0x1ffff < uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BufferOffset <= EFlags::BufferOffsetMask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x9c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar13;
      }
      if ((0x1ff < uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x9d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar13;
      }
      uVar14 = local_98._s_0.X & 0xfffe0000;
      local_98._0_8_ = 0;
      uVar15 = (uVar14 | uVar11) & 0xfc01ffff | (uVar16 - 1) * 0x20000;
      local_98._s_0.Z = (uint)(float)(uVar16 - 1);
      if ((float)local_98._s_0.Z <= fVar8) {
        local_98._s_0.Z = (uint)fVar8;
      }
    }
    bVar3 = *(byte *)((longlong)&param_1->_padding_ + 1);
    bVar4 = *(byte *)((longlong)&param_1->_padding_ + 2);
    uVar16 = (bVar3 & 2) << 0x1c ^
             (((uint)(byte)~bVar3 << 0x1e ^ uVar15) & 0x40000000 ^ uVar15) & 0xdfffffff;
    uVar11 = uVar16 & 0xf3ffffff;
    local_98._0_8_ = CONCAT44(local_98._s_0.Y,uVar16) & 0xfffffffff3ffffff | 0x10000000;
    if (bVar4 == 0xff) {
      uVar11 = uVar11 | 0x1c000000;
    }
    else {
      if ((2 < bVar4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValueMode <= EFlags::LookupValueModeMask - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                              ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar13;
      }
      uVar11 = uVar11 | 0x10000000 | (uint)bVar4 << 0x1a;
    }
    fVar17 = (param_1->ValuesTimeRange).field0_0x0._s_0.X;
    fVar1 = (param_1->ValuesTimeRange).field0_0x0._s_0.Y;
    if (fVar17 <= fVar8) {
      fVar17 = fVar8;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (uint)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (uint)fVar17;
  }
  else {
    if (cVar2 == '\x01') {
      uVar16 = AddRendererBinding(this,(FNiagaraVariableBase *)((longlong)&param_1->_padding_ + 4));
    }
    else {
      if (cVar2 != '\x02') {
        local_78 = (param_1->Values).AllocatorInstance.Data;
        iVar6 = (param_1->Values).ArrayNum;
        uVar5 = *(uchar *)((longlong)&param_1->_padding_ + 2);
        if ((iVar6 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TIntVector3<unsigned_int> *)(*pcVar7)();
          return pTVar13;
        }
        local_48._12_4_ = uStack_6c;
        local_48.ArrayNum = iVar6;
        local_48.DataPtr = (TVector2<float> *)local_78;
        iStack_70 = iVar6;
        InternalAddDistribution<UE::Math::TVector2<float>_>
                  (this,__return_storage_ptr__,(ENiagaraDistributionMode)param_1->_padding_,
                   &local_48,&param_1->ValuesTimeRange,uVar5,TVar9);
        return __return_storage_ptr__;
      }
      uVar16 = AddExpression(this,(FInstancedStruct *)&param_1->_padding_);
    }
    InternalAddDistribution<UE::Math::TVector2<float>_>
              (this,__return_storage_ptr__,uVar16,1,TVar9,false);
  }
  return __return_storage_ptr__;
}

// AddDistribution<FNiagaraDistributionVector3> @ 149418be0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionVector3>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionVector3 *param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar11;
  TIntVector3<unsigned_int> *pTVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  TIntVector3<unsigned_int>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TVector<float>_u_0 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TVector<float>_u_0 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_88;
  TArrayView<UE::Math::TVector<float>_const_,int> local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TArrayView<UE::Math::TVector<float>_const_,int> local_58;
  TArrayView<UE::Math::TVector<float>_const_,int> local_48;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38 [2];
  
  uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  pTVar11 = &local_58;
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\0') {
    uVar15 = (param_1->Values).ArrayNum;
    pTVar11 = TArrayView<UE::Math::TVector<float>_const_,int>::
              TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                        (local_38,&param_1->Values);
    local_88.DataPtr = pTVar11->DataPtr;
    local_88.ArrayNum = pTVar11->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    uVar10 = AddStaticData(this,&local_88);
    fVar16 = __real_38d1b717;
    local_118._s_0.Z = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    local_108._0_8_ = uVar8;
    local_108._s_0.Z = (float)uVar14;
    if ((uVar10 == 0xffffffff) || (uVar15 == 0)) {
      uStack_c0 = 1;
      local_c8 = &local_108;
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = 1;
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      local_78.DataPtr = (TVector<float> *)local_c8;
      uVar15 = AddStaticData(this,&local_78);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters
                ((TIntVector3<unsigned_int> *)&local_118._s_0,uVar15,1);
      uVar14 = local_118._s_0.X;
    }
    else {
      local_118._0_8_ =
           UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_ & 0xffffffff93ffffff |
           0x90000000;
      if ((0x1ffff < uVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BufferOffset <= EFlags::BufferOffsetMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9c,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      if ((0x1ff < uVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x9d,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      uVar13 = local_118._s_0.X & 0xfffe0000;
      local_118._0_8_ = 0;
      uVar14 = (uVar13 | uVar10) & 0xfc01ffff | (uVar15 - 1) * 0x20000;
      local_118._s_0.Z = (uint)(float)(uVar15 - 1);
      if ((float)local_118._s_0.Z <= fVar16) {
        local_118._s_0.Z = (uint)fVar16;
      }
    }
    bVar3 = *(byte *)((longlong)&param_1->_padding_ + 1);
    bVar4 = *(byte *)((longlong)&param_1->_padding_ + 2);
    uVar15 = (bVar3 & 2) << 0x1c ^
             (((uint)(byte)~bVar3 << 0x1e ^ uVar14) & 0x40000000 ^ uVar14) & 0xdfffffff;
    uVar10 = uVar15 & 0xf3ffffff;
    local_118._0_8_ = CONCAT44(local_118._s_0.Y,uVar15) & 0xfffffffff3ffffff | 0x10000000;
    if (bVar4 == 0xff) {
      uVar10 = uVar10 | 0x1c000000;
    }
    else {
      if ((2 < bVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueMode <= EFlags::LookupValueModeMask - 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                             ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      uVar10 = uVar10 | 0x10000000 | (uint)bVar4 << 0x1a;
    }
    fVar17 = (param_1->ValuesTimeRange).field0_0x0._s_0.X;
    fVar1 = (param_1->ValuesTimeRange).field0_0x0._s_0.Y;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (uint)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (uint)fVar17;
    return __return_storage_ptr__;
  }
  if (cVar2 == '\x01') {
    uVar15 = AddRendererBinding(this,(FNiagaraVariableBase *)((longlong)&param_1->_padding_ + 4));
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar10 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_f8._0_8_ = uVar8;
    local_f8._s_0.Z = (float)uVar14;
    if (uVar15 == 0xffffffff) {
      uStack_b0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar10 | 0x90000000;
      pTVar11 = &local_68;
      local_b8 = &local_f8;
      local_68._12_4_ = uStack_ac;
      local_68.ArrayNum = 1;
      local_68.DataPtr = (TVector<float> *)local_b8;
LAB_149418eb5:
      uVar15 = AddStaticData(this,pTVar11);
      FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar15,1);
      return __return_storage_ptr__;
    }
  }
  else {
    if (cVar2 != '\x02') {
      local_98 = (param_1->Values).AllocatorInstance.Data;
      iVar6 = (param_1->Values).ArrayNum;
      uVar5 = *(uchar *)((longlong)&param_1->_padding_ + 2);
      if ((iVar6 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TIntVector3<unsigned_int> *)(*pcVar7)();
        return pTVar12;
      }
      local_48._12_4_ = uStack_8c;
      local_48.ArrayNum = iVar6;
      local_48.DataPtr = (TVector<float> *)local_98;
      local_d8._0_8_ = uVar8;
      local_d8._s_0.Z = (float)uVar14;
      iStack_90 = iVar6;
      InternalAddDistribution<UE::Math::TVector<float>_>
                (this,__return_storage_ptr__,(ENiagaraDistributionMode)param_1->_padding_,&local_48,
                 &param_1->ValuesTimeRange,uVar5,(TVector<float> *)&local_d8._s_0);
      return __return_storage_ptr__;
    }
    fVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar15 = AddExpression(this,(FInstancedStruct *)&param_1->_padding_);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
    uVar10 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0x3ffffff;
    local_e8._0_8_ = uVar8;
    local_e8._s_0.Z = fVar16;
    if (uVar15 == 0xffffffff) {
      uStack_a0 = 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = uVar10 | 0x90000000;
      local_a8 = &local_e8;
      local_58._12_4_ = uStack_9c;
      local_58.ArrayNum = 1;
      local_58.DataPtr = (TVector<float> *)local_a8;
      goto LAB_149418eb5;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar10 | 0x10000000;
  FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,uVar15,1);
  return __return_storage_ptr__;
}

// AddDistributionAsCurve<FNiagaraDistributionCurveFloat,float> @ 149419000

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::
AddDistributionAsCurve<FNiagaraDistributionCurveFloat,float>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,FNiagaraDistributionCurveFloat *param_1,
          float param_2)

{
  code *pcVar1;
  bool bVar2;
  TIntVector3<unsigned_int> *pTVar3;
  ENiagaraDistributionMode EVar4;
  TArrayView<float_const_,int> *pTVar5;
  float local_res18;
  float local_res1c;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  EVar4 = (ENiagaraDistributionMode)param_1->_padding_;
  if (((EVar4 == UniformCurve) || ((byte)(EVar4 - NonUniformCurve) < 2)) &&
     (local_38.ArrayNum = (param_1->Values).ArrayNum, 1 < local_38.ArrayNum)) {
    local_38.DataPtr = (float *)(param_1->Values).AllocatorInstance.Data;
    pTVar5 = local_28;
    local_28[0].ArrayNum = local_38.ArrayNum;
    local_28[0]._12_4_ = local_38._12_4_;
    local_28[0].DataPtr = local_38.DataPtr;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6501674703311077182>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0xc2,
                       "(Distribution.IsCurve() || Distribution.IsGradient()) && Distribution.Values.Num() > 1"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntVector3<unsigned_int> *)(*pcVar1)();
      return pTVar3;
    }
    local_38.ArrayNum = 2;
    local_38.DataPtr = &local_res18;
    pTVar5 = &local_38;
    EVar4 = NonUniformCurve;
    local_res18 = param_2;
    local_res1c = param_2;
  }
  InternalAddDistribution<float>
            (this,__return_storage_ptr__,EVar4,pTVar5,&param_1->ValuesTimeRange,
             *(uchar *)((longlong)&param_1->_padding_ + 2),param_2);
  return __return_storage_ptr__;
}

// AddDistributionAsCurve<FNiagaraDistributionCurveVector3,UE::Math::TVector<float>_> @ 149419110

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::
AddDistributionAsCurve<FNiagaraDistributionCurveVector3,UE::Math::TVector<float>_>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,
          FNiagaraDistributionCurveVector3 *param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIntVector3<unsigned_int> *pTVar3;
  TVector<float>_u_0 *pTVar4;
  ENiagaraDistributionMode EVar5;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar6;
  TVector<float>_u_0 local_68;
  undefined4 uStack_5c;
  TVector<float>_u_0 local_58;
  undefined4 uStack_4c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_48;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38;
  TVector<float>_u_0 local_28;
  FScriptContainerElement *local_1c;
  float local_14;
  
  EVar5 = (ENiagaraDistributionMode)param_1->_padding_;
  if (((EVar5 == UniformCurve) || ((byte)(EVar5 - NonUniformCurve) < 2)) &&
     (local_68._s_0.Z = (float)(param_1->Values).ArrayNum, 1 < (int)local_68._s_0.Z)) {
    local_68._0_8_ = (param_1->Values).AllocatorInstance.Data;
    local_58._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_58._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    pTVar6 = &local_38;
    local_38._12_4_ = uStack_5c;
    local_38.ArrayNum = (int)local_68._s_0.Z;
    pTVar4 = &local_58;
    local_38.DataPtr = (TVector<float> *)local_68._0_8_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6501674703311077182>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0xc2,
                       "(Distribution.IsCurve() || Distribution.IsGradient()) && Distribution.Values.Num() > 1"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntVector3<unsigned_int> *)(*pcVar1)();
      return pTVar3;
    }
    local_68._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    pTVar6 = &local_48;
    local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    EVar5 = NonUniformCurve;
    local_58._0_8_ = &local_28;
    local_68._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_58._s_0.Z = 2.8026e-45;
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = 2;
    pTVar4 = &local_68;
    local_48.DataPtr = (TVector<float> *)local_58._0_8_;
    local_28._0_8_ = local_68._0_8_;
    local_1c = (FScriptContainerElement *)local_68._0_8_;
    local_14 = local_28._s_0.Z;
  }
  InternalAddDistribution<UE::Math::TVector<float>_>
            (this,__return_storage_ptr__,EVar5,pTVar6,&param_1->ValuesTimeRange,
             *(uchar *)((longlong)&param_1->_padding_ + 2),(TVector<float> *)&pTVar4->_s_0);
  return __return_storage_ptr__;
}

// GetTransientBuildData<NiagaraStateless::FPhysicsBuildData> @ 149420110

FPhysicsBuildData * __thiscall
FNiagaraStatelessEmitterDataBuildContext::GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>
          (FNiagaraStatelessEmitterDataBuildContext *this)

{
  TMap<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>,0>_>
  *this_00;
  undefined8 *puVar1;
  FName FVar2;
  uint uVar3;
  undefined8 *puVar4;
  FPhysicsBuildData *pFVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  FName local_res10;
  FName *local_res18 [2];
  
  this_00 = &this->TransientBuildData;
  ::FName::FName(&local_res10,"FPhysicsBuildData");
  FVar2 = local_res10;
  uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->TransientBuildData).field_0x8 !=
      *(int *)&(this->TransientBuildData).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TransientBuildData).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TransientBuildData).field_0x38;
    }
    iVar8 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TransientBuildData).field_0x48 - 1U & uVar3) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_res10) {
          if (lVar7 != 0) goto LAB_1494201da;
          break;
        }
        iVar8 = *(int *)(lVar7 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_res18[0] = &local_res10;
  TSet<TTuple<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FNiagaraStatelessEmitterDataBuildContext::FTransientObject,TDefaultDelete<FNiagaraStatelessEmitterDataBuildContext::FTransientObject>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar3,
             (bool *)local_res18);
  lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_1494201da:
  if (*(longlong *)(lVar7 + 8) == 0) {
    puVar4 = ::operator_new(0x120);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = &
                ___7__TTransientObject_UFPhysicsBuildData_NiagaraStateless___FNiagaraStatelessEmitterDataBuildContext__6B_
      ;
      memset(puVar4 + 2,0,0x110);
      NiagaraStateless::FPhysicsBuildData::FPhysicsBuildData((FPhysicsBuildData *)(puVar4 + 2));
    }
    puVar1 = *(undefined8 **)(lVar7 + 8);
    if ((puVar1 != puVar4) && (*(undefined8 **)(lVar7 + 8) = puVar4, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149420245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar5 = (FPhysicsBuildData *)(**(code **)(**(longlong **)(lVar7 + 8) + 8))();
  return pFVar5;
}

// InternalAddDistribution<float> @ 149420800

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<float>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,uint param_1,uint param_2,float param_3,
          bool param_4)

{
  uint uVar1;
  TArrayView<float_const_,int> local_18;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  uVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  if ((param_1 == 0xffffffff) || (param_2 == 0)) {
    local_18.DataPtr = &param_3;
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar1 & 0x93ffffff | 0x90000000;
    param_2 = 1;
    local_18.ArrayNum = 1;
    param_1 = AddStaticData(this,&local_18);
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (uint)param_4 << 0x1f | uVar1 & 0x13ffffff | 0x10000000;
  }
  FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// InternalAddDistribution<float> @ 1494208c0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<float>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,ENiagaraDistributionMode param_1,
          TArrayView<float_const_,int> *param_2,TVector2<float> *param_3,uchar param_4,float param_5
          )

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TIntVector3<unsigned_int> *pTVar7;
  undefined4 uStack_4c;
  TArrayView<float_const_,int> local_48 [3];
  
  if (param_2->ArrayNum == 0) {
    param_2->DataPtr = &param_5;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  bVar5 = false;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X & 0x1fffffff | 0xc0000000;
  if ((param_1 - UniformConstant & 0xf9) == 0) {
    uVar6 = 0x10000000;
    if (param_1 != UniformRange) goto LAB_149420948;
  }
  else {
    uVar6 = 0;
LAB_149420948:
    if (param_1 != NonUniformRange) goto LAB_149420954;
  }
  bVar5 = true;
LAB_149420954:
  if (((param_1 == Array) || (param_1 == Binding)) || (param_1 == Expression)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else if (param_1 == UniformConstant) {
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  else if (param_1 == UniformRange) {
    if (param_2->ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                         ,0x73,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,2);
  }
  if (bVar5) {
    param_4 = 0xff;
  }
  uVar6 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0xe3ffffff | uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6;
  if (param_4 == 0xff) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6 | 0xc000000;
  }
  else {
    if (2 < param_4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMode <= EFlags::LookupValueModeMask - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                         ,0x8a,L"ValueMode (%d) is out of range (0 - %d)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X | (uint)param_4 << 0x1a;
  }
  local_48[0].DataPtr = param_2->DataPtr;
  local_48[0].ArrayNum = param_2->ArrayNum;
  local_48[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  fVar2 = (param_3->field0_0x0)._s_0.X;
  uVar6 = AddStaticData(this,local_48);
  FNiagaraStatelessBuiltDistribution::SetLookupParameters
            (__return_storage_ptr__,uVar6,param_2->ArrayNum,fVar2,fVar1);
  return __return_storage_ptr__;
}

// InternalAddDistribution<UE::Math::TVector2<float>_> @ 149420ae0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<UE::Math::TVector2<float>_>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,uint param_1,uint param_2,
          TVector2<float> param_3,bool param_4)

{
  uint uVar1;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  uVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  if ((param_1 == 0xffffffff) || (param_2 == 0)) {
    local_18.DataPtr = &param_3;
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar1 & 0x93ffffff | 0x90000000;
    param_2 = 1;
    local_18.ArrayNum = 1;
    param_1 = AddStaticData(this,&local_18);
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (uint)param_4 << 0x1f | uVar1 & 0x13ffffff | 0x10000000;
  }
  FNiagaraStatelessBuiltDistribution::SetLookupParameters(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// InternalAddDistribution<UE::Math::TVector2<float>_> @ 149420ba0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<UE::Math::TVector2<float>_>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,ENiagaraDistributionMode param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,TVector2<float> *param_3,
          uchar param_4,TVector2<float> param_5)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TIntVector3<unsigned_int> *pTVar7;
  undefined4 uStack_4c;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_48 [3];
  
  if (param_2->ArrayNum == 0) {
    param_2->DataPtr = &param_5;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  bVar5 = false;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X & 0x1fffffff | 0xc0000000;
  if ((param_1 - UniformConstant & 0xf9) == 0) {
    uVar6 = 0x10000000;
    if (param_1 != UniformRange) goto LAB_149420c28;
  }
  else {
    uVar6 = 0;
LAB_149420c28:
    if (param_1 != NonUniformRange) goto LAB_149420c34;
  }
  bVar5 = true;
LAB_149420c34:
  if (((param_1 == Array) || (param_1 == Binding)) || (param_1 == Expression)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else if (param_1 == UniformConstant) {
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  else if (param_1 == UniformRange) {
    if (param_2->ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                         ,0x73,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,2);
  }
  if (bVar5) {
    param_4 = 0xff;
  }
  uVar6 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0xe3ffffff | uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6;
  if (param_4 == 0xff) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6 | 0xc000000;
  }
  else {
    if (2 < param_4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMode <= EFlags::LookupValueModeMask - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                         ,0x8a,L"ValueMode (%d) is out of range (0 - %d)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X | (uint)param_4 << 0x1a;
  }
  local_48[0].DataPtr = param_2->DataPtr;
  local_48[0].ArrayNum = param_2->ArrayNum;
  local_48[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  fVar2 = (param_3->field0_0x0)._s_0.X;
  uVar6 = AddStaticData(this,local_48);
  FNiagaraStatelessBuiltDistribution::SetLookupParameters
            (__return_storage_ptr__,uVar6,param_2->ArrayNum,fVar2,fVar1);
  return __return_storage_ptr__;
}

// InternalAddDistribution<UE::Math::TVector<float>_> @ 149420dc0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<UE::Math::TVector<float>_>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,ENiagaraDistributionMode param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,TVector2<float> *param_3,
          uchar param_4,TVector<float> *param_5)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TIntVector3<unsigned_int> *pTVar7;
  undefined4 uStack_4c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_48 [3];
  
  if (param_2->ArrayNum == 0) {
    param_2->DataPtr = param_5;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  bVar5 = false;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X & 0x1fffffff | 0xc0000000;
  if ((param_1 - UniformConstant & 0xf9) == 0) {
    uVar6 = 0x10000000;
    if (param_1 != UniformRange) goto LAB_149420e4e;
  }
  else {
    uVar6 = 0;
LAB_149420e4e:
    if (param_1 != NonUniformRange) goto LAB_149420e5a;
  }
  bVar5 = true;
LAB_149420e5a:
  if (((param_1 == Array) || (param_1 == Binding)) || (param_1 == Expression)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else if (param_1 == UniformConstant) {
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  else if (param_1 == UniformRange) {
    if (param_2->ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                         ,0x73,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,2);
  }
  if (bVar5) {
    param_4 = 0xff;
  }
  uVar6 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0xe3ffffff | uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6;
  if (param_4 == 0xff) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6 | 0xc000000;
  }
  else {
    if (2 < param_4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMode <= EFlags::LookupValueModeMask - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                         ,0x8a,L"ValueMode (%d) is out of range (0 - %d)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X | (uint)param_4 << 0x1a;
  }
  local_48[0].DataPtr = param_2->DataPtr;
  local_48[0].ArrayNum = param_2->ArrayNum;
  local_48[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  fVar2 = (param_3->field0_0x0)._s_0.X;
  uVar6 = AddStaticData(this,local_48);
  FNiagaraStatelessBuiltDistribution::SetLookupParameters
            (__return_storage_ptr__,uVar6,param_2->ArrayNum,fVar2,fVar1);
  return __return_storage_ptr__;
}

// InternalAddDistribution<FLinearColor> @ 149420ff0

TIntVector3<unsigned_int> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<FLinearColor>
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TIntVector3<unsigned_int> *__return_storage_ptr__,ENiagaraDistributionMode param_1,
          TArrayView<FLinearColor_const_,int> *param_2,TVector2<float> *param_3,uchar param_4,
          FLinearColor *param_5)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TIntVector3<unsigned_int> *pTVar7;
  undefined4 uStack_4c;
  TArrayView<FLinearColor_const_,int> local_48 [3];
  
  if (param_2->ArrayNum == 0) {
    param_2->DataPtr = param_5;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  bVar5 = false;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X & 0x1fffffff | 0xc0000000;
  if ((param_1 - UniformConstant & 0xf9) == 0) {
    uVar6 = 0x10000000;
    if (param_1 != UniformRange) goto LAB_14942107e;
  }
  else {
    uVar6 = 0;
LAB_14942107e:
    if (param_1 != NonUniformRange) goto LAB_14942108a;
  }
  bVar5 = true;
LAB_14942108a:
  if (((param_1 == Array) || (param_1 == Binding)) || (param_1 == Expression)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else if (param_1 == UniformConstant) {
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,1);
  }
  else if (param_1 == UniformRange) {
    if (param_2->ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                         ,0x73,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    param_2->DataPtr = param_2->DataPtr;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_4c,2);
  }
  if (bVar5) {
    param_4 = 0xff;
  }
  uVar6 = (__return_storage_ptr__->field0_0x0)._s_0.X & 0xe3ffffff | uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6;
  if (param_4 == 0xff) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar6 | 0xc000000;
  }
  else {
    if (2 < param_4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMode <= EFlags::LookupValueModeMask - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                         ,0x8a,L"ValueMode (%d) is out of range (0 - %d)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TIntVector3<unsigned_int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X | (uint)param_4 << 0x1a;
  }
  local_48[0].DataPtr = param_2->DataPtr;
  local_48[0].ArrayNum = param_2->ArrayNum;
  local_48[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  fVar2 = (param_3->field0_0x0)._s_0.X;
  uVar6 = AddStaticData(this,local_48);
  FNiagaraStatelessBuiltDistribution::SetLookupParameters
            (__return_storage_ptr__,uVar6,param_2->ArrayNum,fVar2,fVar1);
  return __return_storage_ptr__;
}

// ConvertDistributionToRange @ 14943e450

FNiagaraStatelessRange<UE::Math::TVector<float>_> * __thiscall
FNiagaraStatelessEmitterDataBuildContext::ConvertDistributionToRange
          (FNiagaraStatelessEmitterDataBuildContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *__return_storage_ptr__,
          FNiagaraDistributionRangeVector3 *param_1,TVector<float> *param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar5 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar5;
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar2;
  cVar1 = (char)param_1->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  if (cVar1 == '\x01') {
    iVar3 = AddRendererBinding(this,(FNiagaraVariableBase *)((longlong)&param_1->_padding_ + 4));
    __return_storage_ptr__->ParameterOffset = iVar3;
    return __return_storage_ptr__;
  }
  if (cVar1 != '\x02') {
    uVar5 = *(undefined8 *)&(param_1->Min).field0_0x0;
    fVar2 = (param_1->Min).field0_0x0._s_0.Z;
    uStack_24 = (undefined4)uVar5;
    uStack_20 = (undefined4)((ulonglong)uVar5 >> 0x20);
    fVar4 = fVar2;
    if (cVar1 != '\x03') {
      uVar5 = *(undefined8 *)&(param_1->Max).field0_0x0;
      fVar4 = (param_1->Max).field0_0x0._s_0.Z;
    }
    *(ulonglong *)__return_storage_ptr__ = CONCAT44(uStack_24,0xffffffff);
    *(ulonglong *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) =
         CONCAT44(fVar2,uStack_20);
    *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar4;
    return __return_storage_ptr__;
  }
  iVar3 = AddExpression(this,(FInstancedStruct *)&param_1->_padding_);
  __return_storage_ptr__->ParameterOffset = iVar3;
  return __return_storage_ptr__;
}

// AddExpression @ 149477bb0

int __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddExpression
          (FNiagaraStatelessEmitterDataBuildContext *this,FInstancedStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  TArray<TTuple<int,FInstancedStruct>,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  UPackage *pUVar9;
  FNiagaraTypeDefinition *pFVar10;
  undefined8 *puVar11;
  int local_res10 [2];
  FName local_res18;
  FInstancedStruct local_58;
  FName local_40;
  FNiagaraTypeDefinitionHandle local_38 [2];
  void *local_30;
  undefined8 local_28;
  
  plVar2 = (longlong *)param_1->StructMemory;
  local_res10[0] = -1;
  if (plVar2 == (longlong *)0x0) {
    return -1;
  }
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar3 == (UScriptStruct *)0x0) {
    return -1;
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpression,(UObject *)pUVar9,
                         L"NiagaraStatelessExpression");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpression,(UObject *)pUVar9,
                           L"NiagaraStatelessExpression");
      if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return local_res10[0];
      }
    }
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton)->_padding_))
    {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) {
      return local_res10[0];
    }
  }
  ::FName::FName(&local_res18,"__StatelessInternal__.Expression",this->Expressions->ArrayNum);
  pFVar10 = (FNiagaraTypeDefinition *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
  local_40 = local_res18;
  local_38[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_38,pFVar10);
  local_30 = (void *)0x0;
  local_28 = 0;
  (**(code **)(this->RendererBindings->_padding_ + 0x10))
            (this->RendererBindings,&local_40,0,0,local_res10);
  pTVar4 = this->Expressions;
  puVar11 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,&local_58,this);
  iVar8 = pTVar4->ArrayNum;
  if (iVar8 == pTVar4->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar8 + 1;
  pFVar1 = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
  *(int *)pFVar1 = local_res10[0];
  pUVar5 = (UObject *)*puVar11;
  uVar6 = puVar11[1];
  *(UObject **)(pFVar1 + 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(undefined8 *)(pFVar1 + 0x10) = uVar6;
  *puVar11 = 0;
  puVar11[1] = 0;
  FInstancedStruct::Reset(&local_58);
  local_res10[0] = (int)((ulonglong)(longlong)local_res10[0] >> 2);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return local_res10[0];
}

// AddParticleSimulationExecSimulate @ 149477df0

void __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FParticleSimulationExecData *pFVar6;
  longlong lVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar6 = this->ParticleExecData;
  if (pFVar6 == (FParticleSimulationExecData *)0x0) {
    if (*(longlong *)param_1 == 0) {
      return;
    }
    plVar12 = *(longlong **)&param_1->field_0x28;
  }
  else {
    iVar11 = (pFVar6->SimulateFunctions).ArrayNum;
    piVar1 = &(pFVar6->SimulateFunctions).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,&(pFVar6->SimulateFunctions).AllocatorInstance,piVar1);
    }
    (pFVar6->SimulateFunctions).ArrayNum = iVar11 + 1;
    lVar7 = *(longlong *)param_1;
    iVar3 = this->RandomSeedOffest;
    iVar4 = this->ShaderParameterOffset;
    iVar5 = this->ModuleBuiltDataOffset;
    uVar8 = *(undefined8 *)&param_1->field_0x28;
    pFVar9 = (pFVar6->SimulateFunctions).AllocatorInstance.Data;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_28 = *(undefined4 *)&param_1->field_0x10;
    uStack_24 = *(undefined4 *)&param_1->field_0x14;
    lVar10 = *(longlong *)&param_1->field_0x10;
    uStack_20 = *(undefined4 *)&param_1->field_0x18;
    uStack_1c = *(undefined4 *)&param_1->field_0x1c;
    lVar13 = (longlong)iVar11 * 0x40;
    local_18 = *(undefined8 *)&param_1->field_0x20;
    if (lVar7 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    *(longlong *)(pFVar9 + lVar13) = lVar7;
    *(undefined8 *)(pFVar9 + lVar13 + 0x28) = uVar8;
    pFVar2 = pFVar9 + lVar13 + 0x10;
    *(undefined4 *)pFVar2 = local_28;
    *(undefined4 *)(pFVar2 + 4) = uStack_24;
    *(undefined4 *)(pFVar2 + 8) = uStack_20;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_1c;
    local_10 = 0;
    *(undefined8 *)(pFVar9 + lVar13 + 0x20) = local_18;
    *(int *)(pFVar9 + lVar13 + 0x30) = iVar5;
    *(int *)(pFVar9 + lVar13 + 0x34) = iVar4;
    *(int *)(pFVar9 + lVar13 + 0x38) = iVar3;
    if ((*(longlong *)(pFVar9 + lVar13) == 0) && (lVar7 != 0)) {
      (**(code **)(lVar10 + 0x10))(&local_28);
    }
    if (*(longlong *)param_1 == 0) {
      return;
    }
    plVar12 = *(longlong **)&param_1->field_0x28;
  }
  plVar14 = (longlong *)&param_1->field_0x10;
  if (plVar12 != (longlong *)0x0) {
    plVar14 = plVar12;
  }
  (**(code **)(*plVar14 + 0x10))();
  return;
}

// AddRendererBinding @ 149477f00

int __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
          (FNiagaraStatelessEmitterDataBuildContext *this,FNiagaraParameterBinding *param_1)

{
  FNiagaraTypeDefinition *pFVar1;
  int local_res10 [6];
  FName local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  local_res10[0] = -1;
  if ((param_1->ResolvedParameter).Name == (FName)0x0) {
    return -1;
  }
  pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ResolvedParameter).TypeDefHandle);
  if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    local_20 = (param_1->ResolvedParameter).TypeDefHandle.RegisteredTypeIndex;
    local_28 = (param_1->ResolvedParameter).Name;
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->RendererBindings->_padding_ + 0x10))
              (this->RendererBindings,&local_28,0,0,local_res10);
    local_res10[0] = (int)((ulonglong)(longlong)local_res10[0] >> 2);
    if (local_18 == (void *)0x0) {
      return local_res10[0];
    }
    FMemory::Free(local_18);
  }
  return local_res10[0];
}

// AddRendererBinding @ 149477fb0

int __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
          (FNiagaraStatelessEmitterDataBuildContext *this,FNiagaraParameterBindingWithValue *param_1
          )

{
  FScriptContainerElement *_Src;
  FNiagaraParameterStore *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FScriptContainerElement *_Dst;
  longlong lVar7;
  int local_res10 [2];
  longlong local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res10[0] = -1;
  if (param_1->_padding_ == 0) {
    return -1;
  }
  pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    local_20[0].RegisteredTypeIndex = (int)param_1->_padding_;
    local_28 = param_1->_padding_;
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->RendererBindings->_padding_ + 0x10))
              (this->RendererBindings,&local_28,0,0,local_res10);
    iVar4 = (param_1->DefaultValue).ArrayNum;
    _Src = (param_1->DefaultValue).AllocatorInstance.Data;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    else if (0 < iVar4) {
      if ((local_res10[0] == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataOffset != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterDataBuildContext.cpp"
                             ,0x7a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if ((iVar4 != iVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultValue.Num() == Var.GetSizeInBytes()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterDataBuildContext.cpp"
                             ,0x7b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar5 = local_res10[0];
      pFVar1 = this->RendererBindings;
      lVar7 = (longlong)local_res10[0];
      if ((_Src == (FScriptContainerElement *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x255,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (((iVar5 < 0) || ((pFVar1->ParameterData).ArrayNum < iVar4 + iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x256,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      _Dst = (pFVar1->ParameterData).AllocatorInstance.Data + lVar7;
      if (_Dst != _Src) {
        memcpy(_Dst,_Src,(longlong)iVar4);
      }
      pFVar1->bParametersDirty = 1;
    }
    local_res10[0] = (int)((ulonglong)(longlong)local_res10[0] >> 2);
    if (local_18 == (void *)0x0) {
      return local_res10[0];
    }
    FMemory::Free(local_18);
  }
  return local_res10[0];
}

// AddRendererBinding @ 1494781b0

int __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
          (FNiagaraStatelessEmitterDataBuildContext *this,FNiagaraVariableBase *param_1)

{
  FNiagaraTypeDefinition *pFVar1;
  int local_res10 [6];
  FName local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  local_res10[0] = -1;
  if (param_1->Name == (FName)0x0) {
    return -1;
  }
  pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    local_20 = (param_1->TypeDefHandle).RegisteredTypeIndex;
    local_28 = param_1->Name;
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->RendererBindings->_padding_ + 0x10))
              (this->RendererBindings,&local_28,0,0,local_res10);
    local_res10[0] = (int)((ulonglong)(longlong)local_res10[0] >> 2);
    if (local_18 == (void *)0x0) {
      return local_res10[0];
    }
    FMemory::Free(local_18);
  }
  return local_res10[0];
}

// AddStaticData @ 149478260

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,TArrayView<int_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 2);
  return uVar1;
}

// AddStaticData @ 149478280

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TArrayView<unsigned_int_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 2);
  return uVar1;
}

// AddStaticData @ 1494782a0

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 2);
  return uVar1;
}

// AddStaticData @ 1494782c0

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 3);
  return uVar1;
}

// AddStaticData @ 1494782e0

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TArrayView<UE::Math::TVector4<float>_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 4);
  return uVar1;
}

// AddStaticData @ 149478300

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum * 0xc);
  return uVar1;
}

// AddStaticData @ 149478320

uint __thiscall
FNiagaraStatelessEmitterDataBuildContext::AddStaticData
          (FNiagaraStatelessEmitterDataBuildContext *this,
          TArrayView<FLinearColor_const_,int> *param_1)

{
  uint uVar1;
  
  uVar1 = NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
                    (this->StaticDataBuffer,param_1->DataPtr,param_1->ArrayNum << 4);
  return uVar1;
}

// FindParticleVariableIndex @ 149479e10

int __thiscall
FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
          (FNiagaraStatelessEmitterDataBuildContext *this,FNiagaraVariableBase *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  pFVar2 = (FName *)(this->ParticleDataSet->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(this->ParticleDataSet->Variables).ArrayNum * 0xc)
  ;
  if (pFVar2 != pFVar1) {
    pFVar3 = pFVar2;
    do {
      if ((*pFVar3 == param_1->Name) &&
         (pFVar3[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        return (int)(((longlong)pFVar3 - (longlong)pFVar2) / 0xc);
      }
      pFVar3 = (FName *)&pFVar3[1].Number;
    } while (pFVar3 != pFVar1);
  }
  return -1;
}

// PreModuleBuild @ 14947d940

void __thiscall
FNiagaraStatelessEmitterDataBuildContext::PreModuleBuild
          (FNiagaraStatelessEmitterDataBuildContext *this,int param_1)

{
  int iVar1;
  
  iVar1 = this->BuiltData->ArrayNum;
  this->RandomSeedOffest = this->RandomSeedOffest + 1;
  this->ModuleBuiltDataOffset = iVar1;
  this->ShaderParameterOffset = param_1;
  return;
}


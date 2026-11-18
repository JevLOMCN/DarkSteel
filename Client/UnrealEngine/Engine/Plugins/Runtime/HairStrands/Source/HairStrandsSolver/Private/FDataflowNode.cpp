// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 2

// GetValue<FDataflowBoolTypes> @ 14e250150

bool __thiscall
FDataflowNode::GetValue<FDataflowBoolTypes>
          (FDataflowNode *this,FContext *param_1,TConnectionReference<FDataflowBoolTypes> *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FDataflowInput *pFVar6;
  uchar *puVar7;
  ulong64 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool *pbVar11;
  bool local_res18 [16];
  
  pFVar6 = FindInput(this,(FConnectionReference *)param_2);
  puVar7 = *(uchar **)param_2;
  this_00 = pFVar6->Connection;
  local_res18[0] = (bool)*puVar7;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar4 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar4) {
      puVar7 = FDataflowOutput::GetFrozenPropertyValue(this_00,puVar7);
      local_res18[0] = (bool)*puVar7;
    }
    else {
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar4) {
        pcVar2 = *(code **)(param_1->_padding_ + 0x30);
        uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
        plVar9 = (longlong *)(*pcVar2)(param_1,uVar8);
        if (((plVar9 != (longlong *)0x0) && (lVar3 = *plVar9, lVar3 != 0)) &&
           ((FName)pFVar6->_padding_ == TDataflowSingleTypePolicy<bool>::TypeName)) {
          local_res18[0] = false;
          iVar1 = *(int *)(lVar3 + 8);
          if (iVar1 == 0) {
            local_res18[0] = *(bool *)(lVar3 + 0x38);
          }
          else if (iVar1 == 1) {
            puVar10 = (undefined8 *)
                      (**(code **)param_1->_padding_)(param_1,*(undefined4 *)(lVar3 + 0x38));
            if (puVar10 != (undefined8 *)0x0) {
              pbVar11 = UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
                                  ((FContextCacheElementBase *)*puVar10,
                                   (IContextCacheStore *)param_1,(FProperty *)0x0,local_res18);
              local_res18[0] = *pbVar11;
            }
          }
          else if (iVar1 == 2) {
            local_res18[0] = false;
          }
          else {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                               ,0x24a,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
        }
      }
    }
  }
  return local_res18[0];
}

// GetValue<FDataflowTransformTypes> @ 14e250290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FDataflowNode::GetValue<FDataflowTransformTypes>
          (FDataflowNode *this,TTransform<double> *__return_storage_ptr__,FContext *param_1,
          TConnectionReference<FDataflowTransformTypes> *param_2)

{
  uchar *puVar1;
  FDataflowOutput *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  double *pdVar6;
  ulong64 uVar7;
  undefined8 *puVar8;
  TTransform<double> *pTVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar5 = FindInput(this,(FConnectionReference *)param_2);
  puVar1 = *(uchar **)param_2;
  this_00 = pFVar5->Connection;
  local_108 = *(undefined4 *)puVar1;
  uStack_104 = *(undefined4 *)(puVar1 + 4);
  uStack_100 = *(undefined4 *)(puVar1 + 8);
  uStack_fc = *(undefined4 *)(puVar1 + 0xc);
  local_f8 = *(undefined4 *)(puVar1 + 0x10);
  uStack_f4 = *(undefined4 *)(puVar1 + 0x14);
  uStack_f0 = *(undefined4 *)(puVar1 + 0x18);
  uStack_ec = *(undefined4 *)(puVar1 + 0x1c);
  local_e8 = *(undefined4 *)(puVar1 + 0x20);
  uStack_e4 = *(undefined4 *)(puVar1 + 0x24);
  uStack_e0 = *(undefined4 *)(puVar1 + 0x28);
  uStack_dc = *(undefined4 *)(puVar1 + 0x2c);
  local_d8 = *(undefined4 *)(puVar1 + 0x30);
  uStack_d4 = *(undefined4 *)(puVar1 + 0x34);
  uStack_d0 = *(undefined4 *)(puVar1 + 0x38);
  uStack_cc = *(undefined4 *)(puVar1 + 0x3c);
  local_c8 = *(undefined4 *)(puVar1 + 0x40);
  uStack_c4 = *(undefined4 *)(puVar1 + 0x44);
  uStack_c0 = *(undefined4 *)(puVar1 + 0x48);
  uStack_bc = *(undefined4 *)(puVar1 + 0x4c);
  local_b8 = *(undefined4 *)(puVar1 + 0x50);
  uStack_b4 = *(undefined4 *)(puVar1 + 0x54);
  uStack_b0 = *(undefined4 *)(puVar1 + 0x58);
  uStack_ac = *(undefined4 *)(puVar1 + 0x5c);
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar4 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar4) {
      pdVar6 = (double *)FDataflowOutput::GetFrozenPropertyValue(this_00,puVar1);
      dVar3 = pdVar6[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar6;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
      dVar3 = pdVar6[3];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar6[2];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
      dVar3 = pdVar6[5];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar6[4];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar3;
      dVar3 = pdVar6[7];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar6[6];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
      dVar3 = pdVar6[9];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar6[8];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
      dVar3 = pdVar6[0xb];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar6[10];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
      return __return_storage_ptr__;
    }
    bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar4) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar8 = (undefined8 *)(*pcVar2)(param_1,uVar7);
      if (((puVar8 != (undefined8 *)0x0) &&
          ((FContextCacheElementBase *)*puVar8 != (FContextCacheElementBase *)0x0)) &&
         ((FName)pFVar5->_padding_ ==
          TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName)) {
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        pTVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TTransform<double>_>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)param_1,
                            (FProperty *)0x0,&local_a8);
        local_108 = *(undefined4 *)(pTVar9->Rotation).XY.m128d_f64;
        uStack_104 = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 4);
        uStack_100 = *(undefined4 *)((pTVar9->Rotation).XY.m128d_f64 + 1);
        uStack_fc = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 0xc);
        local_f8 = *(undefined4 *)(pTVar9->Rotation).ZW.m128d_f64;
        uStack_f4 = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 4);
        uStack_f0 = *(undefined4 *)((pTVar9->Rotation).ZW.m128d_f64 + 1);
        uStack_ec = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 0xc);
        local_e8 = *(undefined4 *)(pTVar9->Translation).XY.m128d_f64;
        uStack_e4 = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 4);
        uStack_e0 = *(undefined4 *)((pTVar9->Translation).XY.m128d_f64 + 1);
        uStack_dc = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 0xc);
        local_d8 = *(undefined4 *)(pTVar9->Translation).ZW.m128d_f64;
        uStack_d4 = *(undefined4 *)((longlong)(pTVar9->Translation).ZW.m128d_f64 + 4);
        uStack_d0 = *(undefined4 *)((pTVar9->Translation).ZW.m128d_f64 + 1);
        uStack_cc = *(undefined4 *)((longlong)(pTVar9->Translation).ZW.m128d_f64 + 0xc);
        local_c8 = *(undefined4 *)(pTVar9->Scale3D).XY.m128d_f64;
        uStack_c4 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 4);
        uStack_c0 = *(undefined4 *)((pTVar9->Scale3D).XY.m128d_f64 + 1);
        uStack_bc = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 0xc);
        local_b8 = *(undefined4 *)(pTVar9->Scale3D).ZW.m128d_f64;
        uStack_b4 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 4);
        uStack_b0 = *(undefined4 *)((pTVar9->Scale3D).ZW.m128d_f64 + 1);
        uStack_ac = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 0xc);
      }
    }
  }
  *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = local_108;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uStack_104;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uStack_100;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uStack_fc;
  *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 = local_f8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) = uStack_f4;
  *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = uStack_f0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) = uStack_ec;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = local_e8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uStack_e4;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uStack_e0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uStack_dc;
  *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 = local_d8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) = uStack_d4;
  *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) = uStack_d0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) = uStack_cc;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = local_c8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uStack_c4;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uStack_c0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uStack_bc;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_b8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uStack_b4;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uStack_b0;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uStack_ac;
  return __return_storage_ptr__;
}


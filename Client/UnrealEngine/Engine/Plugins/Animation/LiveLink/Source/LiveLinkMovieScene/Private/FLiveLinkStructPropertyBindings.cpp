// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 18

// GetCurrentValue<bool> @ 14d09a380

bool __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValue<bool>
          (FLiveLinkStructPropertyBindings *this,UScriptStruct *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetCurrentValueAt<bool>(this,0,param_1,param_2);
  return bVar1;
}

// GetCurrentValueAt<unsigned_char> @ 14d09a3a0

uchar __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<unsigned_char>
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FField *pFVar7;
  FScriptArrayHelper_u_8 FVar8;
  uchar *puVar9;
  FScriptArrayHelper local_58;
  undefined1 local_38 [8];
  FFieldPath local_30;
  
  FindOrAdd(this,(FPropertyWrapper *)local_38,param_2);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
  if (pUVar5 == (UObject *)0x0) {
    local_30.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar6 = FProperty::StaticClass();
    pFVar7 = FFieldPath::GetTyped(&local_30,pFVar6,(UStruct *)0x0);
    if ((pFVar7 != (FField *)0x0) &&
       ((pFVar7->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0x15 & 1) != 0) {
        FVar8.HeapArray =
             (FScriptArray *)
             FPropertyWrapper::GetPropertyAddress<unsigned_char>
                       ((FPropertyWrapper *)local_38,param_3,0);
        EVar1 = *(EArrayPropertyFlags *)&pFVar7[2].Owner.Container;
        local_58.ElementAlignment = (**(code **)((pFVar7[2].Next)->_padding_ + 0x168))();
        local_58.InnerProperty = (FProperty *)pFVar7[2].Next;
        local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
        local_58.field1_0x8.HeapArray = FVar8.HeapArray;
        local_58.ArrayFlags = EVar1;
        if ((local_58.ElementSize < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        if ((local_58.InnerProperty == (FProperty *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        if ((param_1 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x10be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        if ((local_58.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
          FScriptArrayHelper::AddValues
                    (&local_58,(param_1 - (local_58.field1_0x8.FreezableArray)->ArrayNum) + 1);
        }
        if ((local_58.field1_0x8.FreezableArray)->ArrayNum != 0) {
          puVar9 = (uchar *)(local_58.field1_0x8.FreezableArray)->_padding_;
          if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar9 & 1) != 0)) {
            puVar9 = &(local_58.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar9 >> 0x18);
          }
          if (puVar9 + (longlong)local_58.ElementSize * (longlong)param_1 != (uchar *)0x0) {
            uVar4 = puVar9[(longlong)local_58.ElementSize * (longlong)param_1];
            goto LAB_14d09a562;
          }
        }
        uVar4 = '\0';
        goto LAB_14d09a562;
      }
      puVar9 = FPropertyWrapper::GetPropertyAddress<unsigned_char>
                         ((FPropertyWrapper *)local_38,param_3,param_1);
      if (puVar9 != (uchar *)0x0) {
        uVar4 = *puVar9;
        goto LAB_14d09a562;
      }
    }
  }
  uVar4 = '\0';
LAB_14d09a562:
  if (local_30.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Path.AllocatorInstance.Data);
  }
  return uVar4;
}

// GetCurrentValueAt<float> @ 14d09a5a0

float __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<float>
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FScriptArrayHelper_u_8 FVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  FScriptArrayHelper local_68;
  undefined1 local_48 [8];
  FFieldPath local_40;
  
  FindOrAdd(this,(FPropertyWrapper *)local_48,param_2);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  if (pUVar4 == (UObject *)0x0) {
    local_40.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped(&local_40,pFVar5,(UStruct *)0x0);
    if ((pFVar6 != (FField *)0x0) &&
       ((pFVar6->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0x15 & 1) != 0) {
        FVar7.HeapArray =
             (FScriptArray *)
             FPropertyWrapper::GetPropertyAddress<float>((FPropertyWrapper *)local_48,param_3,0);
        EVar1 = *(EArrayPropertyFlags *)&pFVar6[2].Owner.Container;
        local_68.ElementAlignment = (**(code **)((pFVar6[2].Next)->_padding_ + 0x168))();
        local_68.InnerProperty = (FProperty *)pFVar6[2].Next;
        local_68.ElementSize = (local_68.InnerProperty)->ElementSize;
        local_68.field1_0x8.HeapArray = FVar7.HeapArray;
        local_68.ArrayFlags = EVar1;
        if ((local_68.ElementSize < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        if ((local_68.InnerProperty == (FProperty *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        if ((param_1 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x10be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        if ((local_68.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
          FScriptArrayHelper::AddValues
                    (&local_68,(param_1 - (local_68.field1_0x8.FreezableArray)->ArrayNum) + 1);
        }
        if ((local_68.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar9 = (local_68.field1_0x8.FreezableArray)->_padding_;
          if (((local_68.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
            uVar9 = (longlong)&(local_68.field1_0x8.HeapArray)->field_0x0 +
                    ((longlong)uVar9 >> 0x18);
          }
          pfVar8 = (float *)((longlong)param_1 * (longlong)local_68.ElementSize + uVar9);
          if (pfVar8 != (float *)0x0) {
            fVar10 = *pfVar8;
            goto LAB_14d09a770;
          }
        }
        fVar10 = 0.0;
        goto LAB_14d09a770;
      }
      pfVar8 = FPropertyWrapper::GetPropertyAddress<float>
                         ((FPropertyWrapper *)local_48,param_3,param_1);
      if (pfVar8 != (float *)0x0) {
        fVar10 = *pfVar8;
        goto LAB_14d09a770;
      }
    }
  }
  fVar10 = 0.0;
LAB_14d09a770:
  if (local_40.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Path.AllocatorInstance.Data);
  }
  return fVar10;
}

// GetCurrentValueAt<UE::Math::TTransform<double>_> @ 14d09a7b0

TTransform<double> * __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<UE::Math::TTransform<double>_>
          (FLiveLinkStructPropertyBindings *this,TTransform<double> *__return_storage_ptr__,
          int param_1,UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  UObject *pUVar15;
  FFieldClass *pFVar16;
  FField *pFVar17;
  FScriptArrayHelper_u_8 FVar18;
  TTransform<double> *pTVar19;
  double *pdVar20;
  double *pdVar21;
  double dVar22;
  FScriptArrayHelper local_208;
  undefined1 local_1e8 [8];
  FFieldPath local_1e0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  FindOrAdd(this,(FPropertyWrapper *)local_1e8,param_2);
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1e8);
  if (pUVar15 == (UObject *)0x0) {
    local_1e0.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar16 = FProperty::StaticClass();
    pFVar17 = FFieldPath::GetTyped(&local_1e0,pFVar16,(UStruct *)0x0);
    if ((pFVar17 != (FField *)0x0) &&
       ((pFVar17->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar17->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
        pTVar19 = FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
                            ((FPropertyWrapper *)local_1e8,param_3,param_1);
        if (pTVar19 == (TTransform<double> *)0x0) {
          pdVar20 = (double *)local_98;
          local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_98._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_88._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_78._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_68._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_58._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_48._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        }
        else {
          local_f8 = (pTVar19->Rotation).XY.m128d_f64[0];
          dStack_f0 = (pTVar19->Rotation).XY.m128d_f64[1];
          local_e8 = (pTVar19->Rotation).ZW.m128d_f64[0];
          dStack_e0 = (pTVar19->Rotation).ZW.m128d_f64[1];
          local_d8 = (pTVar19->Translation).XY.m128d_f64[0];
          dStack_d0 = (pTVar19->Translation).XY.m128d_f64[1];
          local_c8 = (pTVar19->Translation).ZW.m128d_f64[0];
          dStack_c0 = (pTVar19->Translation).ZW.m128d_f64[1];
          pdVar20 = &local_f8;
          local_b8 = (pTVar19->Scale3D).XY.m128d_f64[0];
          dStack_b0 = (pTVar19->Scale3D).XY.m128d_f64[1];
          local_a8 = (pTVar19->Scale3D).ZW.m128d_f64[0];
          dStack_a0 = (pTVar19->Scale3D).ZW.m128d_f64[1];
        }
        dVar22 = pdVar20[1];
        dVar11 = pdVar20[2];
        dVar12 = pdVar20[3];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar20;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar22;
        dVar22 = pdVar20[4];
        dVar13 = pdVar20[5];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar11;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
        dVar11 = pdVar20[6];
        dVar12 = pdVar20[7];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar22;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
        dVar22 = pdVar20[8];
        dVar13 = pdVar20[9];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar11;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
        dVar11 = pdVar20[10];
        dVar12 = pdVar20[0xb];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar22;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar11;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar12;
        goto LAB_14d09ab43;
      }
      FVar18.HeapArray =
           (FScriptArray *)
           FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
                     ((FPropertyWrapper *)local_1e8,param_3,0);
      EVar1 = *(EArrayPropertyFlags *)&pFVar17[2].Owner.Container;
      local_208.ElementAlignment = (**(code **)((pFVar17[2].Next)->_padding_ + 0x168))();
      local_208.InnerProperty = (FProperty *)pFVar17[2].Next;
      local_208.ElementSize = (local_208.InnerProperty)->ElementSize;
      local_208.field1_0x8.HeapArray = FVar18.HeapArray;
      local_208.ArrayFlags = EVar1;
      if ((local_208.ElementSize < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar14)) {
        pcVar2 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar2)();
        return pTVar19;
      }
      if ((local_208.InnerProperty == (FProperty *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar14)) {
        pcVar2 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar2)();
        return pTVar19;
      }
      if ((param_1 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x10be,L""), bVar14)) {
        pcVar2 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar2)();
        return pTVar19;
      }
      if ((local_208.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
        FScriptArrayHelper::AddValues
                  (&local_208,(param_1 - (local_208.field1_0x8.FreezableArray)->ArrayNum) + 1);
      }
      if ((local_208.field1_0x8.FreezableArray)->ArrayNum == 0) {
LAB_14d09a996:
        pdVar21 = (double *)local_158;
        local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_148._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_148._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_138._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_128._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      }
      else {
        dVar22 = (((VectorRegister4Double *)&(local_208.field1_0x8.FreezableArray)->_padding_)->XY).
                 m128d_f64[0];
        if (((local_208.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)dVar22 & 1) != 0)) {
          dVar22 = (double)((longlong)
                            (((VectorRegister4Double *)&(local_208.field1_0x8.HeapArray)->field_0x0)
                            ->XY).m128d_f64 + ((longlong)dVar22 >> 0x18));
        }
        pdVar20 = (double *)((longlong)param_1 * (longlong)local_208.ElementSize + (longlong)dVar22)
        ;
        if (pdVar20 == (double *)0x0) goto LAB_14d09a996;
        local_1b8 = *pdVar20;
        dStack_1b0 = pdVar20[1];
        local_1a8 = pdVar20[2];
        dStack_1a0 = pdVar20[3];
        local_198 = pdVar20[4];
        dStack_190 = pdVar20[5];
        local_188 = pdVar20[6];
        dStack_180 = pdVar20[7];
        pdVar21 = &local_1b8;
        local_178 = pdVar20[8];
        dStack_170 = pdVar20[9];
        local_168 = pdVar20[10];
        dStack_160 = pdVar20[0xb];
      }
      dVar22 = pdVar21[1];
      dVar11 = pdVar21[2];
      dVar12 = pdVar21[3];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar21;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar22;
      dVar22 = pdVar21[4];
      dVar13 = pdVar21[5];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar11;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
      dVar11 = pdVar21[6];
      dVar12 = pdVar21[7];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar22;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
      dVar22 = pdVar21[8];
      dVar13 = pdVar21[9];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar11;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
      dVar11 = pdVar21[10];
      dVar12 = pdVar21[0xb];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar22;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar11;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar12;
      goto LAB_14d09ab43;
    }
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
LAB_14d09ab43:
  if (local_1e0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Path.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentValueAt<UE::Math::TVector<double>_> @ 14d09ab70

TVector<double> * __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<UE::Math::TVector<double>_>
          (FLiveLinkStructPropertyBindings *this,TVector<double> *__return_storage_ptr__,int param_1
          ,UScriptStruct *param_2,void *param_3)

{
  double dVar1;
  EArrayPropertyFlags EVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  TVector<double> *pTVar10;
  double *pdVar11;
  double *pdVar12;
  ulonglong uVar13;
  FScriptArrayHelper local_c8;
  undefined1 local_a8 [8];
  FFieldPath local_a0;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60 [4];
  double dStack_40;
  double local_38;
  double local_30 [3];
  
  FindOrAdd(this,(FPropertyWrapper *)local_a8,param_2);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_a8);
  if (pUVar6 == (UObject *)0x0) {
    local_a0.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar7 = FProperty::StaticClass();
    pFVar8 = FFieldPath::GetTyped(&local_a0,pFVar7,(UStruct *)0x0);
    if ((pFVar8 != (FField *)0x0) &&
       ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
        pTVar10 = FPropertyWrapper::GetPropertyAddress<UE::Math::TVector<double>_>
                            ((FPropertyWrapper *)local_a8,param_3,param_1);
        if (pTVar10 == (TVector<double> *)0x0) {
          local_30[2] = 0.0;
          pdVar11 = local_30;
          local_30[0] = 0.0;
          local_30[1] = 0.0;
        }
        else {
          pdVar11 = local_60 + 3;
          local_60[3] = (pTVar10->field0_0x0)._s_0.X;
          dStack_40 = (pTVar10->field0_0x0)._s_0.Y;
          local_38 = (pTVar10->field0_0x0)._s_0.Z;
        }
        dVar4 = pdVar11[1];
        dVar1 = pdVar11[2];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar11;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        goto LAB_14d09adb3;
      }
      FVar9.HeapArray =
           (FScriptArray *)
           FPropertyWrapper::GetPropertyAddress<UE::Math::TVector<double>_>
                     ((FPropertyWrapper *)local_a8,param_3,0);
      EVar2 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
      local_c8.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
      local_c8.InnerProperty = (FProperty *)pFVar8[2].Next;
      local_c8.ElementSize = (local_c8.InnerProperty)->ElementSize;
      local_c8.field1_0x8.HeapArray = FVar9.HeapArray;
      local_c8.ArrayFlags = EVar2;
      if ((local_c8.ElementSize < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar3)();
        return pTVar10;
      }
      if ((local_c8.InnerProperty == (FProperty *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar3)();
        return pTVar10;
      }
      if ((param_1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x10be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar3)();
        return pTVar10;
      }
      if ((local_c8.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
        FScriptArrayHelper::AddValues
                  (&local_c8,(param_1 - (local_c8.field1_0x8.FreezableArray)->ArrayNum) + 1);
      }
      if ((local_c8.field1_0x8.FreezableArray)->ArrayNum == 0) {
LAB_14d09ad2d:
        local_60[2] = 0.0;
        pdVar12 = local_60;
        local_60[0] = 0.0;
        local_60[1] = 0.0;
      }
      else {
        uVar13 = *(ulonglong *)&(local_c8.field1_0x8.FreezableArray)->_padding_;
        if (((local_c8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar13 & 1) != 0)) {
          uVar13 = (longlong)&(local_c8.field1_0x8.HeapArray)->field_0x0 +
                   ((longlong)uVar13 >> 0x18);
        }
        pdVar11 = (double *)((longlong)param_1 * (longlong)local_c8.ElementSize + uVar13);
        if (pdVar11 == (double *)0x0) goto LAB_14d09ad2d;
        pdVar12 = &local_78;
        local_78 = *pdVar11;
        dStack_70 = pdVar11[1];
        local_68 = pdVar11[2];
      }
      dVar4 = pdVar12[1];
      dVar1 = pdVar12[2];
      (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      goto LAB_14d09adb3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
LAB_14d09adb3:
  if (local_a0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Path.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentValueAt<FString> @ 14d09ade0

FString * __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<FString>
          (FLiveLinkStructPropertyBindings *this,FString *__return_storage_ptr__,int param_1,
          UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FScriptArrayHelper_u_8 FVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptArrayHelper local_b8;
  FString local_98;
  FString local_88;
  undefined1 local_70 [8];
  FFieldPath local_68;
  FString local_40;
  FString local_30;
  
  FindOrAdd(this,(FPropertyWrapper *)local_70,param_2);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
  if (pUVar4 == (UObject *)0x0) {
    local_68.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped(&local_68,pFVar5,(UStruct *)0x0);
    if ((pFVar6 != (FField *)0x0) &&
       ((pFVar6->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
        pFVar8 = FPropertyWrapper::GetPropertyAddress<FString>
                           ((FPropertyWrapper *)local_70,param_3,param_1);
        if (pFVar8 == (FString *)0x0) {
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          ::FString::FString(__return_storage_ptr__,&local_88);
          local_30.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        }
        else {
          pFVar8 = ::FString::FString(&local_30,pFVar8);
          ::FString::FString(__return_storage_ptr__,pFVar8);
        }
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
        goto LAB_14d09b029;
      }
      FVar7.HeapArray =
           (FScriptArray *)
           FPropertyWrapper::GetPropertyAddress<FString>((FPropertyWrapper *)local_70,param_3,0);
      EVar1 = *(EArrayPropertyFlags *)&pFVar6[2].Owner.Container;
      local_b8.ElementAlignment = (**(code **)((pFVar6[2].Next)->_padding_ + 0x168))();
      local_b8.InnerProperty = (FProperty *)pFVar6[2].Next;
      local_b8.ElementSize = (local_b8.InnerProperty)->ElementSize;
      local_b8.field1_0x8.HeapArray = FVar7.HeapArray;
      local_b8.ArrayFlags = EVar1;
      if ((local_b8.ElementSize < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar2)();
        return pFVar8;
      }
      if ((local_b8.InnerProperty == (FProperty *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar2)();
        return pFVar8;
      }
      if ((param_1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x10be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar2)();
        return pFVar8;
      }
      if ((local_b8.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
        FScriptArrayHelper::AddValues
                  (&local_b8,(param_1 - (local_b8.field1_0x8.FreezableArray)->ArrayNum) + 1);
      }
      if ((local_b8.field1_0x8.FreezableArray)->ArrayNum == 0) {
LAB_14d09afa4:
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        ::FString::FString(__return_storage_ptr__,&local_98);
        local_40.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      }
      else {
        pFVar9 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                  &(local_b8.field1_0x8.FreezableArray)->_padding_)->AllocatorInstance).Data;
        if (((local_b8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)pFVar9 & 1) != 0)) {
          pFVar9 = (FScriptContainerElement *)
                   ((longlong)
                    &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                      &(local_b8.field1_0x8.HeapArray)->field_0x0)->AllocatorInstance).Data +
                   ((longlong)pFVar9 >> 0x18));
        }
        if (pFVar9 + (longlong)local_b8.ElementSize * (longlong)param_1 ==
            (FScriptContainerElement *)0x0) goto LAB_14d09afa4;
        pFVar8 = ::FString::FString(&local_40,
                                    (FString *)
                                    (pFVar9 + (longlong)local_b8.ElementSize * (longlong)param_1));
        ::FString::FString(__return_storage_ptr__,pFVar8);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      goto LAB_14d09b029;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14d09b029:
  if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Path.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentValueAt<bool> @ 14d09b060

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueAt<bool>
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  FBoolProperty *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FBoolProperty *this_01;
  FScriptArrayHelper_u_8 FVar7;
  uchar *puVar8;
  ulonglong uVar9;
  FScriptArrayHelper local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [8];
  FFieldPath local_40;
  
  FindOrAdd(this,(FPropertyWrapper *)local_48,param_2);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  if (pUVar5 == (UObject *)0x0) {
    local_40.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar6 = FProperty::StaticClass();
    this_01 = (FBoolProperty *)FFieldPath::GetTyped(&local_40,pFVar6,(UStruct *)0x0);
    if ((this_01 != (FBoolProperty *)0x0) && ((this_01->_padding_ & 0x18000) == 0)) {
      uVar9 = *(ulonglong *)(this_01->_padding_ + 0x18);
      if ((uVar9 >> 0x15 & 1) == 0) {
        if ((uVar9 >> 0x11 & 1) != 0) {
          puVar8 = FPropertyWrapper::GetPropertyAddress<unsigned_char>
                             ((FPropertyWrapper *)local_48,param_3,param_1);
          bVar3 = FBoolProperty::GetPropertyValue(this_01,puVar8);
          goto LAB_14d09b3a9;
        }
        if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
          pFVar6 = FBoolProperty::StaticClass();
          ::FName::ToString(&pFVar6->Name,&local_58);
          bVar3 = IsThisNotNull(this_01,"FField::GetName");
          if (bVar3) {
            ::FName::ToString((FName *)&this_01->_padding_,&local_78);
          }
          else {
            ::FString::FString(&local_78,L"None");
          }
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        this_00 = (FBoolProperty *)this_01[1]._padding_;
        if ((this_00 != (FBoolProperty *)0x0) &&
           ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
          FVar7.HeapArray =
               FPropertyWrapper::GetPropertyAddress<void>((FPropertyWrapper *)local_48,param_3,0);
          EVar1 = this_01->FieldSize;
          local_a8.ElementAlignment = (**(code **)(*(longlong *)this_01[1]._padding_ + 0x168))();
          local_a8.InnerProperty = (FProperty *)this_01[1]._padding_;
          local_a8.ElementSize = (local_a8.InnerProperty)->ElementSize;
          local_a8.field1_0x8.HeapArray = FVar7.HeapArray;
          local_a8.ArrayFlags = EVar1;
          if ((local_a8.ElementSize < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((local_a8.InnerProperty == (FProperty *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((param_1 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
            FScriptArrayHelper::AddValues
                      (&local_a8,(param_1 - (local_a8.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum == 0) {
            bVar3 = FBoolProperty::GetPropertyValue(this_00,(void *)0x0);
          }
          else {
            uVar9 = (local_a8.field1_0x8.FreezableArray)->_padding_;
            if (((local_a8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
              uVar9 = (longlong)&(local_a8.field1_0x8.HeapArray)->field_0x0 +
                      ((longlong)uVar9 >> 0x18);
            }
            bVar3 = FBoolProperty::GetPropertyValue
                              (this_00,(void *)((longlong)local_a8.ElementSize * (longlong)param_1 +
                                               uVar9));
          }
          goto LAB_14d09b3a9;
        }
        if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
          pFVar6 = FBoolProperty::StaticClass();
          ::FName::ToString(&pFVar6->Name,&local_68);
          bVar3 = IsThisNotNull(this_01,"FField::GetName");
          if (bVar3) {
            ::FName::ToString((FName *)&this_01->_padding_,&local_88);
          }
          else {
            ::FString::FString(&local_88,L"None");
          }
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_14d09b3a9:
  if (local_40.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Path.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCurrentValue<bool> @ 14d09daa0

void __thiscall
FLiveLinkStructPropertyBindings::SetCurrentValue<bool>
          (FLiveLinkStructPropertyBindings *this,UScriptStruct *param_1,void *param_2,bool param_3)

{
  SetCurrentValueAt<bool>(this,0,param_1,param_2,param_3);
  return;
}

// SetCurrentValueAt<UE::Math::TTransform<double>_> @ 14d09dad0

void __thiscall
FLiveLinkStructPropertyBindings::SetCurrentValueAt<UE::Math::TTransform<double>_>
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3,
          TTransform<double> *param_4)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FScriptArrayHelper_u_8 FVar7;
  TTransform<double> *pTVar8;
  double dVar9;
  double *pdVar10;
  FScriptArrayHelper local_58;
  undefined1 local_38 [8];
  FFieldPath local_30;
  
  FindOrAdd(this,(FPropertyWrapper *)local_38,param_2);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
  if (pUVar4 == (UObject *)0x0) {
    local_30.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped(&local_30,pFVar5,(UStruct *)0x0);
    if ((pFVar6 != (FField *)0x0) &&
       ((pFVar6->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
        pTVar8 = FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
                           ((FPropertyWrapper *)local_38,param_3,param_1);
        if (pTVar8 != (TTransform<double> *)0x0) {
          dVar9 = (param_4->Rotation).XY.m128d_f64[1];
          (pTVar8->Rotation).XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
          (pTVar8->Rotation).XY.m128d_f64[1] = dVar9;
          dVar9 = (param_4->Rotation).ZW.m128d_f64[1];
          (pTVar8->Rotation).ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
          (pTVar8->Rotation).ZW.m128d_f64[1] = dVar9;
          dVar9 = (param_4->Translation).XY.m128d_f64[1];
          (pTVar8->Translation).XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
          (pTVar8->Translation).XY.m128d_f64[1] = dVar9;
          dVar9 = (param_4->Translation).ZW.m128d_f64[1];
          (pTVar8->Translation).ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
          (pTVar8->Translation).ZW.m128d_f64[1] = dVar9;
          dVar9 = (param_4->Scale3D).XY.m128d_f64[1];
          (pTVar8->Scale3D).XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
          (pTVar8->Scale3D).XY.m128d_f64[1] = dVar9;
          dVar9 = (param_4->Scale3D).ZW.m128d_f64[1];
          (pTVar8->Scale3D).ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
          (pTVar8->Scale3D).ZW.m128d_f64[1] = dVar9;
        }
      }
      else {
        FVar7.HeapArray =
             (FScriptArray *)
             FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
                       ((FPropertyWrapper *)local_38,param_3,0);
        EVar1 = *(EArrayPropertyFlags *)&pFVar6[2].Owner.Container;
        local_58.ElementAlignment = (**(code **)((pFVar6[2].Next)->_padding_ + 0x168))();
        local_58.InnerProperty = (FProperty *)pFVar6[2].Next;
        local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
        local_58.field1_0x8.HeapArray = FVar7.HeapArray;
        local_58.ArrayFlags = EVar1;
        if ((local_58.ElementSize < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((local_58.InnerProperty == (FProperty *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((param_1 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x10be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((local_58.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
          FScriptArrayHelper::AddValues
                    (&local_58,(param_1 - (local_58.field1_0x8.FreezableArray)->ArrayNum) + 1);
        }
        if ((local_58.field1_0x8.FreezableArray)->ArrayNum != 0) {
          dVar9 = (((VectorRegister4Double *)&(local_58.field1_0x8.FreezableArray)->_padding_)->XY).
                  m128d_f64[0];
          if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)dVar9 & 1) != 0)) {
            dVar9 = (double)((longlong)
                             (((VectorRegister4Double *)&(local_58.field1_0x8.HeapArray)->field_0x0)
                             ->XY).m128d_f64 + ((longlong)dVar9 >> 0x18));
          }
          pdVar10 = (double *)((longlong)local_58.ElementSize * (longlong)param_1 + (longlong)dVar9)
          ;
          if (pdVar10 != (double *)0x0) {
            dVar9 = (param_4->Rotation).XY.m128d_f64[1];
            *pdVar10 = (param_4->Rotation).XY.m128d_f64[0];
            pdVar10[1] = dVar9;
            dVar9 = (param_4->Rotation).ZW.m128d_f64[1];
            pdVar10[2] = (param_4->Rotation).ZW.m128d_f64[0];
            pdVar10[3] = dVar9;
            dVar9 = (param_4->Translation).XY.m128d_f64[1];
            pdVar10[4] = (param_4->Translation).XY.m128d_f64[0];
            pdVar10[5] = dVar9;
            dVar9 = (param_4->Translation).ZW.m128d_f64[1];
            pdVar10[6] = (param_4->Translation).ZW.m128d_f64[0];
            pdVar10[7] = dVar9;
            dVar9 = (param_4->Scale3D).XY.m128d_f64[1];
            pdVar10[8] = (param_4->Scale3D).XY.m128d_f64[0];
            pdVar10[9] = dVar9;
            dVar9 = (param_4->Scale3D).ZW.m128d_f64[1];
            pdVar10[10] = (param_4->Scale3D).ZW.m128d_f64[0];
            pdVar10[0xb] = dVar9;
          }
        }
      }
    }
  }
  if (local_30.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Path.AllocatorInstance.Data);
  }
  return;
}

// SetCurrentValueAt<bool> @ 14d09dd20

void __thiscall
FLiveLinkStructPropertyBindings::SetCurrentValueAt<bool>
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3,
          bool param_4)

{
  EArrayPropertyFlags EVar1;
  FBoolProperty *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FBoolProperty *this_01;
  FScriptArrayHelper_u_8 FVar6;
  uchar *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  FScriptArrayHelper local_68;
  undefined1 local_48 [8];
  FFieldPath local_40;
  
  FindOrAdd(this,(FPropertyWrapper *)local_48,param_2);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  if (pUVar4 == (UObject *)0x0) {
    local_40.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar5 = FProperty::StaticClass();
    this_01 = (FBoolProperty *)FFieldPath::GetTyped(&local_40,pFVar5,(UStruct *)0x0);
    if ((this_01 != (FBoolProperty *)0x0) && ((this_01->_padding_ & 0x18000) == 0)) {
      uVar8 = *(ulonglong *)(this_01->_padding_ + 0x18);
      if ((uVar8 >> 0x15 & 1) == 0) {
        if ((uVar8 >> 0x11 & 1) != 0) {
          puVar7 = FPropertyWrapper::GetPropertyAddress<unsigned_char>
                             ((FPropertyWrapper *)local_48,param_3,param_1);
          FBoolProperty::SetPropertyValue(this_01,puVar7,param_4);
        }
      }
      else {
        this_00 = (FBoolProperty *)this_01[1]._padding_;
        if ((this_00 != (FBoolProperty *)0x0) &&
           ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
          FVar6.HeapArray =
               FPropertyWrapper::GetPropertyAddress<void>((FPropertyWrapper *)local_48,param_3,0);
          EVar1 = this_01->FieldSize;
          local_68.ElementAlignment = (**(code **)(*(longlong *)this_01[1]._padding_ + 0x168))();
          local_68.InnerProperty = (FProperty *)this_01[1]._padding_;
          local_68.ElementSize = (local_68.InnerProperty)->ElementSize;
          local_68.field1_0x8.HeapArray = FVar6.HeapArray;
          local_68.ArrayFlags = EVar1;
          if ((local_68.ElementSize < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_68.InnerProperty == (FProperty *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((param_1 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_68.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
            FScriptArrayHelper::AddValues
                      (&local_68,(param_1 - (local_68.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_68.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar8 = (local_68.field1_0x8.FreezableArray)->_padding_;
            if (((local_68.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
              uVar8 = (longlong)&(local_68.field1_0x8.HeapArray)->field_0x0 +
                      ((longlong)uVar8 >> 0x18);
            }
            pvVar9 = (void *)((longlong)local_68.ElementSize * (longlong)param_1 + uVar8);
            if (pvVar9 != (void *)0x0) {
              FBoolProperty::SetPropertyValue(this_00,pvVar9,param_4);
            }
          }
        }
      }
    }
  }
  if (local_40.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Path.AllocatorInstance.Data);
  }
  return;
}

// FLiveLinkStructPropertyBindings @ 14d09df90

FLiveLinkStructPropertyBindings * __thiscall
FLiveLinkStructPropertyBindings::FLiveLinkStructPropertyBindings
          (FLiveLinkStructPropertyBindings *this,FName param_1,FString *param_2)

{
  ::FString::FString(&this->PropertyPath,param_2);
  this->PropertyName = param_1;
  return this;
}

// CacheBinding @ 14d0a16c0

void __thiscall
FLiveLinkStructPropertyBindings::CacheBinding
          (FLiveLinkStructPropertyBindings *this,UScriptStruct *param_1)

{
  longlong local_58;
  FName local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38 [48];
  
  FindProperty((FPropertyWrapper *)local_38,param_1,&this->PropertyPath);
  local_58 = param_1->_padding_;
  local_50 = this->PropertyName;
  local_48 = &local_58;
  local_40 = local_38;
  TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>_>
            ((TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
              *)&PropertyCache,
             (TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>
              *)&stack0x00000008,(bool *)&local_48);
  if ((void *)local_38._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._24_8_);
  }
  return;
}

// FindOrAdd @ 14d0aebe0

FPropertyWrapper * __thiscall
FLiveLinkStructPropertyBindings::FindOrAdd
          (FLiveLinkStructPropertyBindings *this,FPropertyWrapper *__return_storage_ptr__,
          UScriptStruct *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  TWeakFieldPtr<FProperty> *pTVar5;
  TWeakFieldPtr<FProperty> *pTVar6;
  longlong lVar7;
  FPropertyNameKey *local_res8;
  FPropertyNameKey local_88;
  longlong local_78;
  FName local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  
  FVar2 = this->PropertyName;
  FVar3 = (FName)param_1->_padding_;
  local_88.StructName = FVar3;
  local_88.PropertyName = FVar2;
  uVar4 = ::GetTypeHash(&local_88);
  pTVar6 = (TWeakFieldPtr<FProperty> *)0x0;
  if (PropertyCache._8_4_ != PropertyCache._52_4_) {
    lVar7 = 0x154d7c428;
    if (PropertyCache._64_8_ != 0) {
      lVar7 = PropertyCache._64_8_;
    }
    iVar1 = *(int *)(lVar7 + (ulonglong)(PropertyCache._72_4_ - 1 & uVar4) * 4);
    while (iVar1 != -1) {
      lVar7 = PropertyCache._0_8_ + (longlong)iVar1 * 0x48;
      if ((*(FName *)(PropertyCache._0_8_ + (longlong)iVar1 * 0x48) == FVar3) &&
         (*(FName *)(lVar7 + 8) == FVar2)) {
        if (iVar1 != -1) {
          pTVar5 = (TWeakFieldPtr<FProperty> *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            pTVar5 = pTVar6;
          }
          if (pTVar5 != (TWeakFieldPtr<FProperty> *)0x0) {
            TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
                      (&__return_storage_ptr__->Property,pTVar5);
            __return_storage_ptr__->DeltaAddress = (long64)pTVar5[1].Owner.WeakPtr;
            return __return_storage_ptr__;
          }
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x40);
    }
  }
  FindProperty((FPropertyWrapper *)local_58,param_1,&this->PropertyPath);
  local_78 = param_1->_padding_;
  local_70 = this->PropertyName;
  local_68 = &local_78;
  local_60 = local_58;
  TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>_>
            ((TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
              *)&PropertyCache,
             (TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>
              *)&local_res8,(bool *)&local_68);
  if ((void *)local_58._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._24_8_);
  }
  uVar4 = ::GetTypeHash(&local_88);
  if (PropertyCache._8_4_ != PropertyCache._52_4_) {
    lVar7 = 0x154d7c428;
    if (PropertyCache._64_8_ != 0) {
      lVar7 = PropertyCache._64_8_;
    }
    iVar1 = *(int *)(lVar7 + (ulonglong)(PropertyCache._72_4_ - 1 & uVar4) * 4);
    while (iVar1 != -1) {
      lVar7 = PropertyCache._0_8_ + (longlong)iVar1 * 0x48;
      if ((*(FName *)(PropertyCache._0_8_ + (longlong)iVar1 * 0x48) == FVar3) &&
         (*(FName *)(lVar7 + 8) == FVar2)) {
        if ((iVar1 != -1) && (lVar7 != 0)) {
          TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
                    (&__return_storage_ptr__->Property,(TWeakFieldPtr<FProperty> *)(lVar7 + 0x10));
          pTVar6 = *(TWeakFieldPtr<FProperty> **)(lVar7 + 0x38);
          goto LAB_14d0aed90;
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x40);
    }
  }
  (__return_storage_ptr__->Property).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FPropertyNameKey *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  *(undefined8 *)&(__return_storage_ptr__->Property).Field = 0;
  *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x18 = 0;
LAB_14d0aed90:
  __return_storage_ptr__->DeltaAddress = (long64)pTVar6;
  return __return_storage_ptr__;
}

// FindProperty @ 14d0aee20

FPropertyWrapper * __cdecl
FLiveLinkStructPropertyBindings::FindProperty
          (FPropertyWrapper *__return_storage_ptr__,UScriptStruct *param_1,FString *param_2)

{
  undefined8 local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(param_2,&local_18,L".",true);
  if (local_18.ArrayNum < 1) {
    (__return_storage_ptr__->Property).Owner.WeakPtr = (FWeakObjectPtr)0x0;
    local_res20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res20);
    *(undefined8 *)&(__return_storage_ptr__->Property).Field = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x18 = 0;
    __return_storage_ptr__->DeltaAddress = 0;
  }
  else {
    FindPropertyRecursive(__return_storage_ptr__,param_1,&local_18,0,param_1,0);
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindPropertyRecursive @ 14d0aeee0

FPropertyWrapper * __cdecl
FLiveLinkStructPropertyBindings::FindPropertyRecursive
          (FPropertyWrapper *__return_storage_ptr__,UScriptStruct *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,uint param_3,void *param_4,
          int param_5)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  FField *pFVar3;
  bool bVar4;
  int iVar5;
  FPropertyWrapper *pFVar6;
  UObject *pUVar7;
  FFieldClass *pFVar8;
  FField *pFVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  FField *pFVar16;
  undefined1 local_a8 [8];
  FFieldPath local_a0;
  longlong local_80;
  FName local_78;
  TFieldIterator<FProperty> local_70;
  FString local_58;
  undefined8 local_48;
  FName local_40;
  FField *local_38 [2];
  
  lVar14 = (longlong)(int)param_3;
  pFVar9 = (FField *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_a8,(FObjectPtr)&local_48);
  local_a0.ResolvedField = (FField *)0x0;
  local_a0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_a0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_a0.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  if ((int)param_3 < param_2->ArrayNum) {
    uVar15 = ~param_3 >> 0x1f;
  }
  local_a0.Path.ArrayNum = 0;
  local_a0.Path.ArrayMax = 0;
  local_80 = 0;
  if ((uVar15 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPropertyWrapper *)(*pcVar2)();
    return pFVar6;
  }
  pFVar13 = (param_2->AllocatorInstance).Data;
  if (*(int *)(pFVar13 + lVar14 * 0x10 + 8) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)(pFVar13 + lVar14 * 0x10);
  }
  ::FName::FName(&local_40,pwVar11,FNAME_Find);
  local_38[0] = pFVar9;
  pFVar16 = pFVar9;
  if (local_40 != (FName)0x0) {
    if (param_1 == (UScriptStruct *)0x0) {
      local_70.Field = (FField *)0x0;
    }
    else {
      local_70.Field = (FField *)param_1->_padding_;
    }
    local_70.InterfaceIndex = -1;
    local_70.bIncludeSuper = true;
    local_70.bIncludeDeprecated = true;
    local_70.bIncludeInterface = false;
    local_70.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_70);
    pFVar3 = local_70.Field;
    while (local_70.Field = pFVar3, pFVar3 != (FField *)0x0) {
      bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar4) {
        local_78 = pFVar3->NamePrivate;
      }
      else {
        local_78.ComparisonIndex.Value = 0;
        local_78.Number = 0;
      }
      if (local_78 == local_40) {
        pFVar16 = pFVar3;
        if (pFVar3 != (FField *)0x0) {
          uVar12 = (pFVar3->Owner).Container.Unknown;
          if ((((uVar12 & 1) != 0) &&
              (pUVar7 = (UObject *)(uVar12 & 0xfffffffffffffffe), pUVar7 != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) goto LAB_14d0af164;
          if ((uVar12 & 1) == 0) goto LAB_14d0af140;
          goto LAB_14d0af169;
        }
        break;
      }
      local_70.Field = pFVar3->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_70);
      pFVar3 = local_70.Field;
    }
  }
  goto LAB_14d0af03e;
  while (uVar12 = *(ulonglong *)(uVar12 + 0x10), (uVar12 & 1) == 0) {
LAB_14d0af140:
    if ((uVar12 & 0xfffffffffffffffe) == 0) goto LAB_14d0af169;
  }
  pUVar7 = (UObject *)(uVar12 & 0xfffffffffffffffe);
  if ((pUVar7 != (UObject *)0x0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
LAB_14d0af164:
    UE::GC::MarkAsReachable(pUVar7);
  }
LAB_14d0af169:
  local_38[0] = (FField *)(uVar12 & 0xfffffffffffffffe);
  if ((uVar12 & 1) == 0) {
    local_38[0] = pFVar9;
  }
LAB_14d0af03e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (FField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_a8,(FObjectPtr)local_38);
  local_a0.ResolvedField = pFVar16;
  FFieldPath::Generate(&local_a0,pFVar16);
  local_80 = (longlong)param_5;
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_a8);
  if (pUVar7 == (UObject *)0x0) {
    local_a0.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar8 = FProperty::StaticClass();
    if (((local_a0.ResolvedField == (FField *)0x0) ||
        (bVar4 = FWeakObjectPtr::IsValid(&local_a0.ResolvedOwner.WeakPtr),
        pFVar9 = local_a0.ResolvedField, !bVar4)) &&
       (pFVar9 = local_a0.ResolvedField, local_a0.Path.ArrayNum != 0)) {
      pFVar9 = FFieldPath::TryToResolvePath(&local_a0,(UStruct *)0x0,UseStructIfOuterNotFound);
      if (pFVar9 != (FField *)0x0) {
        if ((pFVar8 == (FFieldClass *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FPropertyWrapper *)(*pcVar2)();
          return pFVar6;
        }
        pFVar1 = pFVar9->ClassPrivate;
        if (pFVar8->Id == CASTCLASS_None) {
          for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
            if (pFVar1 == pFVar8) {
              bVar4 = true;
              goto LAB_14d0af190;
            }
          }
          bVar4 = false;
        }
        else {
          bVar4 = (pFVar1->CastFlags & pFVar8->Id) != CASTCLASS_None;
        }
LAB_14d0af190:
        if (bVar4) goto LAB_14d0af1ac;
      }
      pFVar9 = local_a0.ResolvedField;
      if (local_a0.ResolvedField != (FField *)0x0) {
        local_a0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_a0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_a0.ResolvedField = (FField *)0x0;
        pFVar9 = local_a0.ResolvedField;
      }
    }
LAB_14d0af1ac:
    local_a0.ResolvedField = pFVar9;
    pFVar9 = local_a0.ResolvedField;
    if ((local_a0.ResolvedField != (FField *)0x0) &&
       (((uint)(int)(local_a0.ResolvedField)->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) {
      uVar15 = param_3 + 1;
      if ((-1 < (int)uVar15) && ((int)uVar15 < param_2->ArrayNum)) {
        if (((int)local_a0.ResolvedField[1]._padding_ < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FPropertyWrapper *)(*pcVar2)();
          return pFVar6;
        }
        if ((param_4 == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FPropertyWrapper *)(*pcVar2)();
          return pFVar6;
        }
        pvVar10 = (void *)((longlong)*(int *)((longlong)&pFVar9[1].Owner.Container + 4) +
                          (longlong)param_4);
        FindPropertyRecursive
                  (__return_storage_ptr__,(UScriptStruct *)pFVar9[2].Owner.Container.Field,param_2,
                   uVar15,pvVar10,((int)pvVar10 - (int)param_4) + param_5);
        goto LAB_14d0af381;
      }
      uVar15 = 0;
      if ((int)param_3 < param_2->ArrayNum) {
        uVar15 = ~param_3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPropertyWrapper *)(*pcVar2)();
        return pFVar6;
      }
      pFVar13 = (param_2->AllocatorInstance).Data + lVar14 * 0x10;
      bVar4 = IsThisNotNull(pFVar9,"FField::GetName");
      if (bVar4) {
        ::FName::ToString(&pFVar9->NamePrivate,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      iVar5 = *(int *)(pFVar13 + 8);
      if (local_58.Data.ArrayNum == iVar5) {
        if (local_58.Data.ArrayNum < 2) {
          bVar4 = false;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_58.Data.AllocatorInstance.Data,*(wchar_t **)pFVar13);
          bVar4 = iVar5 != 0;
        }
      }
      else {
        bVar4 = local_58.Data.ArrayNum + iVar5 != 1;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructProp->GetName() == InPropertyNames[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkStructPropertyBindings.cpp"
                             ,0xd5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPropertyWrapper *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
            (&__return_storage_ptr__->Property,(TWeakFieldPtr<FProperty> *)local_a8);
  __return_storage_ptr__->DeltaAddress = local_80;
LAB_14d0af381:
  if (local_a0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Path.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentValueForEnumAt @ 14d0b0ee0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FLiveLinkStructPropertyBindings::GetCurrentValueForEnumAt
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  EClassCastFlags EVar2;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  long64 lVar10;
  void *pvVar11;
  ulonglong uVar12;
  long64 lVar13;
  FScriptArrayHelper local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [8];
  FFieldPath local_40;
  
  FindOrAdd(this,(FPropertyWrapper *)local_48,param_2);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  lVar10 = 0;
  lVar13 = 0;
  if (pUVar6 == (UObject *)0x0) {
    local_40.ResolvedField = (FField *)0x0;
    lVar10 = lVar13;
  }
  else {
    pFVar7 = FProperty::StaticClass();
    pFVar8 = FFieldPath::GetTyped(&local_40,pFVar7,(UStruct *)0x0);
    if ((pFVar8 != (FField *)0x0) &&
       ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      EVar2 = pFVar8->ClassPrivate->CastFlags;
      if ((EVar2 >> 0x15 & 1) == 0) {
        if ((EVar2 >> 0x30 & 1) == 0) {
          lVar10 = lVar13;
          if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
            pFVar7 = FEnumProperty::StaticClass();
            ::FName::ToString(&pFVar7->Name,&local_58);
            bVar5 = IsThisNotNull(pFVar8,"FField::GetName");
            if (bVar5) {
              ::FName::ToString(&pFVar8->NamePrivate,&local_78);
            }
            else {
              ::FString::FString(&local_78,L"None");
            }
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pFVar8 = pFVar8[2].Owner.Container.Field;
          pvVar11 = FPropertyWrapper::GetPropertyAddress<void>
                              ((FPropertyWrapper *)local_48,param_3,param_1);
          lVar10 = (**(code **)(pFVar8->_padding_ + 0x210))(pFVar8,pvVar11);
        }
      }
      else {
        pFVar3 = pFVar8[2].Next;
        if ((pFVar3 == (FField *)0x0) ||
           ((pFVar3->ClassPrivate->CastFlags & CASTCLASS_FEnumProperty) == CASTCLASS_None)) {
          lVar10 = lVar13;
          if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
            pFVar7 = FEnumProperty::StaticClass();
            ::FName::ToString(&pFVar7->Name,&local_68);
            bVar5 = IsThisNotNull(pFVar8,"FField::GetName");
            if (bVar5) {
              ::FName::ToString(&pFVar8->NamePrivate,&local_88);
            }
            else {
              ::FString::FString(&local_88,L"None");
            }
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          FVar9.HeapArray =
               FPropertyWrapper::GetPropertyAddress<void>((FPropertyWrapper *)local_48,param_3,0);
          EVar1 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
          local_a8.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
          local_a8.InnerProperty = (FProperty *)pFVar8[2].Next;
          local_a8.ElementSize = (local_a8.InnerProperty)->ElementSize;
          local_a8.field1_0x8.HeapArray = FVar9.HeapArray;
          local_a8.ArrayFlags = EVar1;
          if ((local_a8.ElementSize < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            lVar10 = (*pcVar4)();
            return lVar10;
          }
          if ((local_a8.InnerProperty == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            lVar10 = (*pcVar4)();
            return lVar10;
          }
          if ((param_1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            lVar10 = (*pcVar4)();
            return lVar10;
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
            FScriptArrayHelper::AddValues
                      (&local_a8,(param_1 - (local_a8.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar12 = (local_a8.field1_0x8.FreezableArray)->_padding_;
            if (((local_a8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar12 & 1) != 0)) {
              uVar12 = (longlong)&(local_a8.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar12 >> 0x18);
            }
            lVar10 = (longlong)local_a8.ElementSize * (longlong)param_1 + uVar12;
          }
          pFVar8 = pFVar3[2].Owner.Container.Field;
          lVar10 = (**(code **)(pFVar8->_padding_ + 0x210))(pFVar8,lVar10);
        }
      }
    }
  }
  if (local_40.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Path.AllocatorInstance.Data);
  }
  return lVar10;
}

// GetProperty @ 14d0b2b00

FProperty * __thiscall
FLiveLinkStructPropertyBindings::GetProperty
          (FLiveLinkStructPropertyBindings *this,UScriptStruct *param_1)

{
  TFieldPath<FProperty> *this_00;
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
  *pTVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FProperty *pFVar7;
  FProperty *pFVar8;
  FPropertyWrapper *this_01;
  undefined8 local_res8;
  FPropertyNameKey local_88;
  undefined1 local_78 [8];
  FFieldPath local_70;
  undefined8 local_50;
  undefined1 local_48 [48];
  
  local_88.StructName = (FName)param_1->_padding_;
  local_88.PropertyName = this->PropertyName;
  pTVar4 = TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
                   *)&PropertyCache,&local_88);
  pFVar8 = (FProperty *)0x0;
  if (pTVar4 == (TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
                 *)0x0) {
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_78,(FObjectPtr)&local_res8);
    local_70.ResolvedField = (FField *)0x0;
    local_70.ResolvedOwner.WeakPtr.ObjectIndex = 0;
    local_70.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
    local_70.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Path.ArrayNum = 0;
    local_70.Path.ArrayMax = 0;
    local_50 = 0;
  }
  else {
    TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
              ((TWeakFieldPtr<FProperty> *)local_78,(TWeakFieldPtr<FProperty> *)&pTVar4->field_0x10)
    ;
    local_50 = *(undefined8 *)&pTVar4->field_0x38;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_78);
  if (pUVar5 == (UObject *)0x0) {
    local_70.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar6 = FProperty::StaticClass();
    if ((((FProperty *)local_70.ResolvedField == (FProperty *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid(&local_70.ResolvedOwner.WeakPtr),
        pFVar7 = (FProperty *)local_70.ResolvedField, !bVar3)) &&
       (pFVar7 = (FProperty *)local_70.ResolvedField, local_70.Path.ArrayNum != 0)) {
      pFVar7 = (FProperty *)
               FFieldPath::TryToResolvePath(&local_70,(UStruct *)0x0,UseStructIfOuterNotFound);
      if (pFVar7 != (FProperty *)0x0) {
        if ((pFVar6 == (FFieldClass *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FProperty *)(*pcVar2)();
          return pFVar8;
        }
        pFVar1 = (FFieldClass *)pFVar7->_padding_;
        if (pFVar6->Id == CASTCLASS_None) {
          for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
            if (pFVar1 == pFVar6) {
              bVar3 = true;
              goto LAB_14d0b2c41;
            }
          }
          bVar3 = false;
        }
        else {
          bVar3 = (pFVar1->CastFlags & pFVar6->Id) != CASTCLASS_None;
        }
LAB_14d0b2c41:
        if (bVar3) goto LAB_14d0b2c59;
      }
      pFVar7 = (FProperty *)local_70.ResolvedField;
      if ((FProperty *)local_70.ResolvedField != (FProperty *)0x0) {
        local_70.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_70.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        pFVar7 = pFVar8;
      }
    }
LAB_14d0b2c59:
    local_70.ResolvedField = (FField *)pFVar7;
    if (((FProperty *)local_70.ResolvedField != (FProperty *)0x0) &&
       (pFVar7 = (FProperty *)local_70.ResolvedField,
       ((local_70.ResolvedField)->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) ==
       RF_NoFlags)) goto LAB_14d0b2cd6;
  }
  this_01 = FindProperty((FPropertyWrapper *)local_48,param_1,&this->PropertyPath);
  this_00 = &(this_01->Property).Field;
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
  if (pUVar5 == (UObject *)0x0) {
    *(undefined8 *)&this_00->field_0x0 = 0;
  }
  else {
    pFVar6 = FProperty::StaticClass();
    pFVar7 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)this_00,pFVar6,(UStruct *)0x0);
    if ((pFVar7 != (FProperty *)0x0) &&
       ((*(EObjectFlags *)&pFVar7->_padding_ & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags
       )) {
      pFVar8 = pFVar7;
    }
  }
  pFVar7 = pFVar8;
  if ((void *)local_48._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._24_8_);
  }
LAB_14d0b2cd6:
  if (local_70.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Path.AllocatorInstance.Data);
  }
  return pFVar7;
}

// SetCurrentValueForEnumAt @ 14d0b6ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkStructPropertyBindings::SetCurrentValueForEnumAt
          (FLiveLinkStructPropertyBindings *this,int param_1,UScriptStruct *param_2,void *param_3,
          long64 param_4)

{
  EArrayPropertyFlags EVar1;
  EClassCastFlags EVar2;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  FScriptArrayHelper local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [8];
  FFieldPath local_40;
  
  FindOrAdd(this,(FPropertyWrapper *)local_48,param_2);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  if (pUVar6 == (UObject *)0x0) {
    local_40.ResolvedField = (FField *)0x0;
  }
  else {
    pFVar7 = FProperty::StaticClass();
    pFVar8 = FFieldPath::GetTyped(&local_40,pFVar7,(UStruct *)0x0);
    if ((pFVar8 != (FField *)0x0) &&
       ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      EVar2 = pFVar8->ClassPrivate->CastFlags;
      if ((EVar2 >> 0x15 & 1) == 0) {
        if ((EVar2 >> 0x30 & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
            pFVar7 = FEnumProperty::StaticClass();
            ::FName::ToString(&pFVar7->Name,&local_58);
            bVar5 = IsThisNotNull(pFVar8,"FField::GetName");
            if (bVar5) {
              ::FName::ToString(&pFVar8->NamePrivate,&local_78);
            }
            else {
              ::FString::FString(&local_78,L"None");
            }
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pFVar8 = pFVar8[2].Owner.Container.Field;
          pvVar10 = FPropertyWrapper::GetPropertyAddress<void>
                              ((FPropertyWrapper *)local_48,param_3,param_1);
          (**(code **)(pFVar8->_padding_ + 0x1e8))(pFVar8,pvVar10,param_4);
        }
      }
      else {
        pFVar3 = pFVar8[2].Next;
        if ((pFVar3 == (FField *)0x0) ||
           ((pFVar3->ClassPrivate->CastFlags & CASTCLASS_FEnumProperty) == CASTCLASS_None)) {
          if (1 < (byte)LogLiveLinkMovieScene._0_1_) {
            pFVar7 = FEnumProperty::StaticClass();
            ::FName::ToString(&pFVar7->Name,&local_68);
            bVar5 = IsThisNotNull(pFVar8,"FField::GetName");
            if (bVar5) {
              ::FName::ToString(&pFVar8->NamePrivate,&local_88);
            }
            else {
              ::FString::FString(&local_88,L"None");
            }
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          FVar9.HeapArray =
               FPropertyWrapper::GetPropertyAddress<void>((FPropertyWrapper *)local_48,param_3,0);
          EVar1 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
          local_a8.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
          local_a8.InnerProperty = (FProperty *)pFVar8[2].Next;
          local_a8.ElementSize = (local_a8.InnerProperty)->ElementSize;
          local_a8.field1_0x8.HeapArray = FVar9.HeapArray;
          local_a8.ArrayFlags = EVar1;
          if ((local_a8.ElementSize < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((local_a8.InnerProperty == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((param_1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum <= param_1) {
            FScriptArrayHelper::AddValues
                      (&local_a8,(param_1 - (local_a8.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_a8.field1_0x8.FreezableArray)->ArrayNum == 0) {
            lVar12 = 0;
          }
          else {
            uVar11 = (local_a8.field1_0x8.FreezableArray)->_padding_;
            if (((local_a8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar11 & 1) != 0)) {
              uVar11 = (longlong)&(local_a8.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar11 >> 0x18);
            }
            lVar12 = (longlong)local_a8.ElementSize * (longlong)param_1 + uVar11;
          }
          pFVar8 = pFVar3[2].Owner.Container.Field;
          (**(code **)(pFVar8->_padding_ + 0x1e8))(pFVar8,lVar12,param_4);
        }
      }
    }
  }
  if (local_40.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Path.AllocatorInstance.Data);
  }
  return;
}


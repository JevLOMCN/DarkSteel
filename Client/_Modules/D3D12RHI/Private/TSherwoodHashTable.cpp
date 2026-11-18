// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 15

// Add @ 1459fd350

FNoopStruct * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
::Add(TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
      *this,schar param_1,FData *param_2,uint param_3,FD3D12ResidencyHandle *param_4,uint param_5,
     FNoopStruct param_6)

{
  char cVar1;
  schar *psVar2;
  FD3D12ResidencyHandle *pFVar3;
  FNoopStruct *pFVar4;
  char cVar5;
  FD3D12ResidencyHandle *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar5 = param_2->Distances[param_3];
    if (cVar5 < '\0') {
      param_2->Keys[param_3] = param_4;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return (FNoopStruct *)0x0;
    }
    param_2->Distances[param_3] = param_1;
    cVar5 = cVar5 + '\x01';
    uVar8 = (ulonglong)(param_3 + 1);
    pFVar6 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    psVar2 = param_2->Distances;
    cVar1 = psVar2[uVar8];
    do {
      if (cVar1 < '\0') {
        param_2->Keys[uVar8] = pFVar6;
        param_2->Distances[uVar8] = cVar5;
        this->NumElements = this->NumElements + 1;
        return (FNoopStruct *)0x0;
      }
      cVar1 = psVar2[uVar8];
      if (cVar1 < cVar5) {
        psVar2[uVar8] = cVar5;
        cVar5 = cVar1 + '\x01';
        pFVar3 = param_2->Keys[uVar8];
        param_2->Keys[uVar8] = pFVar6;
        pFVar6 = pFVar3;
      }
      else {
        cVar5 = cVar5 + '\x01';
        if (cVar5 == this->MaxLookups) {
          param_4 = param_2->Keys[param_3];
          param_2->Keys[param_3] = pFVar6;
          uVar7 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar7 = 0;
          }
          if (uVar7 < 4) {
            uVar7 = 4;
          }
          Rehash(this,uVar7);
          param_5 = UE::Private::MurmurFinalize32((uint)((ulonglong)param_4 >> 4));
          cVar5 = '\0';
          psVar2 = (this->CurrentData).Distances;
          uVar7 = this->NumSlotsMinusOne & param_5;
          uVar8 = (ulonglong)uVar7;
          if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
            do {
              if (param_4 == (this->CurrentData).Keys[uVar8]) {
                return (FNoopStruct *)0x0;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= psVar2[uVar8]);
          }
          goto LAB_1459fd56a;
        }
      }
      psVar2 = param_2->Distances;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      cVar1 = psVar2[uVar8];
    } while( true );
  }
  uVar7 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar7 = 0;
  }
  if (uVar7 < 4) {
    uVar7 = 4;
  }
  Rehash(this,uVar7);
  cVar5 = '\0';
  uVar7 = this->NumSlotsMinusOne & param_5;
  uVar8 = (ulonglong)uVar7;
  psVar2 = (this->CurrentData).Distances;
  if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar8]) {
        return (FNoopStruct *)0x0;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= psVar2[uVar8]);
  }
LAB_1459fd56a:
  pFVar4 = Add(this,cVar5,&this->CurrentData,uVar7,param_4,param_5,param_6);
  return pFVar4;
}

// Add @ 1459fd5a0

FNoopStruct * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>::Add
          (TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>
           *this,schar param_1,FData *param_2,uint param_3,void *param_4,uint param_5,
          FNoopStruct param_6)

{
  char cVar1;
  schar *psVar2;
  void *pvVar3;
  FNoopStruct *pFVar4;
  char cVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar5 = param_2->Distances[param_3];
    if (cVar5 < '\0') {
      param_2->Keys[param_3] = param_4;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return (FNoopStruct *)0x0;
    }
    param_2->Distances[param_3] = param_1;
    cVar5 = cVar5 + '\x01';
    uVar8 = (ulonglong)(param_3 + 1);
    pvVar6 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    psVar2 = param_2->Distances;
    cVar1 = psVar2[uVar8];
    do {
      if (cVar1 < '\0') {
        param_2->Keys[uVar8] = pvVar6;
        param_2->Distances[uVar8] = cVar5;
        this->NumElements = this->NumElements + 1;
        return (FNoopStruct *)0x0;
      }
      cVar1 = psVar2[uVar8];
      if (cVar1 < cVar5) {
        psVar2[uVar8] = cVar5;
        cVar5 = cVar1 + '\x01';
        pvVar3 = param_2->Keys[uVar8];
        param_2->Keys[uVar8] = pvVar6;
        pvVar6 = pvVar3;
      }
      else {
        cVar5 = cVar5 + '\x01';
        if (cVar5 == this->MaxLookups) {
          param_4 = param_2->Keys[param_3];
          param_2->Keys[param_3] = pvVar6;
          uVar7 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar7 = 0;
          }
          if (uVar7 < 4) {
            uVar7 = 4;
          }
          Rehash(this,uVar7);
          param_5 = UE::Private::MurmurFinalize32((uint)((ulonglong)param_4 >> 4));
          cVar5 = '\0';
          psVar2 = (this->CurrentData).Distances;
          uVar7 = this->NumSlotsMinusOne & param_5;
          uVar8 = (ulonglong)uVar7;
          if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
            do {
              if (param_4 == (this->CurrentData).Keys[uVar8]) {
                return (FNoopStruct *)0x0;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= psVar2[uVar8]);
          }
          goto LAB_1459fd7ba;
        }
      }
      psVar2 = param_2->Distances;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      cVar1 = psVar2[uVar8];
    } while( true );
  }
  uVar7 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar7 = 0;
  }
  if (uVar7 < 4) {
    uVar7 = 4;
  }
  Rehash(this,uVar7);
  cVar5 = '\0';
  uVar7 = this->NumSlotsMinusOne & param_5;
  uVar8 = (ulonglong)uVar7;
  psVar2 = (this->CurrentData).Distances;
  if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar8]) {
        return (FNoopStruct *)0x0;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= psVar2[uVar8]);
  }
LAB_1459fd7ba:
  pFVar4 = Add(this,cVar5,&this->CurrentData,uVar7,param_4,param_5,param_6);
  return pFVar4;
}

// Add @ 1459fd7f0

uint * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
::Add(TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
      *this,schar param_1,FData *param_2,uint param_3,FShaderRecordCacheKey *param_4,uint param_5,
     uint param_6)

{
  char cVar1;
  uint uVar2;
  schar *psVar3;
  FRHIUniformBuffer **ppFVar4;
  FRHIUniformBuffer **ppFVar5;
  FRHIUniformBuffer **ppFVar6;
  FRHIUniformBuffer **ppFVar7;
  ulong64 uVar8;
  undefined8 uVar9;
  FRHIUniformBuffer **ppFVar10;
  FRHIUniformBuffer **ppFVar11;
  FRHIUniformBuffer **ppFVar12;
  FRHIUniformBuffer **ppFVar13;
  FRHIUniformBuffer **ppFVar14;
  FRHIUniformBuffer **ppFVar15;
  ulong64 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  FShaderRecordCacheKey *pFVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar25;
  char cVar26;
  FShaderRecordCacheKey local_98;
  FShaderRecordCacheKey local_58;
  ulonglong uVar24;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar26 = param_2->Distances[param_3];
    if (cVar26 < '\0') {
      pFVar21 = param_2->Keys;
      ppFVar4 = param_4->UniformBuffers[1];
      ppFVar5 = param_4->UniformBuffers[2];
      ppFVar6 = param_4->UniformBuffers[3];
      pFVar21[param_3].UniformBuffers[0] = param_4->UniformBuffers[0];
      pFVar21[param_3].UniformBuffers[1] = ppFVar4;
      ppFVar4 = param_4->UniformBuffers[4];
      ppFVar7 = param_4->UniformBuffers[5];
      pFVar21[param_3].UniformBuffers[2] = ppFVar5;
      (pFVar21[param_3].UniformBuffers + 2)[1] = ppFVar6;
      uVar8 = param_4->Hash;
      uVar9 = *(undefined8 *)&param_4->NumUniformBuffers;
      pFVar21[param_3].UniformBuffers[4] = ppFVar4;
      (pFVar21[param_3].UniformBuffers + 4)[1] = ppFVar7;
      pFVar21[param_3].Hash = uVar8;
      (&pFVar21[param_3].Hash)[1] = uVar9;
      param_2->Values[param_3] = param_6;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return param_2->Values + param_3;
    }
    cVar26 = cVar26 + '\x01';
    param_2->Distances[param_3] = param_1;
    pFVar21 = param_2->Keys;
    uVar24 = (ulonglong)(param_3 + 1);
    ppFVar4 = param_4->UniformBuffers[0];
    ppFVar5 = param_4->UniformBuffers[1];
    ppFVar6 = pFVar21[param_3].UniformBuffers[1];
    ppFVar7 = pFVar21[param_3].UniformBuffers[2];
    ppFVar10 = (pFVar21[param_3].UniformBuffers + 2)[1];
    ppFVar11 = param_4->UniformBuffers[2];
    ppFVar12 = param_4->UniformBuffers[3];
    ppFVar13 = param_4->UniformBuffers[4];
    ppFVar14 = param_4->UniformBuffers[5];
    uVar8 = param_4->Hash;
    uVar9 = *(undefined8 *)&param_4->NumUniformBuffers;
    param_4->UniformBuffers[0] = pFVar21[param_3].UniformBuffers[0];
    param_4->UniformBuffers[1] = ppFVar6;
    ppFVar6 = pFVar21[param_3].UniformBuffers[4];
    ppFVar15 = (pFVar21[param_3].UniformBuffers + 4)[1];
    param_4->UniformBuffers[2] = ppFVar7;
    param_4->UniformBuffers[3] = ppFVar10;
    uVar16 = pFVar21[param_3].Hash;
    uVar17 = (&pFVar21[param_3].Hash)[1];
    pFVar21[param_3].UniformBuffers[0] = ppFVar4;
    pFVar21[param_3].UniformBuffers[1] = ppFVar5;
    pFVar21[param_3].UniformBuffers[2] = ppFVar11;
    (pFVar21[param_3].UniformBuffers + 2)[1] = ppFVar12;
    pFVar21[param_3].UniformBuffers[4] = ppFVar13;
    (pFVar21[param_3].UniformBuffers + 4)[1] = ppFVar14;
    pFVar21[param_3].Hash = uVar8;
    (&pFVar21[param_3].Hash)[1] = uVar9;
    puVar22 = param_2->Values;
    param_4->UniformBuffers[4] = ppFVar6;
    param_4->UniformBuffers[5] = ppFVar15;
    uVar25 = puVar22[param_3];
    puVar22[param_3] = param_6;
    psVar3 = param_2->Distances;
    param_4->Hash = uVar16;
    *(undefined8 *)&param_4->NumUniformBuffers = uVar17;
    cVar1 = psVar3[uVar24];
    do {
      if (cVar1 < '\0') {
        pFVar21 = param_2->Keys;
        ppFVar4 = param_4->UniformBuffers[1];
        ppFVar5 = param_4->UniformBuffers[2];
        ppFVar6 = param_4->UniformBuffers[3];
        pFVar21[uVar24].UniformBuffers[0] = param_4->UniformBuffers[0];
        pFVar21[uVar24].UniformBuffers[1] = ppFVar4;
        ppFVar4 = param_4->UniformBuffers[4];
        ppFVar7 = param_4->UniformBuffers[5];
        pFVar21[uVar24].UniformBuffers[2] = ppFVar5;
        (pFVar21[uVar24].UniformBuffers + 2)[1] = ppFVar6;
        uVar8 = param_4->Hash;
        uVar9 = *(undefined8 *)&param_4->NumUniformBuffers;
        pFVar21[uVar24].UniformBuffers[4] = ppFVar4;
        (pFVar21[uVar24].UniformBuffers + 4)[1] = ppFVar7;
        pFVar21[uVar24].Hash = uVar8;
        (&pFVar21[uVar24].Hash)[1] = uVar9;
        param_2->Values[uVar24] = uVar25;
        param_2->Distances[uVar24] = cVar26;
        this->NumElements = this->NumElements + 1;
        return param_2->Values + param_3;
      }
      cVar1 = psVar3[uVar24];
      if (cVar1 < cVar26) {
        ppFVar4 = param_4->UniformBuffers[0];
        ppFVar5 = param_4->UniformBuffers[1];
        psVar3[uVar24] = cVar26;
        ppFVar6 = param_4->UniformBuffers[2];
        ppFVar7 = param_4->UniformBuffers[3];
        cVar26 = cVar1 + '\x01';
        pFVar21 = param_2->Keys + uVar24;
        ppFVar10 = param_4->UniformBuffers[4];
        ppFVar11 = param_4->UniformBuffers[5];
        uVar8 = param_4->Hash;
        uVar2 = param_4->NumUniformBuffers;
        uVar23 = param_4->ShaderIndex;
        ppFVar12 = pFVar21->UniformBuffers[1];
        ppFVar13 = pFVar21->UniformBuffers[2];
        ppFVar14 = pFVar21->UniformBuffers[3];
        param_4->UniformBuffers[0] = pFVar21->UniformBuffers[0];
        param_4->UniformBuffers[1] = ppFVar12;
        ppFVar12 = pFVar21->UniformBuffers[4];
        ppFVar15 = pFVar21->UniformBuffers[5];
        param_4->UniformBuffers[2] = ppFVar13;
        param_4->UniformBuffers[3] = ppFVar14;
        uVar16 = pFVar21->Hash;
        uVar18 = pFVar21->NumUniformBuffers;
        uVar19 = pFVar21->ShaderIndex;
        pFVar21->UniformBuffers[0] = ppFVar4;
        pFVar21->UniformBuffers[1] = ppFVar5;
        pFVar21->UniformBuffers[2] = ppFVar6;
        pFVar21->UniformBuffers[3] = ppFVar7;
        pFVar21->UniformBuffers[4] = ppFVar10;
        pFVar21->UniformBuffers[5] = ppFVar11;
        pFVar21->Hash = uVar8;
        pFVar21->NumUniformBuffers = uVar2;
        pFVar21->ShaderIndex = uVar23;
        puVar22 = param_2->Values;
        param_4->UniformBuffers[4] = ppFVar12;
        param_4->UniformBuffers[5] = ppFVar15;
        param_4->Hash = uVar16;
        param_4->NumUniformBuffers = uVar18;
        param_4->ShaderIndex = uVar19;
        uVar2 = puVar22[uVar24];
        puVar22[uVar24] = uVar25;
        uVar25 = uVar2;
      }
      else {
        cVar26 = cVar26 + '\x01';
        if (cVar26 == this->MaxLookups) {
          ppFVar4 = param_4->UniformBuffers[0];
          ppFVar5 = param_4->UniformBuffers[1];
          ppFVar6 = param_4->UniformBuffers[2];
          ppFVar7 = param_4->UniformBuffers[3];
          pFVar21 = param_2->Keys + param_3;
          ppFVar10 = param_4->UniformBuffers[4];
          ppFVar11 = param_4->UniformBuffers[5];
          uVar8 = param_4->Hash;
          uVar2 = param_4->NumUniformBuffers;
          uVar23 = param_4->ShaderIndex;
          ppFVar12 = pFVar21->UniformBuffers[1];
          ppFVar13 = pFVar21->UniformBuffers[2];
          ppFVar14 = pFVar21->UniformBuffers[3];
          param_4->UniformBuffers[0] = pFVar21->UniformBuffers[0];
          param_4->UniformBuffers[1] = ppFVar12;
          ppFVar12 = pFVar21->UniformBuffers[4];
          ppFVar15 = pFVar21->UniformBuffers[5];
          param_4->UniformBuffers[2] = ppFVar13;
          param_4->UniformBuffers[3] = ppFVar14;
          uVar16 = pFVar21->Hash;
          uVar18 = pFVar21->NumUniformBuffers;
          uVar19 = pFVar21->ShaderIndex;
          pFVar21->UniformBuffers[0] = ppFVar4;
          pFVar21->UniformBuffers[1] = ppFVar5;
          pFVar21->UniformBuffers[2] = ppFVar6;
          pFVar21->UniformBuffers[3] = ppFVar7;
          pFVar21->UniformBuffers[4] = ppFVar10;
          pFVar21->UniformBuffers[5] = ppFVar11;
          pFVar21->Hash = uVar8;
          pFVar21->NumUniformBuffers = uVar2;
          pFVar21->ShaderIndex = uVar23;
          puVar22 = param_2->Values;
          param_4->UniformBuffers[4] = ppFVar12;
          param_4->UniformBuffers[5] = ppFVar15;
          param_4->Hash = uVar16;
          param_4->NumUniformBuffers = uVar18;
          param_4->ShaderIndex = uVar19;
          uVar2 = puVar22[param_3];
          puVar22[param_3] = uVar25;
          uVar25 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar25 = 0;
          }
          if (uVar25 < 4) {
            uVar25 = 4;
          }
          Rehash(this,uVar25);
          local_98.UniformBuffers[2]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 2);
          local_98.UniformBuffers[2]._4_4_ =
               *(undefined4 *)((longlong)param_4->UniformBuffers + 0x14);
          local_98.UniformBuffers[3]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 3);
          local_98.UniformBuffers[3]._4_4_ =
               *(undefined4 *)((longlong)param_4->UniformBuffers + 0x1c);
          cVar26 = '\0';
          local_58.UniformBuffers[0] = param_4->UniformBuffers[0];
          local_58.UniformBuffers[1] = param_4->UniformBuffers[1];
          uVar25 = (uint)param_4->Hash;
          uVar23 = this->NumSlotsMinusOne & uVar25;
          uVar24 = (ulonglong)uVar23;
          local_98.UniformBuffers[4]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 4);
          local_98.UniformBuffers[4]._4_4_ =
               *(undefined4 *)((longlong)param_4->UniformBuffers + 0x24);
          local_98.UniformBuffers[5]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 5);
          local_98.UniformBuffers[5]._4_4_ =
               *(undefined4 *)((longlong)param_4->UniformBuffers + 0x2c);
          psVar3 = (this->CurrentData).Distances;
          local_58.UniformBuffers[4] = param_4->UniformBuffers[4];
          local_58.UniformBuffers[5] = param_4->UniformBuffers[5];
          local_98.Hash._0_4_ = (undefined4)param_4->Hash;
          local_98.Hash._4_4_ = *(undefined4 *)((longlong)&param_4->Hash + 4);
          local_98.NumUniformBuffers = param_4->NumUniformBuffers;
          local_98.ShaderIndex = param_4->ShaderIndex;
          local_98.UniformBuffers[0]._0_4_ = *(undefined4 *)param_4->UniformBuffers;
          local_98.UniformBuffers[0]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 4);
          local_98.UniformBuffers[1]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 1);
          local_98.UniformBuffers[1]._4_4_ =
               *(undefined4 *)((longlong)param_4->UniformBuffers + 0xc);
          if ((psVar3 != (schar *)0x0) &&
             (local_58.UniformBuffers[2]._0_4_ = local_98.UniformBuffers[2]._0_4_,
             local_58.UniformBuffers[2]._4_4_ = local_98.UniformBuffers[2]._4_4_,
             local_58.UniformBuffers[3]._0_4_ = local_98.UniformBuffers[3]._0_4_,
             local_58.UniformBuffers[3]._4_4_ = local_98.UniformBuffers[3]._4_4_,
             -1 < psVar3[uVar24])) {
            do {
              bVar20 = FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey::operator==
                                 (&local_98,(this->CurrentData).Keys + uVar23);
              if (bVar20) {
                return (this->CurrentData).Values + uVar23;
              }
              uVar23 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar23;
              cVar26 = cVar26 + '\x01';
            } while (cVar26 <= (this->CurrentData).Distances[uVar24]);
          }
          local_58.UniformBuffers[0] =
               (FRHIUniformBuffer **)
               CONCAT44(local_98.UniformBuffers[0]._4_4_,local_98.UniformBuffers[0]._0_4_);
          local_58.UniformBuffers[1] =
               (FRHIUniformBuffer **)
               CONCAT44(local_98.UniformBuffers[1]._4_4_,local_98.UniformBuffers[1]._0_4_);
          local_58.UniformBuffers[4] =
               (FRHIUniformBuffer **)
               CONCAT44(local_98.UniformBuffers[4]._4_4_,local_98.UniformBuffers[4]._0_4_);
          local_58.UniformBuffers[5] =
               (FRHIUniformBuffer **)
               CONCAT44(local_98.UniformBuffers[5]._4_4_,local_98.UniformBuffers[5]._0_4_);
          local_58.UniformBuffers[2]._0_4_ = local_98.UniformBuffers[2]._0_4_;
          local_58.UniformBuffers[2]._4_4_ = local_98.UniformBuffers[2]._4_4_;
          local_58.UniformBuffers[3]._0_4_ = local_98.UniformBuffers[3]._0_4_;
          local_58.UniformBuffers[3]._4_4_ = local_98.UniformBuffers[3]._4_4_;
          local_58.Hash._0_4_ = (undefined4)local_98.Hash;
          local_58.Hash._4_4_ = local_98.Hash._4_4_;
          local_58.NumUniformBuffers = local_98.NumUniformBuffers;
          local_58.ShaderIndex = local_98.ShaderIndex;
          puVar22 = Add(this,cVar26,&this->CurrentData,uVar23,&local_58,uVar25,uVar2);
          return puVar22;
        }
      }
      psVar3 = param_2->Distances;
      uVar24 = (ulonglong)((int)uVar24 + 1);
      cVar1 = psVar3[uVar24];
    } while( true );
  }
  uVar25 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar25 = 0;
  }
  if (uVar25 < 4) {
    uVar25 = 4;
  }
  Rehash(this,uVar25);
  cVar26 = '\0';
  uVar25 = this->NumSlotsMinusOne & param_5;
  uVar24 = (ulonglong)uVar25;
  local_98.UniformBuffers[0]._0_4_ = *(undefined4 *)param_4->UniformBuffers;
  local_98.UniformBuffers[0]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 4);
  local_98.UniformBuffers[1]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 1);
  local_98.UniformBuffers[1]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 0xc);
  local_98.UniformBuffers[2]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 2);
  local_98.UniformBuffers[2]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 0x14);
  local_98.UniformBuffers[3]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 3);
  local_98.UniformBuffers[3]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 0x1c);
  local_98.UniformBuffers[4]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 4);
  local_98.UniformBuffers[4]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 0x24);
  local_98.UniformBuffers[5]._0_4_ = *(undefined4 *)(param_4->UniformBuffers + 5);
  local_98.UniformBuffers[5]._4_4_ = *(undefined4 *)((longlong)param_4->UniformBuffers + 0x2c);
  local_98.Hash._0_4_ = (undefined4)param_4->Hash;
  local_98.Hash._4_4_ = *(undefined4 *)((longlong)&param_4->Hash + 4);
  local_98.NumUniformBuffers = param_4->NumUniformBuffers;
  local_98.ShaderIndex = param_4->ShaderIndex;
  psVar3 = (this->CurrentData).Distances;
  if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar24])) {
    do {
      bVar20 = FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey::operator==
                         (&local_98,(this->CurrentData).Keys + uVar24);
      if (bVar20) {
        return (this->CurrentData).Values + uVar24;
      }
      uVar25 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar25;
      cVar26 = cVar26 + '\x01';
    } while (cVar26 <= (this->CurrentData).Distances[uVar24]);
  }
  local_58.UniformBuffers[0] =
       (FRHIUniformBuffer **)
       CONCAT44(local_98.UniformBuffers[0]._4_4_,local_98.UniformBuffers[0]._0_4_);
  local_58.UniformBuffers[1] =
       (FRHIUniformBuffer **)
       CONCAT44(local_98.UniformBuffers[1]._4_4_,local_98.UniformBuffers[1]._0_4_);
  local_58.UniformBuffers[4] =
       (FRHIUniformBuffer **)
       CONCAT44(local_98.UniformBuffers[4]._4_4_,local_98.UniformBuffers[4]._0_4_);
  local_58.UniformBuffers[5] =
       (FRHIUniformBuffer **)
       CONCAT44(local_98.UniformBuffers[5]._4_4_,local_98.UniformBuffers[5]._0_4_);
  local_58.UniformBuffers[2]._0_4_ = local_98.UniformBuffers[2]._0_4_;
  local_58.UniformBuffers[2]._4_4_ = local_98.UniformBuffers[2]._4_4_;
  local_58.UniformBuffers[3]._0_4_ = local_98.UniformBuffers[3]._0_4_;
  local_58.UniformBuffers[3]._4_4_ = local_98.UniformBuffers[3]._4_4_;
  local_58.Hash._0_4_ = (undefined4)local_98.Hash;
  local_58.Hash._4_4_ = local_98.Hash._4_4_;
  local_58.NumUniformBuffers = local_98.NumUniformBuffers;
  local_58.ShaderIndex = local_98.ShaderIndex;
  puVar22 = Add(this,cVar26,&this->CurrentData,uVar25,&local_58,param_5,param_6);
  return puVar22;
}

// Add @ 1459fdc80

int * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
::Add(TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
      *this,schar param_1,FData *param_2,uint param_3,ulong64 param_4,uint param_5,int param_6)

{
  char cVar1;
  int iVar2;
  schar *psVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  ulong64 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = (ulonglong)param_3;
  while ((param_1 == this->MaxLookups ||
         ((int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666) < this->NumElements + 1))) {
    uVar10 = this->NumSlotsMinusOne * 2 + 2;
    if (this->NumSlotsMinusOne == 0) {
      uVar10 = 0;
    }
    if (uVar10 < 4) {
      uVar10 = 4;
    }
    Rehash(this,uVar10);
    param_1 = '\0';
    uVar11 = (ulonglong)(this->NumSlotsMinusOne & param_5);
    psVar3 = (this->CurrentData).Distances;
    param_2 = &this->CurrentData;
    if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
      do {
        if (param_4 == (this->CurrentData).Keys[uVar11]) {
          return (this->CurrentData).Values + uVar11;
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
        param_1 = param_1 + '\x01';
      } while (param_1 <= psVar3[uVar11]);
    }
  }
  psVar3 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
              *)param_2)->CurrentData).Distances;
  cVar7 = psVar3[uVar11];
  if (-1 < cVar7) {
    psVar3[uVar11] = param_1;
    cVar7 = cVar7 + '\x01';
    puVar4 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                *)param_2)->CurrentData).Keys;
    uVar9 = puVar4[uVar11];
    puVar4[uVar11] = param_4;
    piVar6 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                *)param_2)->CurrentData).Values;
    uVar12 = (ulonglong)((int)uVar11 + 1);
    iVar8 = piVar6[uVar11];
    piVar6[uVar11] = param_6;
    psVar3 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                *)param_2)->CurrentData).Distances;
    cVar1 = psVar3[uVar12];
    do {
      if (cVar1 < '\0') {
        (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
           *)param_2)->CurrentData).Keys[uVar12] = uVar9;
        (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
           *)param_2)->CurrentData).Values[uVar12] = iVar8;
        (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
           *)param_2)->CurrentData).Distances[uVar12] = cVar7;
        this->NumElements = this->NumElements + 1;
        return (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                  *)param_2)->CurrentData).Values + uVar11;
      }
      cVar1 = psVar3[uVar12];
      if (cVar1 < cVar7) {
        psVar3[uVar12] = cVar7;
        puVar4 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                    *)param_2)->CurrentData).Keys;
        cVar7 = cVar1 + '\x01';
        uVar5 = puVar4[uVar12];
        puVar4[uVar12] = uVar9;
        piVar6 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                    *)param_2)->CurrentData).Values;
        iVar2 = piVar6[uVar12];
        piVar6[uVar12] = iVar8;
        uVar9 = uVar5;
        iVar8 = iVar2;
      }
      else {
        cVar7 = cVar7 + '\x01';
        if (cVar7 == this->MaxLookups) {
          puVar4 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                      *)param_2)->CurrentData).Keys;
          uVar5 = puVar4[uVar11];
          puVar4[uVar11] = uVar9;
          piVar6 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                      *)param_2)->CurrentData).Values;
          iVar2 = piVar6[uVar11];
          piVar6[uVar11] = iVar8;
          uVar10 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar10 = 0;
          }
          if (uVar10 < 4) {
            uVar10 = 4;
          }
          Rehash(this,uVar10);
          cVar7 = '\0';
          psVar3 = (this->CurrentData).Distances;
          uVar10 = this->NumSlotsMinusOne & (uint)uVar5;
          uVar11 = (ulonglong)uVar10;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
            do {
              if (uVar5 == (this->CurrentData).Keys[uVar11]) {
                return (this->CurrentData).Values + uVar11;
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
              cVar7 = cVar7 + '\x01';
            } while (cVar7 <= psVar3[uVar11]);
          }
          piVar6 = Add(this,cVar7,&this->CurrentData,uVar10,uVar5,(uint)uVar5,iVar2);
          return piVar6;
        }
      }
      psVar3 = (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                  *)param_2)->CurrentData).Distances;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      cVar1 = psVar3[uVar12];
    } while( true );
  }
  (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
     *)param_2)->CurrentData).Keys[uVar11] = param_4;
  (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
     *)param_2)->CurrentData).Values[uVar11] = param_6;
  (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
     *)param_2)->CurrentData).Distances[uVar11] = param_1;
  this->NumElements = this->NumElements + 1;
  return (((TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
            *)param_2)->CurrentData).Values + uVar11;
}

// Empty @ 145a14230

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
::Empty(TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
        *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (FD3D12ResidencyHandle **)0x0;
  (this->CurrentData).Values = (FNoopStruct *)0x0;
  this->NumElements = 0;
  return;
}

// Empty @ 145a142a0

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>::
Empty(TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>
      *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (void **)0x0;
  (this->CurrentData).Values = (FNoopStruct *)0x0;
  this->NumElements = 0;
  return;
}

// Empty @ 145a14310

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
::Empty(TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
        *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (FShaderRecordCacheKey *)0x0;
  (this->CurrentData).Values = (uint *)0x0;
  this->NumElements = 0;
  return;
}

// Empty @ 145a14380

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
::Empty(TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
        *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (ulong64 *)0x0;
  (this->CurrentData).Values = (int *)0x0;
  this->NumElements = 0;
  return;
}

// Rehash @ 145a29bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
::Rehash(TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
         *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  FD3D12ResidencyHandle *pFVar3;
  longlong lVar4;
  schar *psVar5;
  FD3D12ResidencyHandle **ppFVar6;
  FNoopStruct *pFVar7;
  byte bVar8;
  uint uVar9;
  schar *psVar10;
  FD3D12ResidencyHandle **ppFVar11;
  schar sVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FNoopStruct local_res10;
  undefined4 uStack_64;
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar15 = 0;
  uVar13 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar14 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  if (uVar14 != uVar9) {
    uVar13 = (ulonglong)uVar14 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    psVar5 = (this->CurrentData).Distances;
    ppFVar6 = (this->CurrentData).Keys;
    pFVar7 = (this->CurrentData).Values;
    uVar9 = bVar8 + uVar14;
    psVar10 = FMemory::Malloc((ulonglong)uVar9,0);
    ppFVar11 = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    memset(psVar10,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar14 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar9);
    (this->CurrentData).Distances = psVar10;
    (this->CurrentData).Keys = ppFVar11;
    (this->CurrentData).Values = (FNoopStruct *)0x0;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar5[uVar15]) {
          pFVar3 = ppFVar6[uVar15];
          uVar9 = UE::Private::MurmurFinalize32((uint)((ulonglong)pFVar3 >> 4));
          psVar10 = (this->CurrentData).Distances;
          uVar14 = uVar9 & this->NumSlotsMinusOne;
          uVar13 = (ulonglong)uVar14;
          sVar12 = '\0';
          if ((psVar10 != (schar *)0x0) && (-1 < psVar10[uVar13])) {
            do {
              if (pFVar3 == (this->CurrentData).Keys[uVar13]) goto LAB_145a29d94;
              uVar14 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar14;
              sVar12 = sVar12 + '\x01';
            } while (sVar12 <= psVar10[uVar13]);
          }
          Add(this,sVar12,&this->CurrentData,uVar14,pFVar3,uVar9,local_res10);
        }
LAB_145a29d94:
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar9;
      } while (uVar9 != uVar2);
    }
    if (psVar5 != (schar *)0x0) {
      FMemory::Free(psVar5);
      FMemory::Free(ppFVar6);
      FMemory::Free(pFVar7);
    }
  }
  return;
}

// Rehash @ 145a29e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>::
Rehash(TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>
       *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  schar *psVar5;
  void **ppvVar6;
  FNoopStruct *pFVar7;
  byte bVar8;
  uint uVar9;
  schar *psVar10;
  void **ppvVar11;
  schar sVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FNoopStruct local_res10;
  undefined4 uStack_64;
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar15 = 0;
  uVar13 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar14 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  if (uVar14 != uVar9) {
    uVar13 = (ulonglong)uVar14 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    psVar5 = (this->CurrentData).Distances;
    ppvVar6 = (this->CurrentData).Keys;
    pFVar7 = (this->CurrentData).Values;
    uVar9 = bVar8 + uVar14;
    psVar10 = FMemory::Malloc((ulonglong)uVar9,0);
    ppvVar11 = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    memset(psVar10,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar14 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar9);
    (this->CurrentData).Distances = psVar10;
    (this->CurrentData).Keys = ppvVar11;
    (this->CurrentData).Values = (FNoopStruct *)0x0;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar5[uVar15]) {
          pvVar3 = ppvVar6[uVar15];
          uVar9 = UE::Private::MurmurFinalize32((uint)((ulonglong)pvVar3 >> 4));
          psVar10 = (this->CurrentData).Distances;
          uVar14 = uVar9 & this->NumSlotsMinusOne;
          uVar13 = (ulonglong)uVar14;
          sVar12 = '\0';
          if ((psVar10 != (schar *)0x0) && (-1 < psVar10[uVar13])) {
            do {
              if (pvVar3 == (this->CurrentData).Keys[uVar13]) goto LAB_145a29fe4;
              uVar14 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar14;
              sVar12 = sVar12 + '\x01';
            } while (sVar12 <= psVar10[uVar13]);
          }
          Add(this,sVar12,&this->CurrentData,uVar14,pvVar3,uVar9,local_res10);
        }
LAB_145a29fe4:
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar9;
      } while (uVar9 != uVar2);
    }
    if (psVar5 != (schar *)0x0) {
      FMemory::Free(psVar5);
      FMemory::Free(ppvVar6);
      FMemory::Free(pFVar7);
    }
  }
  return;
}

// Rehash @ 145a2a060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
::Rehash(TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
         *this,uint param_1)

{
  ulong64 *puVar1;
  char cVar2;
  uint uVar3;
  schar *psVar4;
  longlong lVar5;
  FShaderRecordCacheKey *pFVar6;
  uint *puVar7;
  schar *psVar8;
  FRHIUniformBuffer ***pppFVar9;
  FRHIUniformBuffer ***pppFVar10;
  byte bVar11;
  bool bVar12;
  uint uVar13;
  FRHIUniformBuffer **_Dst;
  uint uVar14;
  schar sVar16;
  uint uVar17;
  ulonglong uVar18;
  FShaderRecordCacheKey local_d8;
  FShaderRecordCacheKey local_98;
  ulonglong uVar15;
  
  uVar13 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar13 < param_1) {
    uVar13 = param_1;
  }
  if (uVar13 == 0) {
    Empty(this);
    return;
  }
  uVar3 = this->NumSlotsMinusOne;
  uVar18 = 0;
  uVar15 = (ulonglong)(uVar13 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar17 = 1 << ((byte)lVar5 & 0x1f);
  uVar13 = uVar3 + 1;
  if (uVar3 == 0) {
    uVar13 = 0;
  }
  if (uVar17 != uVar13) {
    uVar15 = (ulonglong)uVar17 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    cVar2 = this->MaxLookups;
    bVar11 = (byte)lVar5;
    if ((uint)lVar5 < 4) {
      bVar11 = 4;
    }
    pFVar6 = (this->CurrentData).Keys;
    puVar7 = (this->CurrentData).Values;
    psVar8 = (this->CurrentData).Distances;
    uVar13 = bVar11 + uVar17;
    local_d8.UniformBuffers[0] =
         (FRHIUniformBuffer **)CONCAT44(local_d8.UniformBuffers[0]._4_4_,uVar13);
    _Dst = FMemory::Malloc((ulonglong)uVar13,0);
    local_d8.UniformBuffers[1] = _Dst;
    local_d8.UniformBuffers[2] = FMemory::Malloc((ulonglong)uVar13 << 6,0);
    local_d8.UniformBuffers[3] = FMemory::Malloc((ulonglong)uVar13 * 4,0);
    memset(_Dst,0xff,(ulonglong)uVar13);
    this->MaxLookups = bVar11;
    this->NumSlotsMinusOne = uVar17 - 1;
    uVar3 = uVar3 + (int)cVar2;
    this->NumElements = 0;
    *(FRHIUniformBuffer ***)&this->CurrentData = local_d8.UniformBuffers[0];
    (this->CurrentData).Distances = (schar *)local_d8.UniformBuffers[1];
    (this->CurrentData).Keys = (FShaderRecordCacheKey *)local_d8.UniformBuffers[2];
    (this->CurrentData).Values = (uint *)local_d8.UniformBuffers[3];
    if (uVar3 != 0) {
      do {
        if (-1 < psVar8[uVar18]) {
          uVar13 = puVar7[uVar18];
          sVar16 = '\0';
          pppFVar9 = pFVar6[uVar18].UniformBuffers;
          pppFVar10 = pppFVar9 + 2;
          local_98.UniformBuffers[2]._0_4_ = *(undefined4 *)pppFVar10;
          local_98.UniformBuffers[2]._4_4_ = *(undefined4 *)((longlong)pppFVar9 + 0x14);
          local_d8.UniformBuffers[2] = *pppFVar10;
          local_98.UniformBuffers[3]._0_4_ = *(undefined4 *)(pppFVar10 + 1);
          local_98.UniformBuffers[3]._4_4_ = *(undefined4 *)((longlong)pppFVar9 + 0x1c);
          local_d8.UniformBuffers[3] = pppFVar10[1];
          uVar17 = (uint)pFVar6[uVar18].Hash;
          uVar14 = this->NumSlotsMinusOne & uVar17;
          uVar15 = (ulonglong)uVar14;
          local_98.UniformBuffers[0] = pFVar6[uVar18].UniformBuffers[0];
          local_98.UniformBuffers[1] = pFVar6[uVar18].UniformBuffers[1];
          pppFVar10 = pFVar6[uVar18].UniformBuffers;
          local_d8.UniformBuffers[4]._0_4_ = *(undefined4 *)(pppFVar10 + 4);
          local_d8.UniformBuffers[4]._4_4_ = *(undefined4 *)((longlong)pppFVar10 + 0x24);
          local_d8.UniformBuffers[5]._0_4_ = *(undefined4 *)(pppFVar10 + 5);
          local_d8.UniformBuffers[5]._4_4_ = *(undefined4 *)((longlong)pppFVar10 + 0x2c);
          puVar1 = &pFVar6[uVar18].Hash;
          local_d8.Hash._0_4_ = (undefined4)*puVar1;
          local_d8.Hash._4_4_ = *(undefined4 *)((longlong)puVar1 + 4);
          local_d8.NumUniformBuffers = *(uint *)(puVar1 + 1);
          local_d8.ShaderIndex = *(uint *)((longlong)puVar1 + 0xc);
          local_98.UniformBuffers[4] = pFVar6[uVar18].UniformBuffers[4];
          local_98.UniformBuffers[5] = (pFVar6[uVar18].UniformBuffers + 4)[1];
          local_d8.UniformBuffers[0] = pFVar6[uVar18].UniformBuffers[0];
          local_d8.UniformBuffers[1] = pFVar6[uVar18].UniformBuffers[1];
          psVar4 = (this->CurrentData).Distances;
          if ((psVar4 != (schar *)0x0) && (-1 < psVar4[uVar15])) {
            do {
              bVar12 = FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey::operator==
                                 (&local_d8,(this->CurrentData).Keys + uVar15);
              if (bVar12) goto LAB_145a2a336;
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
              sVar16 = sVar16 + '\x01';
            } while (sVar16 <= (this->CurrentData).Distances[uVar15]);
            local_98.UniformBuffers[2]._0_4_ = local_d8.UniformBuffers[2]._0_4_;
            local_98.UniformBuffers[2]._4_4_ = local_d8.UniformBuffers[2]._4_4_;
            local_98.UniformBuffers[3]._0_4_ = local_d8.UniformBuffers[3]._0_4_;
            local_98.UniformBuffers[3]._4_4_ = local_d8.UniformBuffers[3]._4_4_;
          }
          local_98.UniformBuffers[4] =
               (FRHIUniformBuffer **)
               CONCAT44(local_d8.UniformBuffers[4]._4_4_,local_d8.UniformBuffers[4]._0_4_);
          local_98.UniformBuffers[5] =
               (FRHIUniformBuffer **)
               CONCAT44(local_d8.UniformBuffers[5]._4_4_,local_d8.UniformBuffers[5]._0_4_);
          local_98.UniformBuffers[0] = local_d8.UniformBuffers[0];
          local_98.UniformBuffers[1] = local_d8.UniformBuffers[1];
          local_98.Hash._0_4_ = (undefined4)local_d8.Hash;
          local_98.Hash._4_4_ = local_d8.Hash._4_4_;
          local_98.NumUniformBuffers = local_d8.NumUniformBuffers;
          local_98.ShaderIndex = local_d8.ShaderIndex;
          Add(this,sVar16,&this->CurrentData,uVar14,&local_98,uVar17,uVar13);
        }
LAB_145a2a336:
        uVar13 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar13;
      } while (uVar13 != uVar3);
    }
    if (psVar8 != (schar *)0x0) {
      FMemory::Free(psVar8);
      FMemory::Free(pFVar6);
      FMemory::Free(puVar7);
    }
  }
  return;
}

// Rehash @ 145a2a3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
::Rehash(TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
         *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  ulong64 uVar3;
  longlong lVar4;
  ulong64 *puVar5;
  int *piVar6;
  schar *psVar7;
  byte bVar8;
  uint uVar9;
  schar *psVar10;
  ulong64 *puVar11;
  int *piVar12;
  schar sVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 uStack_64;
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar16 = 0;
  uVar14 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar15 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  if (uVar15 != uVar9) {
    uVar14 = (ulonglong)uVar15 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    puVar5 = (this->CurrentData).Keys;
    piVar6 = (this->CurrentData).Values;
    psVar7 = (this->CurrentData).Distances;
    uVar9 = bVar8 + uVar15;
    psVar10 = FMemory::Malloc((ulonglong)uVar9,0);
    puVar11 = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    piVar12 = FMemory::Malloc((ulonglong)uVar9 * 4,0);
    memset(psVar10,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar15 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar9);
    (this->CurrentData).Distances = psVar10;
    (this->CurrentData).Keys = puVar11;
    (this->CurrentData).Values = piVar12;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar7[uVar16]) {
          uVar3 = puVar5[uVar16];
          sVar13 = '\0';
          psVar10 = (this->CurrentData).Distances;
          uVar9 = (uint)uVar3 & this->NumSlotsMinusOne;
          uVar14 = (ulonglong)uVar9;
          if ((psVar10 != (schar *)0x0) && (-1 < psVar10[uVar14])) {
            do {
              if (uVar3 == (this->CurrentData).Keys[uVar14]) goto LAB_145a2a593;
              uVar9 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar9;
              sVar13 = sVar13 + '\x01';
            } while (sVar13 <= psVar10[uVar14]);
          }
          Add(this,sVar13,&this->CurrentData,uVar9,uVar3,(uint)uVar3,piVar6[uVar16]);
        }
LAB_145a2a593:
        uVar9 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar9;
      } while (uVar9 != uVar2);
    }
    if (psVar7 != (schar *)0x0) {
      FMemory::Free(psVar7);
      FMemory::Free(puVar5);
      FMemory::Free(piVar6);
    }
  }
  return;
}

// Add @ 145a9b6f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FNoopStruct * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
::Add(TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
      *this,schar param_1,FData *param_2,uint param_3,FD3D12View *param_4,uint param_5,
     FNoopStruct param_6)

{
  char cVar1;
  schar *psVar2;
  FD3D12View *pFVar3;
  FNoopStruct *pFVar4;
  char cVar5;
  FD3D12View *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar5 = param_2->Distances[param_3];
    if (cVar5 < '\0') {
      param_2->Keys[param_3] = param_4;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return (FNoopStruct *)0x0;
    }
    param_2->Distances[param_3] = param_1;
    cVar5 = cVar5 + '\x01';
    uVar8 = (ulonglong)(param_3 + 1);
    pFVar6 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    psVar2 = param_2->Distances;
    cVar1 = psVar2[uVar8];
    do {
      if (cVar1 < '\0') {
        param_2->Keys[uVar8] = pFVar6;
        param_2->Distances[uVar8] = cVar5;
        this->NumElements = this->NumElements + 1;
        return (FNoopStruct *)0x0;
      }
      cVar1 = psVar2[uVar8];
      if (cVar1 < cVar5) {
        psVar2[uVar8] = cVar5;
        cVar5 = cVar1 + '\x01';
        pFVar3 = param_2->Keys[uVar8];
        param_2->Keys[uVar8] = pFVar6;
        pFVar6 = pFVar3;
      }
      else {
        cVar5 = cVar5 + '\x01';
        if (cVar5 == this->MaxLookups) {
          param_4 = param_2->Keys[param_3];
          param_2->Keys[param_3] = pFVar6;
          uVar7 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar7 = 0;
          }
          if (uVar7 < 4) {
            uVar7 = 4;
          }
          Rehash(this,uVar7);
          param_5 = UE::Private::MurmurFinalize32((uint)((ulonglong)param_4 >> 4));
          cVar5 = '\0';
          psVar2 = (this->CurrentData).Distances;
          uVar7 = this->NumSlotsMinusOne & param_5;
          uVar8 = (ulonglong)uVar7;
          if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
            do {
              if (param_4 == (this->CurrentData).Keys[uVar8]) {
                return (FNoopStruct *)0x0;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= psVar2[uVar8]);
          }
          goto LAB_145a9b90a;
        }
      }
      psVar2 = param_2->Distances;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      cVar1 = psVar2[uVar8];
    } while( true );
  }
  uVar7 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar7 = 0;
  }
  if (uVar7 < 4) {
    uVar7 = 4;
  }
  Rehash(this,uVar7);
  cVar5 = '\0';
  uVar7 = this->NumSlotsMinusOne & param_5;
  uVar8 = (ulonglong)uVar7;
  psVar2 = (this->CurrentData).Distances;
  if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar8])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar8]) {
        return (FNoopStruct *)0x0;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= psVar2[uVar8]);
  }
LAB_145a9b90a:
  pFVar4 = Add(this,cVar5,&this->CurrentData,uVar7,param_4,param_5,param_6);
  return pFVar4;
}

// Empty @ 145aa6540

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
::Empty(TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
        *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (FD3D12View **)0x0;
  (this->CurrentData).Values = (FNoopStruct *)0x0;
  this->NumElements = 0;
  return;
}

// Rehash @ 145ab5ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
::Rehash(TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
         *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  FD3D12View *pFVar3;
  longlong lVar4;
  schar *psVar5;
  FD3D12View **ppFVar6;
  FNoopStruct *pFVar7;
  byte bVar8;
  uint uVar9;
  schar *psVar10;
  FD3D12View **ppFVar11;
  schar sVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FNoopStruct local_res10;
  undefined4 uStack_64;
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar15 = 0;
  uVar13 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar14 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  if (uVar14 != uVar9) {
    uVar13 = (ulonglong)uVar14 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    psVar5 = (this->CurrentData).Distances;
    ppFVar6 = (this->CurrentData).Keys;
    pFVar7 = (this->CurrentData).Values;
    uVar9 = bVar8 + uVar14;
    psVar10 = FMemory::Malloc((ulonglong)uVar9,0);
    ppFVar11 = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    memset(psVar10,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar14 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar9);
    (this->CurrentData).Distances = psVar10;
    (this->CurrentData).Keys = ppFVar11;
    (this->CurrentData).Values = (FNoopStruct *)0x0;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar5[uVar15]) {
          pFVar3 = ppFVar6[uVar15];
          uVar9 = UE::Private::MurmurFinalize32((uint)((ulonglong)pFVar3 >> 4));
          psVar10 = (this->CurrentData).Distances;
          uVar14 = uVar9 & this->NumSlotsMinusOne;
          uVar13 = (ulonglong)uVar14;
          sVar12 = '\0';
          if ((psVar10 != (schar *)0x0) && (-1 < psVar10[uVar13])) {
            do {
              if (pFVar3 == (this->CurrentData).Keys[uVar13]) goto LAB_145ab6094;
              uVar14 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar14;
              sVar12 = sVar12 + '\x01';
            } while (sVar12 <= psVar10[uVar13]);
          }
          Add(this,sVar12,&this->CurrentData,uVar14,pFVar3,uVar9,local_res10);
        }
LAB_145ab6094:
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar9;
      } while (uVar9 != uVar2);
    }
    if (psVar5 != (schar *)0x0) {
      FMemory::Free(psVar5);
      FMemory::Free(ppFVar6);
      FMemory::Free(pFVar7);
    }
  }
  return;
}


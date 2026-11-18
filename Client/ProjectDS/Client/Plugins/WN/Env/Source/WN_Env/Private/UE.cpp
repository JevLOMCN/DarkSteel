// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 54

// Construct<FWN_NiagaraContext> @ 14a043f70

void __cdecl UE::CoreUObject::Private::Construct<FWN_NiagaraContext>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8;
  
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x20);
  local_res8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FWN_NiagaraContext> @ 14a043fd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_NiagaraContext>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x20);
  local_res8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FWN_NiagaraContext> @ 14a044020

void __cdecl UE::CoreUObject::Private::Destruct<FWN_NiagaraContext>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FWN_NiagaraContext> @ 14a044060

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_NiagaraContext>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *pvVar3;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar5 = param_1;
    do {
      *puVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      ::FString::operator=((FString *)(puVar5 + 1),(FString *)((longlong)pvVar3 + 8));
      pFVar4 = (ForAnyElementType *)(puVar5 + 5);
      puVar5[3] = *(undefined8 *)((longlong)pvVar3 + 0x18);
      puVar5[4] = *(undefined8 *)((longlong)pvVar3 + 0x20);
      if (pFVar4 != (ForAnyElementType *)((longlong)pvVar3 + 0x28)) {
        iVar2 = *(int *)((longlong)pvVar3 + 0x30);
        piVar1 = (int *)((longlong)puVar5 + 0x34);
        _Src = ((ForAnyElementType *)((longlong)pvVar3 + 0x28))->Data;
        *(int *)(puVar5 + 6) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 7);
          }
        }
      }
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x38);
      puVar5 = puVar5 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_NiagaraUserParamEntry> @ 14a044330

void __cdecl UE::CoreUObject::Private::Construct<FWN_NiagaraUserParamEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x1c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x24) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x2c) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x70))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FWN_NiagaraUserParamEntry> @ 14a0443d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_NiagaraUserParamEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x1c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x24) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x2c) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x70))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FWN_NiagaraUserParamEntry> @ 14a044450

void __cdecl UE::CoreUObject::Private::Destruct<FWN_NiagaraUserParamEntry>(void *param_1)

{
  return;
}

// Copy<FWN_NiagaraUserParamEntry> @ 14a044460

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_NiagaraUserParamEntry>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_NiagaraReactSetting> @ 14a0444f0

void __cdecl UE::CoreUObject::Private::Construct<FWN_NiagaraReactSetting>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FWN_NiagaraReactSetting> @ 14a044500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_NiagaraReactSetting>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FWN_NiagaraReactSetting> @ 14a044510

void __cdecl UE::CoreUObject::Private::Destruct<FWN_NiagaraReactSetting>(void *param_1)

{
  return;
}

// Copy<FWN_NiagaraReactSetting> @ 14a044520

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_NiagaraReactSetting>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_MeshContext> @ 14a044550

void __cdecl UE::CoreUObject::Private::Construct<FWN_MeshContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FWN_MeshContext::FWN_MeshContext(param_1);
  return;
}

// ConstructForTests<FWN_MeshContext> @ 14a044590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_MeshContext>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x20);
  uStackX_8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FWN_MeshContext> @ 14a0445a0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_MeshContext>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FWN_MeshContext> @ 14a0445f0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_MeshContext>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      ::FString::operator=((FString *)(puVar3 + 1),(FString *)((longlong)pvVar2 + 8));
      puVar3[3] = *(undefined8 *)((longlong)pvVar2 + 0x18);
      puVar3[4] = *(undefined8 *)((longlong)pvVar2 + 0x20);
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)((longlong)pvVar2 + 0x28);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x34);
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)pvVar2 + 0x2c);
      *(undefined8 *)((longlong)puVar3 + 0x34) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)pvVar2 + 0x3c);
      if ((TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar3 + 8) !=
          (TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)pvVar2 + 0x40)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0xf),(int *)(puVar3 + 0x11),
                   (ForElementType<FSetElementId> *)((longlong)pvVar2 + 0x78),
                   *(int *)((longlong)pvVar2 + 0x88));
        TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar3 + 8),
                    (TSparseArray<TSparseSetElement<TTuple<int,FWN_MeshDayReactSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)pvVar2 + 0x40));
      }
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x90);
      puVar3 = puVar3 + 0x12;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_MeshDayReactSetting> @ 14a0447a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_MeshDayReactSetting>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FWN_MeshDayReactSetting> @ 14a0447d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_MeshDayReactSetting>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWN_MeshDayReactSetting> @ 14a0447f0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_MeshDayReactSetting>(void *param_1)

{
  return;
}

// Copy<FWN_MeshDayReactSetting> @ 14a044800

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_MeshDayReactSetting>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar3 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_MeshReactSetting> @ 14a0448a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_MeshReactSetting>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FWN_MeshReactSetting> @ 14a0448c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_MeshReactSetting>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FWN_MeshReactSetting> @ 14a0448e0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_MeshReactSetting>(void *param_1)

{
  return;
}

// Copy<FWN_MeshReactSetting> @ 14a0449b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_MeshReactSetting>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_LightContext> @ 14a0449f0

void __cdecl UE::CoreUObject::Private::Construct<FWN_LightContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  FWN_LightContext::FWN_LightContext(param_1);
  return;
}

// ConstructForTests<FWN_LightContext> @ 14a044a20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_LightContext>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x20);
  uStackX_8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x44))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FWN_LightContext> @ 14a044a30

void __cdecl UE::CoreUObject::Private::Destruct<FWN_LightContext>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FWN_LightContext> @ 14a044a50

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_LightContext>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      ::FString::operator=((FString *)(puVar3 + 1),(FString *)((longlong)pvVar2 + 8));
      puVar3[3] = *(undefined8 *)((longlong)pvVar2 + 0x18);
      puVar3[4] = *(undefined8 *)((longlong)pvVar2 + 0x20);
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)((longlong)pvVar2 + 0x28);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x34);
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)pvVar2 + 0x2c);
      *(undefined8 *)((longlong)puVar3 + 0x34) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)pvVar2 + 0x3c);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x48);
      puVar3[8] = *(undefined8 *)((longlong)pvVar2 + 0x40);
      puVar3[9] = uVar1;
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)((longlong)pvVar2 + 0x50);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x58);
      puVar3 = puVar3 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_UDS_VolumeSetting> @ 14a044b00

void __cdecl UE::CoreUObject::Private::Construct<FWN_UDS_VolumeSetting>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWN_UDS_VolumeSetting> @ 14a044b20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_UDS_VolumeSetting>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWN_UDS_VolumeSetting> @ 14a044b40

void __cdecl UE::CoreUObject::Private::Destruct<FWN_UDS_VolumeSetting>(void *param_1)

{
  return;
}

// Copy<FWN_UDS_VolumeSetting> @ 14a044b50

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_UDS_VolumeSetting>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_LightReactSetting> @ 14a044b90

void __cdecl UE::CoreUObject::Private::Construct<FWN_LightReactSetting>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FWN_LightReactSetting> @ 14a044bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_LightReactSetting>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FWN_LightReactSetting> @ 14a044bd0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_LightReactSetting>(void *param_1)

{
  return;
}

// Copy<FWN_LightReactSetting> @ 14a044be0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_LightReactSetting>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_UDS_State> @ 14a044c20

void __cdecl UE::CoreUObject::Private::Construct<FWN_UDS_State>(void *param_1)

{
  memset(param_1,0,0x1270);
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky((FWN_Ultra_Dynamic_Sky *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FWN_UDS_State> @ 14a044c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_UDS_State>(void *param_1)

{
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky((FWN_Ultra_Dynamic_Sky *)((longlong)param_1 + 8));
  return;
}

// Destruct<FWN_UDS_State> @ 14a044c60

void __cdecl UE::CoreUObject::Private::Destruct<FWN_UDS_State>(void *param_1)

{
  FWN_Ultra_Dynamic_Sky::~FWN_Ultra_Dynamic_Sky((FWN_Ultra_Dynamic_Sky *)((longlong)param_1 + 8));
  return;
}

// Copy<FWN_UDS_State> @ 14a044c70

bool __cdecl UE::CoreUObject::Private::Copy<FWN_UDS_State>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      FWN_Ultra_Dynamic_Sky::operator=
                ((FWN_Ultra_Dynamic_Sky *)(puVar1 + 1),
                 (FWN_Ultra_Dynamic_Sky *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x24e;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_UDS_PropertyGroup> @ 14a0452b0

void __cdecl UE::CoreUObject::Private::Construct<FWN_UDS_PropertyGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_UDS_PropertyGroup> @ 14a0452c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_UDS_PropertyGroup>(void *param_1)

{
  return;
}

// Construct<FWN_Ultra_Dynamic_Sky> @ 14a04cc90

void __cdecl UE::CoreUObject::Private::Construct<FWN_Ultra_Dynamic_Sky>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  (((FUtf8String *)((longlong)param_1 + 200))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 200),0);
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x138))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x138),0);
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x308))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x308),0);
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x330))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x330),0);
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x3d0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x3d0),0);
  *(undefined8 *)((longlong)param_1 + 0x430) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x448))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x450) = 0;
  *(undefined8 *)((longlong)param_1 + 0x440) = 0;
  *(undefined8 *)((longlong)param_1 + 0x438) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x448),0);
  *(undefined8 *)((longlong)param_1 + 0x5b8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x5d0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x5d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x5d0),0);
  *(undefined8 *)((longlong)param_1 + 0x5e0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x5f8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x5f8),0);
  *(undefined8 *)((longlong)param_1 + 0x740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x748) = 0;
  *(undefined8 *)((longlong)param_1 + 0x760) = 0;
  *(undefined4 *)((longlong)param_1 + 0x768) = 0;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x770) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x780) = 0;
  *(undefined4 *)((longlong)param_1 + 0x788) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x7b8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x7c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x7b8),0);
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x948) = 0;
  *(undefined4 *)((longlong)param_1 + 0x950) = 0;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x958) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x968) = 0;
  *(undefined4 *)((longlong)param_1 + 0x970) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf8) = 2;
  *(undefined4 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb00) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb04) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xba8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xbb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb98) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xba8),0);
  *(undefined8 *)((longlong)param_1 + 3000) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xbd0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xbd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xbd0),0);
  *(undefined8 *)((longlong)param_1 + 0xbe0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xbf8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xc00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xbf8),0);
  *(undefined1 *)((longlong)param_1 + 0xe20) = 2;
  (((FUtf8String *)((longlong)param_1 + 0x1170))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x1178) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe24) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe28) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1160) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x1170),0);
  memset(param_1,0,0x1268);
  return;
}

// ConstructForTests<FWN_Ultra_Dynamic_Sky> @ 14a04cca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_Ultra_Dynamic_Sky>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  (((FUtf8String *)((longlong)param_1 + 200))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 200),0);
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x138))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x138),0);
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x308))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x308),0);
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x330))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x330),0);
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x3d0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x3d0),0);
  *(undefined8 *)((longlong)param_1 + 0x430) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x448))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x450) = 0;
  *(undefined8 *)((longlong)param_1 + 0x440) = 0;
  *(undefined8 *)((longlong)param_1 + 0x438) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x448),0);
  *(undefined8 *)((longlong)param_1 + 0x5b8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x5d0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x5d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x5d0),0);
  *(undefined8 *)((longlong)param_1 + 0x5e0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x5f8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x5f8),0);
  *(undefined8 *)((longlong)param_1 + 0x740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x748) = 0;
  *(undefined8 *)((longlong)param_1 + 0x760) = 0;
  *(undefined4 *)((longlong)param_1 + 0x768) = 0;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x770) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x780) = 0;
  *(undefined4 *)((longlong)param_1 + 0x788) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x7b8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x7c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x7b8),0);
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x948) = 0;
  *(undefined4 *)((longlong)param_1 + 0x950) = 0;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x958) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x968) = 0;
  *(undefined4 *)((longlong)param_1 + 0x970) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf8) = 2;
  *(undefined4 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb00) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb04) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xba8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xbb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb98) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xba8),0);
  *(undefined8 *)((longlong)param_1 + 3000) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xbd0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xbd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xbd0),0);
  *(undefined8 *)((longlong)param_1 + 0xbe0) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xbf8))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xc00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xbf8),0);
  *(undefined1 *)((longlong)param_1 + 0xe20) = 2;
  (((FUtf8String *)((longlong)param_1 + 0x1170))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x1178) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe24) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe28) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1160) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x1170),0);
  memset(param_1,0,0x1268);
  return;
}

// Destruct<FWN_Ultra_Dynamic_Sky> @ 14a04ccb0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_Ultra_Dynamic_Sky>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1248));
  }
  if (*(void **)((longlong)param_1 + 0x11d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x11d0));
  }
  if (*(void **)((longlong)param_1 + 0x1170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1170));
  }
  DestructItems<FWN_UDS_Space_Planet,int>
            (*(FWN_UDS_Space_Planet **)((longlong)param_1 + 0xf50),
             *(int *)((longlong)param_1 + 0xf58));
  if (*(void **)((longlong)param_1 + 0xf50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf50));
  }
  if (*(void **)((longlong)param_1 + 0xbf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xbf8));
  }
  if (*(void **)((longlong)param_1 + 0xbd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xbd0));
  }
  if (*(void **)((longlong)param_1 + 0xba8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xba8));
  }
  *(undefined4 *)((longlong)param_1 + 0x970) = 0;
  if (*(void **)((longlong)param_1 + 0x968) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x968));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EWN_UDS_RenderingFeatureLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EWN_UDS_RenderingFeatureLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x928));
  if (*(void **)((longlong)param_1 + 0x7b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x7b8));
  }
  *(undefined4 *)((longlong)param_1 + 0x788) = 0;
  if (*(void **)((longlong)param_1 + 0x780) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x780));
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_EWN_UDS_SkyMode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_EWN_UDS_SkyMode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x740));
  if (*(void **)((longlong)param_1 + 0x5f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x5f8));
  }
  if (*(void **)((longlong)param_1 + 0x5d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x5d0));
  }
  if (*(void **)((longlong)param_1 + 0x448) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x448));
  }
  if (*(void **)((longlong)param_1 + 0x3d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3d0));
  }
  if (*(void **)((longlong)param_1 + 0x330) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x330));
  }
  if (*(void **)((longlong)param_1 + 0x308) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x308));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  return;
}

// Copy<FWN_Ultra_Dynamic_Sky> @ 14a04cd00

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_Ultra_Dynamic_Sky>(void *param_1,void *param_2,int param_3)

{
  FWN_Ultra_Dynamic_Sky *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FWN_Ultra_Dynamic_Sky::operator=
                (this,(FWN_Ultra_Dynamic_Sky *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_UDS_Space_Planet> @ 14a04cfd0

void __cdecl UE::CoreUObject::Private::Construct<FWN_UDS_Space_Planet>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x78))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x78),0);
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x150))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x150),0);
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x1c0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x1c0),0);
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x210))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x210),0);
  memset(param_1,0,0x248);
  return;
}

// ConstructForTests<FWN_UDS_Space_Planet> @ 14a04cfe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_UDS_Space_Planet>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x78))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x78),0);
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x150))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x150),0);
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x1c0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x1c0),0);
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x210))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x210),0);
  memset(param_1,0,0x248);
  return;
}

// Destruct<FWN_UDS_Space_Planet> @ 14a04d000

void __cdecl UE::CoreUObject::Private::Destruct<FWN_UDS_Space_Planet>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x210));
  }
  if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c0));
  }
  if (*(void **)((longlong)param_1 + 0x150) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x150));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
    return;
  }
  return;
}

// Copy<FWN_UDS_Space_Planet> @ 14a04d090

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_UDS_Space_Planet>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pvVar3 = param_2;
    do {
      *puVar2 = *(undefined8 *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x10);
      puVar2[1] = *(undefined8 *)((longlong)pvVar3 + 8);
      puVar2[2] = uVar1;
      puVar2[3] = *(undefined8 *)((longlong)pvVar3 + 0x18);
      puVar2[4] = *(undefined8 *)((longlong)pvVar3 + 0x20);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 5),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar3 + 0x28));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x58);
      puVar2[10] = *(undefined8 *)((longlong)pvVar3 + 0x50);
      puVar2[0xb] = uVar1;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 0xc),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar3 + 0x60));
      puVar2[0x11] = *(undefined8 *)((longlong)pvVar3 + 0x88);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x98);
      puVar2[0x12] = *(undefined8 *)((longlong)pvVar3 + 0x90);
      puVar2[0x13] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0xa8);
      puVar2[0x14] = *(undefined8 *)((longlong)pvVar3 + 0xa0);
      puVar2[0x15] = uVar1;
      puVar2[0x16] = *(undefined8 *)((longlong)pvVar3 + 0xb0);
      puVar2[0x17] = *(undefined8 *)((longlong)pvVar3 + 0xb8);
      puVar2[0x18] = *(undefined8 *)((longlong)pvVar3 + 0xc0);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0xd0);
      puVar2[0x19] = *(undefined8 *)((longlong)pvVar3 + 200);
      puVar2[0x1a] = uVar1;
      *(undefined1 *)(puVar2 + 0x1b) = *(undefined1 *)((longlong)pvVar3 + 0xd8);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0xe8);
      puVar2[0x1c] = *(undefined8 *)((longlong)pvVar3 + 0xe0);
      puVar2[0x1d] = uVar1;
      puVar2[0x1e] = *(undefined8 *)((longlong)pvVar3 + 0xf0);
      puVar2[0x1f] = *(undefined8 *)((longlong)pvVar3 + 0xf8);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x108);
      puVar2[0x20] = *(undefined8 *)((longlong)pvVar3 + 0x100);
      puVar2[0x21] = uVar1;
      puVar2[0x22] = *(undefined8 *)((longlong)pvVar3 + 0x110);
      *(undefined1 *)(puVar2 + 0x23) = *(undefined1 *)((longlong)pvVar3 + 0x118);
      *(undefined1 *)((longlong)puVar2 + 0x119) = *(undefined1 *)((longlong)pvVar3 + 0x119);
      puVar2[0x24] = *(undefined8 *)((longlong)pvVar3 + 0x120);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x130);
      puVar2[0x25] = *(undefined8 *)((longlong)pvVar3 + 0x128);
      puVar2[0x26] = uVar1;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 0x27),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar3 + 0x138));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x168);
      puVar2[0x2c] = *(undefined8 *)((longlong)pvVar3 + 0x160);
      puVar2[0x2d] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x178);
      puVar2[0x2e] = *(undefined8 *)((longlong)pvVar3 + 0x170);
      puVar2[0x2f] = uVar1;
      *(undefined1 *)(puVar2 + 0x30) = *(undefined1 *)((longlong)pvVar3 + 0x180);
      puVar2[0x31] = *(undefined8 *)((longlong)pvVar3 + 0x188);
      puVar2[0x32] = *(undefined8 *)((longlong)pvVar3 + 400);
      puVar2[0x33] = *(undefined8 *)((longlong)pvVar3 + 0x198);
      puVar2[0x34] = *(undefined8 *)((longlong)pvVar3 + 0x1a0);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 0x35),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar3 + 0x1a8));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x1d8);
      puVar2[0x3a] = *(undefined8 *)((longlong)pvVar3 + 0x1d0);
      puVar2[0x3b] = uVar1;
      puVar2[0x3c] = *(undefined8 *)((longlong)pvVar3 + 0x1e0);
      puVar2[0x3d] = *(undefined8 *)((longlong)pvVar3 + 0x1e8);
      puVar2[0x3e] = *(undefined8 *)((longlong)pvVar3 + 0x1f0);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 0x3f),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar3 + 0x1f8));
      puVar2[0x44] = *(undefined8 *)((longlong)pvVar3 + 0x220);
      puVar2[0x45] = *(undefined8 *)((longlong)pvVar3 + 0x228);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x238);
      puVar2[0x46] = *(undefined8 *)((longlong)pvVar3 + 0x230);
      puVar2[0x47] = uVar1;
      puVar2[0x48] = *(undefined8 *)((longlong)pvVar3 + 0x240);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x49;
      pvVar3 = (void *)((longlong)pvVar3 + 0x248);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_UDS_Post_Process_Stage> @ 14a04d440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FWN_UDS_Post_Process_Stage>(void *param_1)

{
  FPostProcessSettings::FPostProcessSettings((FPostProcessSettings *)((longlong)param_1 + 0x10));
  memset(param_1,0,0x7b0);
  return;
}

// ConstructForTests<FWN_UDS_Post_Process_Stage> @ 14a04d470

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_UDS_Post_Process_Stage>(void *param_1)

{
  FPostProcessSettings::FPostProcessSettings((FPostProcessSettings *)((longlong)param_1 + 0x10));
  memset(param_1,0,0x7b0);
  return;
}

// Destruct<FWN_UDS_Post_Process_Stage> @ 14a04d4a0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_UDS_Post_Process_Stage>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x790) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x790));
  }
  if (*(void **)((longlong)param_1 + 0x768) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x768));
    return;
  }
  return;
}

// Copy<FWN_UDS_Post_Process_Stage> @ 14a04d4e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_UDS_Post_Process_Stage>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  void *pvVar2;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    pvVar2 = param_2;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      FPostProcessSettings::operator=
                ((FPostProcessSettings *)(puVar1 + 0x10),
                 (FPostProcessSettings *)((longlong)pvVar2 + 0x10));
      *(undefined8 *)(puVar1 + 0x780) = *(undefined8 *)((longlong)pvVar2 + 0x780);
      puVar1[0x788] = *(undefined1 *)((longlong)pvVar2 + 0x788);
      puVar1[0x789] = *(undefined1 *)((longlong)pvVar2 + 0x789);
      puVar1[0x78a] = *(undefined1 *)((longlong)pvVar2 + 0x78a);
      puVar1[0x78b] = *(undefined1 *)((longlong)pvVar2 + 0x78b);
      puVar1[0x78c] = *(undefined1 *)((longlong)pvVar2 + 0x78c);
      puVar1[0x78d] = *(undefined1 *)((longlong)pvVar2 + 0x78d);
      ::FString::operator=((FString *)(puVar1 + 0x790),(FString *)((longlong)pvVar2 + 0x790));
      puVar1[0x7a0] = *(undefined1 *)((longlong)pvVar2 + 0x7a0);
      puVar1[0x7a1] = *(undefined1 *)((longlong)pvVar2 + 0x7a1);
      puVar1[0x7a2] = *(undefined1 *)((longlong)pvVar2 + 0x7a2);
      puVar1[0x7a3] = *(undefined1 *)((longlong)pvVar2 + 0x7a3);
      puVar1[0x7a4] = *(undefined1 *)((longlong)pvVar2 + 0x7a4);
      puVar1[0x7a5] = *(undefined1 *)((longlong)pvVar2 + 0x7a5);
      puVar1[0x7a6] = *(undefined1 *)((longlong)pvVar2 + 0x7a6);
      puVar1[0x7a7] = *(undefined1 *)((longlong)pvVar2 + 0x7a7);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x7b0;
      pvVar2 = (void *)((longlong)pvVar2 + 0x7b0);
    } while (param_3 != 0);
  }
  return true;
}


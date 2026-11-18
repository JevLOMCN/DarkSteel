// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FShadowMap2D @ 1485a42a0

FShadowMap2D * __thiscall
FShadowMap2D::FShadowMap2D
          (FShadowMap2D *this,
          TMap<ULightComponent_*,FShadowMapData2D_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,FShadowMapData2D_*,0>_>
          *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FShadowMap2D *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  (this->InvUniformPenumbraSize).field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar12 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FShadowMap2D__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  uVar7 = 1;
  (this->CoordinateScale).field0_0x0._s_0.X = 0.0;
  (this->CoordinateScale).field0_0x0._s_0.Y = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.X = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 = 0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.Z = 0.0;
  this->bChannelValid[0] = false;
  this->bChannelValid[1] = false;
  this->bChannelValid[2] = false;
  this->bChannelValid[3] = false;
  iVar8 = *(int *)&param_1->field_0x28;
  iVar13 = iVar12;
  TStack_50.CurrentBitIndex = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)TStack_50.Array;
    }
    uVar3 = *puVar14;
    iVar13 = 0;
    iVar12 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_50.CurrentBitIndex = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1485a4383;
      uVar3 = puVar14[lVar10 + 1];
    }
    uVar7 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = iVar13 + -1 + (int)lVar10;
    if (iVar8 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar8;
    }
  }
LAB_1485a4383:
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar13;
  if (TStack_50.CurrentBitIndex < iVar8) {
    do {
      lVar10 = *(longlong *)(*(longlong *)param_1 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      puVar11 = (undefined8 *)(lVar10 + 0x260);
      if ((((undefined8 *)this->_padding_ <= puVar11) &&
          (puVar11 < (undefined8 *)this->_padding_ +
                     (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FShadowMap2D *)(*pcVar4)();
        return pFVar9;
      }
      iVar8 = (int)this->_padding_;
      if (iVar8 == *(int *)((longlong)&this->_padding_ + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,(ForAnyElementType *)&this->_padding_,
                           (int *)((longlong)&this->_padding_ + 4));
      }
      *(int *)&this->_padding_ = iVar8 + 1;
      uVar5 = *(undefined8 *)(lVar10 + 0x268);
      puVar1 = (undefined8 *)(this->_padding_ + (longlong)iVar8 * 0x10);
      *puVar1 = *puVar11;
      puVar1[1] = uVar5;
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return this;
}

// FShadowMap2D @ 1485a4500

FShadowMap2D * __thiscall
FShadowMap2D::FShadowMap2D(FShadowMap2D *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->_padding_ = (longlong)pFVar3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  *(int *)&this->_padding_ = iVar2;
  this->_padding_ = (longlong)&___7FShadowMap2D__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  (this->CoordinateScale).field0_0x0._s_0.X = 0.0;
  (this->CoordinateScale).field0_0x0._s_0.Y = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.X = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 = 0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.Z = 0.0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.W = 1.0;
  this->bChannelValid[0] = false;
  this->bChannelValid[1] = false;
  this->bChannelValid[2] = false;
  this->bChannelValid[3] = false;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FShadowMap2D @ 1485a4580

FShadowMap2D * __thiscall FShadowMap2D::FShadowMap2D(FShadowMap2D *this)

{
  (this->InvUniformPenumbraSize).field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FShadowMap2D__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  (this->CoordinateScale).field0_0x0._s_0.X = 0.0;
  (this->CoordinateScale).field0_0x0._s_0.Y = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.X = 0.0;
  (this->CoordinateBias).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 = 0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.Z = 0.0;
  this->bChannelValid[0] = false;
  this->bChannelValid[1] = false;
  this->bChannelValid[2] = false;
  this->bChannelValid[3] = false;
  return this;
}

// AddReferencedObjects @ 1485a9fd0

void __thiscall FShadowMap2D::AddReferencedObjects(FShadowMap2D *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001485a9fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Texture,0,0);
  return;
}

// AllocateInstancedShadowMap @ 1485aa230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FShadowMap2D> __cdecl
FShadowMap2D::AllocateInstancedShadowMap
          (UObject *param_1,UInstancedStaticMeshComponent *param_2,
          TArray<TMap<ULightComponent_*,TUniquePtr<FShadowMapData2D,TDefaultDelete<FShadowMapData2D>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,TUniquePtr<FShadowMapData2D,TDefaultDelete<FShadowMapData2D>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_3,UMapBuildDataRegistry *param_4,FGuid *param_5,
          TBoxSphereBounds<double,double> *param_6,ELightMapPaddingType param_7,
          EShadowMapFlags param_8)

{
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FShadowMap2D>)(FShadowMap2D *)param_1;
}

// AllocateShadowMap @ 1485aa320

TRefCountPtr<FShadowMap2D> __cdecl
FShadowMap2D::AllocateShadowMap
          (UObject *param_1,
          TMap<ULightComponent_*,FShadowMapData2D_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,FShadowMapData2D_*,0>_>
          *param_2,TBoxSphereBounds<double,double> *param_3,ELightMapPaddingType param_4,
          EShadowMapFlags param_5)

{
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FShadowMap2D>)(FShadowMap2D *)param_1;
}

// GetInteraction @ 1485c52c0

FShadowMapInteraction * __thiscall
FShadowMap2D::GetInteraction(FShadowMap2D *this,FShadowMapInteraction *__return_storage_ptr__)

{
  UShadowMapTexture2D *pUVar1;
  double dVar2;
  undefined8 uVar3;
  
  pUVar1 = (this->Texture).field0_0x0.DebugPtr;
  __return_storage_ptr__->ShadowTexture = (UShadowMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8) = 0;
  __return_storage_ptr__->bChannelValid[0] = false;
  __return_storage_ptr__->bChannelValid[1] = false;
  __return_storage_ptr__->bChannelValid[2] = false;
  __return_storage_ptr__->bChannelValid[3] = false;
  if (pUVar1 != (UShadowMapTexture2D *)0x0) {
    __return_storage_ptr__->Type = SMIT_Texture;
    __return_storage_ptr__->ShadowTexture = pUVar1;
    dVar2 = (this->CoordinateScale).field0_0x0._s_0.Y;
    (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.X =
         (this->CoordinateScale).field0_0x0._s_0.X;
    (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.Y = dVar2;
    dVar2 = (this->CoordinateBias).field0_0x0._s_0.Y;
    (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.X =
         (this->CoordinateBias).field0_0x0._s_0.X;
    (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.Y = dVar2;
    uVar3 = *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 =
         *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8) =
         uVar3;
    __return_storage_ptr__->bChannelValid[0] = this->bChannelValid[0];
    __return_storage_ptr__->bChannelValid[1] = this->bChannelValid[1];
    __return_storage_ptr__->bChannelValid[2] = this->bChannelValid[2];
    __return_storage_ptr__->bChannelValid[3] = this->bChannelValid[3];
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Type = SMIT_None;
  return __return_storage_ptr__;
}

// GetTexture @ 1485cb5b0

UTexture2D * __thiscall FShadowMap2D::GetTexture(FShadowMap2D *this)

{
  code *pcVar1;
  bool bVar2;
  UTexture2D *pUVar3;
  
  if ((this->Texture).field0_0x0.DebugPtr != (UShadowMapTexture2D *)0x0) {
    return (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShadowMap.cpp"
                     ,0x228,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UTexture2D *)(*pcVar1)();
    return pUVar3;
  }
  return (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
}

// GetTexture @ 1485cb600

UTexture2D * __thiscall FShadowMap2D::GetTexture(FShadowMap2D *this)

{
  code *pcVar1;
  bool bVar2;
  UTexture2D *pUVar3;
  
  if ((this->Texture).field0_0x0.DebugPtr != (UShadowMapTexture2D *)0x0) {
    return (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShadowMap.cpp"
                     ,0x229,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UTexture2D *)(*pcVar1)();
    return pUVar3;
  }
  return (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
}

// Serialize @ 1485d7500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FShadowMap2D::Serialize(FShadowMap2D *this,FArchive *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  FArchive *pFVar7;
  ulonglong local_res8;
  
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FGuid,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  lVar2 = *(longlong *)&param_1->field_0x68;
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
    cVar6 = (**(code **)(**(longlong **)(lVar2 + 8) + 200))(*(longlong **)(lVar2 + 8),1);
    if (cVar6 == '\0') {
      local_res8 = 0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
      goto LAB_1485d7575;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Texture);
LAB_1485d7575:
  pFVar7 = UE::Math::operator<<(param_1,&this->CoordinateScale);
  UE::Math::operator<<(pFVar7,&this->CoordinateBias);
  puVar1 = &param_1->field_0x28;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    uVar4 = local_res8 >> 0x20;
    local_res8 = local_res8 & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res8 = CONCAT44((int)uVar4,(uint)(this->bChannelValid[0] != false));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bChannelValid[0] = (uint)local_res8 != 0;
    }
  }
  else {
    this->bChannelValid[0] = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    uVar4 = local_res8 >> 0x20;
    local_res8 = local_res8 & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res8 = CONCAT44((int)uVar4,(uint)(this->bChannelValid[1] != false));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bChannelValid[1] = (uint)local_res8 != 0;
    }
  }
  else {
    this->bChannelValid[1] = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    uVar4 = local_res8 >> 0x20;
    local_res8 = local_res8 & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res8 = CONCAT44((int)uVar4,(uint)(this->bChannelValid[2] != false));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bChannelValid[2] = (uint)local_res8 != 0;
    }
  }
  else {
    this->bChannelValid[2] = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    uVar4 = local_res8 >> 0x20;
    local_res8 = local_res8 & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res8 = CONCAT44((int)uVar4,(uint)(this->bChannelValid[3] != false));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bChannelValid[3] = (uint)local_res8 != 0;
    }
  }
  else {
    this->bChannelValid[3] = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar5 = _UNK_150d56648;
  if (*(int *)&param_1->field_0x40 < 0x1d4) {
    if ((*puVar1 & 1) != 0) {
      *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 =
           ___xmm_41a0000041a0000041a0000041a00000;
      *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 8) = uVar5;
    }
  }
  else {
    UE::Math::operator<<(param_1,&this->InvUniformPenumbraSize);
  }
  return;
}


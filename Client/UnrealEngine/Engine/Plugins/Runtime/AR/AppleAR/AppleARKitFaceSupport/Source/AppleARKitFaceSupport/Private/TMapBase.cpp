// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 4

// Emplace<enum_EARFaceBlendShape,float_const_&> @ 14d281f40

float * __thiscall
TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
::Emplace<enum_EARFaceBlendShape,float_const_&>
          (void *this,EARFaceBlendShape *param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x10);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<EARFaceBlendShape,float>_> *)0x0) {
    *(EARFaceBlendShape *)local_28.Pointer = *param_1;
    *(float *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  bVar2 = *(byte *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,(uint)bVar2,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,(uint)bVar2,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)this + 4 + lVar6 * 0x10);
}

// Emplace<enum_EARFaceBlendShape,float> @ 14d282060

float * __thiscall
TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
::Emplace<enum_EARFaceBlendShape,float>(void *this,EARFaceBlendShape *param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x10);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<EARFaceBlendShape,float>_> *)0x0) {
    *(EARFaceBlendShape *)local_28.Pointer = *param_1;
    *(float *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  bVar2 = *(byte *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,(uint)bVar2,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,(uint)bVar2,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)this + 4 + lVar6 * 0x10);
}

// FindOrAddImpl<FName_const_&> @ 14d282360

FBlendShapeStaticData * __thiscall
TMapBase<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FBlendShapeStaticData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FBlendShapeStaticData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 8);
}

// FindChecked @ 14d2872d0

float * __thiscall
TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
::FindChecked(void *this,EARFaceBlendShape param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  EARFaceBlendShape *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EARFaceBlendShape *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EARFaceBlendShape *)0x0) {
            return (float *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}


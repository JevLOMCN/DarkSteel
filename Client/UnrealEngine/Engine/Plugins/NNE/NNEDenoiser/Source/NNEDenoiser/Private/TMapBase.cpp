// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 9

// Emplace<enum_EResourceName_const_&> @ 14eae23b0

TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<enum_EResourceName_const_&>(void *this,EResourceName *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(EResourceName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  bVar2 = *(byte *)pTVar6;
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,(uint)bVar2,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,(uint)bVar2,pTVar6,local_res8[0]);
  }
  return (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 8 + lVar7 * 0x20)
  ;
}

// FindOrAddImpl<int_const_&> @ 14eae3610

FResourceInfo * __thiscall
TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14eae36a2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::NNEDenoiser::Private::FResourceInfo>,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14eae36a2:
  return (FResourceInfo *)(lVar3 + 4);
}

// FindOrAddImpl<int_const_&> @ 14eae36c0

TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<int_const_&> @ 14eae3770

TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
* __thiscall
TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindChecked @ 14eaf7830

FResourceInfo * __thiscall
TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
::FindChecked(TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FResourceInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FResourceInfo *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (FResourceInfo *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FResourceInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14eaf78d0

TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
* __thiscall
TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14eaf7970

FString * __thiscall
TMapBase<enum_EDenoiserRuntimeType,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDenoiserRuntimeType,FString,0>_>
::FindChecked(void *this,EDenoiserRuntimeType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FString *pFVar4;
  EDenoiserRuntimeType *pEVar5;
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
        pEVar5 = (EDenoiserRuntimeType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDenoiserRuntimeType *)0x0) {
            return (FString *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14eaf7a10

TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  EResourceName *pEVar5;
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
        pEVar5 = (EResourceName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EResourceName *)0x0) {
            return (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14eaf7ab0

TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  EResourceName *pEVar5;
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
        pEVar5 = (EResourceName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EResourceName *)0x0) {
            return (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}


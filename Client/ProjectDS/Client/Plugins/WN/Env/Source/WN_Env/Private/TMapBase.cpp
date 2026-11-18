// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 5

// Emplace<UClass_*_const_&,TObjectPtr<UWN_ReactComponentContext>_> @ 14a04df00

TObjectPtr<UWN_ReactComponentContext> * __thiscall
TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
::Emplace<UClass_*_const_&,TObjectPtr<UWN_ReactComponentContext>_>
          (TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
           *this,UClass **param_1,TObjectPtr<UWN_ReactComponentContext> *param_2)

{
  int iVar1;
  int iVar2;
  UWN_ReactComponentContext *pUVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_> *)0x0) {
    *(UClass **)local_28.Pointer = *param_1;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    *(UWN_ReactComponentContext **)((longlong)local_28.Pointer + 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UWN_ReactComponentContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TObjectPtr<UWN_ReactComponentContext> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x18 + 8);
}

// EmplaceByHash<UClass_*_const_&> @ 14a04e750

TObjectPtr<UWN_ReactComponentContext> * __thiscall
TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
::EmplaceByHash<UClass_*_const_&>
          (TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
           *this,uint param_1,UClass **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_> *)0x0) {
    *(UClass **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TObjectPtr<UWN_ReactComponentContext> *)
         (*(longlong *)&(this->Pairs).Elements + lVar5 * 0x18 + 8);
}

// FindOrAddImpl<int_const_&> @ 14a04ef80

FWN_MeshDayReactSetting * __thiscall
TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
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
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FWN_MeshDayReactSetting *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FWN_MeshDayReactSetting>,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FWN_MeshDayReactSetting *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 14a054160

TObjectPtr<UWN_ReactComponentContext> * __thiscall
TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
::Find(TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
       *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TObjectPtr<UWN_ReactComponentContext> *pTVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UClass **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UWN_ReactComponentContext> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UWN_ReactComponentContext> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TObjectPtr<UWN_ReactComponentContext> *)0x0;
}

// FindChecked @ 14a054290

FWN_MeshDayReactSetting * __thiscall
TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
::FindChecked(TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FWN_MeshDayReactSetting *pFVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FWN_MeshDayReactSetting *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FWN_MeshDayReactSetting *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FWN_MeshDayReactSetting *)(*pcVar1)();
  return pFVar4;
}


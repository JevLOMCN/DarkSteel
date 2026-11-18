// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 22

// Emplace<FString,UE::Math::TTransform<double>_const_&> @ 14e7374f0

TTransform<double> * __thiscall
TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
::Emplace<FString,UE::Math::TTransform<double>_const_&>
          (TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
           *this,FString *param_1,TTransform<double> *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x80 + 4 + lVar9);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x80 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *)0x0)
  {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    dVar2 = (param_2->Rotation).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x18) = dVar2;
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x28) = dVar2;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x30) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x38) = dVar2;
    dVar2 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x48) = dVar2;
    dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x58) = dVar2;
    dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x68) = dVar2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (TTransform<double> *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar9 * 0x80);
}

// Emplace<FString,UE::Math::TTransform<double>_> @ 14e737680

TTransform<double> * __thiscall
TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
::Emplace<FString,UE::Math::TTransform<double>_>
          (TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
           *this,FString *param_1,TTransform<double> *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x80 + 4 + lVar9);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x80 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_> *)0x0)
  {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    dVar2 = (param_2->Rotation).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x18) = dVar2;
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x28) = dVar2;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x30) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x38) = dVar2;
    dVar2 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x48) = dVar2;
    dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x58) = dVar2;
    dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
    *(double *)((longlong)local_28.Pointer + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)local_28.Pointer + 0x68) = dVar2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (TTransform<double> *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar9 * 0x80);
}

// EmplaceByHash<FString_const_&> @ 14e737810

FInterchangeMeshInstance * __thiscall
TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
::EmplaceByHash<FString_const_&>
          (TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FString_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x98 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x98 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_> *)0x0) {
    TKeyInitializer<FString_const_&>::
    operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x90) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FInterchangeMeshInstance *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x98 + 0x10);
}

// EmplaceByHash<FString> @ 14e7385c0

FInterchangeMeshInstance * __thiscall
TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
::EmplaceByHash<FString>
          (TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FString_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x98 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x98 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_> *)0x0) {
    TKeyInitializer<FString_&&>::
    operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x90) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FInterchangeMeshInstance *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x98 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14e739120

FInterchangeMeshGeometry * __thiscall
TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FInterchangeMeshGeometry *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FInterchangeMeshGeometry *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_> @ 14e7391c0

TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
* __thiscall
TMapBase<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>_>
::
FindOrAddImpl<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>
          (void *this,uint param_1,FString *param_2,
          TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
          *param_3)

{
  int iVar1;
  longlong lVar2;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar3;
  int local_res8 [2];
  FString *local_18;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *local_10;
  
  iVar1 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this,param_1,param_2);
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)this, lVar2 == 0)) {
    local_18 = param_2;
    local_10 = param_3;
    TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
              (this,(uint)local_res8,
               (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                *)(ulonglong)param_1,(bool *)&local_18);
    pTVar3 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
              *)(*(longlong *)this + (longlong)local_res8[0] * 0x20 + 0x10);
  }
  else {
    pTVar3 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
              *)(lVar2 + 0x10);
  }
  return pTVar3;
}

// GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> @ 14e739bc0

int __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (param_1,*(int *)&(this->Pairs).Elements.field_0x8 -
                     *(int *)&(this->Pairs).Elements.field_0x34);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_14e739cb9;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14e739cb9:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)&stack0x00000008,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0x28));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e739d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FInterchangeMeshGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  FString *pFVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14e73a079;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14e73a079;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14e739ec0;
      }
    }
    else {
LAB_14e739ec0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar17;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar13 = *puVar18;
      uVar16 = uVar17;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14e739fc0;
        uVar13 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14e739fc0:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar19;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14e73a079:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar17;
  local_f4.Data.ArrayMax = uVar19;
  local_d0 = uVar19;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar18;
    uVar16 = uVar17;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar17;
      local_d0 = (uint)uVar16;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar16 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar17 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14e73a11f;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14e73a11f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x50;
      pFVar20 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar20->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar19;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar20);
      if (iVar6 == -1) {
        pFVar15 = (FScriptContainerElement *)(lVar9 + *(longlong *)&(this->Pairs).Elements);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar15);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x50 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e73a300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FInterchangeMeshInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14e73a5f9;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14e73a5f9;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14e73a440;
      }
    }
    else {
LAB_14e73a440:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14e73a540;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14e73a540:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14e73a5f9:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14e73a69f;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14e73a69f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x98;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x98 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e73a880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14e73ab79;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14e73ab79;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14e73a9c0;
      }
    }
    else {
LAB_14e73a9c0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14e73aac0;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14e73aac0:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14e73ab79:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14e73ac1f;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14e73ac1f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x38;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x38 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 14e7ad3f0

TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
                     (plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)0x0;
}

// Find @ 14e7ad490

TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)(plVar2 + 1)
            ;
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0;
}

// Find @ 14e7ad530

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1> *param_1
      )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 14e7ad600

FSparseItemInfo * __thiscall
TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
::Find(TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
       *this,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar1 = TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>_>
                    (&this->Pairs,uVar2 >> 0x10 ^ uVar2,&local_18);
  if (iVar1 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar4 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (FSparseItemInfo *)(lVar4 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (FSparseItemInfo *)0x0;
}

// Find @ 14e7ad6d0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 14e7ad7a0

FSoftObjectPath * __thiscall
TMapBase<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
::Find(void *this,EInterchangeMaterialXBSDF param_1)

{
  undefined4 uVar1;
  FSoftObjectPath *pFVar2;
  EInterchangeMaterialXBSDF *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EInterchangeMaterialXBSDF *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FSoftObjectPath *)0x0;
          if (pEVar3 != (EInterchangeMaterialXBSDF *)0x0) {
            pFVar2 = (FSoftObjectPath *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSoftObjectPath *)0x0;
}

// Find @ 14e7ad820

FSoftObjectPath * __thiscall
TMapBase<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
::Find(void *this,EInterchangeMaterialXEDF param_1)

{
  undefined4 uVar1;
  FSoftObjectPath *pFVar2;
  EInterchangeMaterialXEDF *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EInterchangeMaterialXEDF *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FSoftObjectPath *)0x0;
          if (pEVar3 != (EInterchangeMaterialXEDF *)0x0) {
            pFVar2 = (FSoftObjectPath *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSoftObjectPath *)0x0;
}

// Find @ 14e7ad8a0

FSoftObjectPath * __thiscall
TMapBase<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
::Find(void *this,EInterchangeMaterialXShaders param_1)

{
  undefined4 uVar1;
  FSoftObjectPath *pFVar2;
  EInterchangeMaterialXShaders *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EInterchangeMaterialXShaders *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FSoftObjectPath *)0x0;
          if (pEVar3 != (EInterchangeMaterialXShaders *)0x0) {
            pFVar2 = (FSoftObjectPath *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSoftObjectPath *)0x0;
}

// Find @ 14e7ad920

FSoftObjectPath * __thiscall
TMapBase<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
::Find(void *this,EInterchangeMaterialXVDF param_1)

{
  undefined4 uVar1;
  FSoftObjectPath *pFVar2;
  EInterchangeMaterialXVDF *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EInterchangeMaterialXVDF *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FSoftObjectPath *)0x0;
          if (pEVar3 != (EInterchangeMaterialXVDF *)0x0) {
            pFVar2 = (FSoftObjectPath *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSoftObjectPath *)0x0;
}

// FindChecked @ 14e7add30

UInterchangeBaseMaterialFactoryNode ** __thiscall
TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
::FindChecked(TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeBaseMaterialFactoryNode **ppUVar6;
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
            return (UInterchangeBaseMaterialFactoryNode **)(lVar1 + 8);
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
                     ,0x288,L"");
  if (!bVar4) {
    return (UInterchangeBaseMaterialFactoryNode **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppUVar6 = (UInterchangeBaseMaterialFactoryNode **)(*pcVar3)();
  return ppUVar6;
}

// FindChecked @ 14e7addd0

FInterchangeLodSceneNodeContainer * __thiscall
TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
::FindChecked(TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInterchangeLodSceneNodeContainer *pFVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FInterchangeLodSceneNodeContainer *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FInterchangeLodSceneNodeContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInterchangeLodSceneNodeContainer *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14e7ade70

TTransform<double> * __thiscall
TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
::FindChecked(TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x80 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTransform<double> *)(lVar8 + 0x10);
}


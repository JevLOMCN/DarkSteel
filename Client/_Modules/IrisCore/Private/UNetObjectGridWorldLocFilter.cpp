// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// StaticClass @ 14421f130

UClass * __cdecl UNetObjectGridWorldLocFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridWorldLocFilter",
               &Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectGridWorldLocFilter,0x1a0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridWorldLocFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridWorldLocFilter>,local_res8,
               UNetObjectGridFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton;
}

// UNetObjectGridWorldLocFilter @ 14422a780

UNetObjectGridWorldLocFilter * __thiscall
UNetObjectGridWorldLocFilter::UNetObjectGridWorldLocFilter
          (UNetObjectGridWorldLocFilter *this,FVTableHelper *param_1)

{
  UNetObjectGridFilter::UNetObjectGridFilter((UNetObjectGridFilter *)this,param_1);
  this->WorldLocations = (FWorldLocations *)0x0;
  this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
  return this;
}

// UNetObjectGridWorldLocFilter @ 14422a7c0

UNetObjectGridWorldLocFilter * __thiscall
UNetObjectGridWorldLocFilter::UNetObjectGridWorldLocFilter(UNetObjectGridWorldLocFilter *this)

{
  UNetObjectGridFilter::UNetObjectGridFilter((UNetObjectGridFilter *)this);
  this->WorldLocations = (FWorldLocations *)0x0;
  this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
  return this;
}

// ~UNetObjectGridWorldLocFilter @ 14422b640

void __thiscall
UNetObjectGridWorldLocFilter::~UNetObjectGridWorldLocFilter(UNetObjectGridWorldLocFilter *this)

{
  this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
  UNetObjectGridFilter::~UNetObjectGridFilter((UNetObjectGridFilter *)this);
  return;
}

// BuildObjectInfo @ 1442328f0

bool __thiscall
UNetObjectGridWorldLocFilter::BuildObjectInfo
          (UNetObjectGridWorldLocFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  FScriptContainerElement *pFVar1;
  FNetObjectFilteringInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pFVar1 = (this->WorldLocations->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if ((this->WorldLocations->ValidInfoIndexes).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldLocations->HasInfoForObject(ObjectIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\NetObjectGridFilter.cpp"
                       ,0x26a,
                       L"UNetObjectGridWorldLocFilter only supports objects with valid world location data."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = param_2->OutInfo;
  pFVar2->Data[0] = 0xffff;
  pFVar2->Data[1] = 0xffff;
  return true;
}

// GetPrivateStaticClass @ 14423e5a0

UClass * __cdecl UNetObjectGridWorldLocFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridWorldLocFilter",
               &Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectGridWorldLocFilter,0x1a0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridWorldLocFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridWorldLocFilter>,local_res8,
               UNetObjectGridFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton;
}

// OnDeinit @ 144245d40

void __thiscall UNetObjectGridWorldLocFilter::OnDeinit(UNetObjectGridWorldLocFilter *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_18 [2];
  
  plVar1 = &this->_padding_;
  this->WorldLocations = (FWorldLocations *)0x0;
  if (plVar1 != local_18) {
    if ((UObject *)*plVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)*plVar1);
    }
    *plVar1 = 0;
  }
  DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)this->_padding_,(int)this->_padding_);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1e0,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
  }
  TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->_padding_,0);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
  }
  plVar1 = &this->_padding_;
  bVar4 = 1 < (int)this->_padding_;
  if (!bVar4) {
    TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                      *)plVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)plVar1,0,(int)this->_padding_);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)plVar1,0,piVar2);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar4) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
              *)plVar1);
  }
  return;
}

// OnInit @ 1442461d0

void __thiscall
UNetObjectGridWorldLocFilter::OnInit
          (UNetObjectGridWorldLocFilter *this,FNetObjectFilterInitParams *param_1)

{
  FWorldLocations *pFVar1;
  
  UNetObjectGridFilter::OnInit((UNetObjectGridFilter *)this,param_1);
  pFVar1 = UReplicationSystem::GetWorldLocations((param_1->ReplicationSystem).field0_0x0.DebugPtr);
  this->WorldLocations = pFVar1;
  return;
}

// PreFilter @ 144247390

void __thiscall
UNetObjectGridWorldLocFilter::PreFilter
          (UNetObjectGridWorldLocFilter *this,FNetObjectPreFilteringParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectLocationInfo *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  FNetBitArrayView local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FNetBitArrayView local_48;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  uVar6 = 0;
  uStack_50 = 0;
  local_58 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_48,
             (uint *)(this->WorldLocations->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data,
             (this->WorldLocations->ObjectsWithDirtyInfo).BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_68,(uint *)this->_padding_,(uint)this->_padding_);
  if ((local_68.BitCount != local_48.BitCount) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar8 = local_68.Storage;
  puVar9 = local_48.Storage;
  uVar5 = uVar6;
  if (local_68.WordCount != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar6 == local_68.WordCount - 1) {
        uVar4 = 0xffffffff >> (-(char)local_68.BitCount & 0x1fU);
      }
      uVar7 = uVar5;
      for (uVar4 = uVar4 & *puVar9 & *puVar8; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((uVar4 & 1) != 0) {
          pFVar3 = (FObjectLocationInfo *)
                   TArrayView<FNetObjectFilteringInfo_const_,int>::operator[]
                             (&param_1->FilteringInfos,uVar7);
          UNetObjectGridFilter::UpdateCellInfoForObject
                    ((UNetObjectGridFilter *)this,pFVar3,(FReplicationInstanceProtocol *)0x0);
        }
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 + 0x20;
    } while (uVar6 < local_68.WordCount);
  }
  return;
}

// StaticRegisterNativesUNetObjectGridWorldLocFilter @ 144254940

void __cdecl UNetObjectGridWorldLocFilter::StaticRegisterNativesUNetObjectGridWorldLocFilter(void)

{
  return;
}

// UpdateObjectInfo @ 14425a600

void __thiscall
UNetObjectGridWorldLocFilter::UpdateObjectInfo
          (UNetObjectGridWorldLocFilter *this,FPerObjectInfo *param_1,FObjectLocationInfo *param_2,
          FReplicationInstanceProtocol *param_3)

{
  double dVar1;
  int iVar2;
  FWorldLocations *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  
  if (*(short *)&param_2->field_0x2 != -1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectLocationInfo.IsUsingWorldLocations()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\NetObjectGridFilter.cpp"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = this->WorldLocations;
  uVar14 = param_1->ObjectIndex;
  pFVar4 = (pFVar3->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if ((pFVar3->ValidInfoIndexes).BitCount <= uVar14) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((*(uint *)(pFVar4 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0) {
    uVar10 = 0;
    if ((int)uVar14 < (pFVar3->StorageIndexes).ArrayNum) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar2 = *(int *)((pFVar3->StorageIndexes).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
    uVar11 = iVar2 >> 0x1f & 0x7ff;
    uVar10 = iVar2 + uVar11;
    uVar13 = (int)uVar10 >> 0xb;
    uVar14 = 0;
    if ((int)uVar13 < (int)(pFVar3->StoredObjectInfo)._padding_) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar12 = (longlong)(int)((uVar10 & 0x7ff) - uVar11) * 0x20;
    lVar5 = *(longlong *)((pFVar3->StoredObjectInfo)._padding_ + (longlong)(int)uVar13 * 8);
    fVar15 = *(float *)(lVar5 + 0x1c + lVar12);
    dVar1 = *(double *)(lVar5 + 0x10 + lVar12);
    dVar7 = *(double *)(lVar5 + lVar12);
    dVar8 = ((double *)(lVar5 + lVar12))[1];
    if (fVar15 == __real_7f7fffff) {
      fVar15 = *(float *)(lVar5 + 0x18 + lVar12);
    }
    param_1->CullDistance = fVar15;
    (param_1->Position).field0_0x0._s_0.X = dVar7;
    (param_1->Position).field0_0x0._s_0.Y = dVar8;
    param_1->CullDistanceSq = fVar15 * fVar15;
    (param_1->Position).field0_0x0._s_0.Z = dVar1;
  }
  return;
}


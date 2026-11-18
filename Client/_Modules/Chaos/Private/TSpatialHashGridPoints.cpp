// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_> @ 143a29aa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TSpatialHashGridPoints<int,float>::
InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>
          (TSpatialHashGridPoints<int,float> *this,
          TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  bool bVar9;
  TSpatialHashGridPoints<int,float> *local_48;
  TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>
  *local_40;
  code *local_38;
  TSpatialHashGridPoints<int,float> **local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId506,"SpatialHashGridConstantBounds_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId506);
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
  }
  plVar1 = &this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  plVar3 = &this->_padding_;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)plVar1,0,piVar2);
  }
  (this->ParticleIndexToElement).ArrayNum = 0;
  if ((this->ParticleIndexToElement).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParticleIndexToElement).AllocatorInstance,0,
               &(this->ParticleIndexToElement).ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ParticleIndexToElement,param_1->ArrayNum,Default);
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,param_1->ArrayNum,param_1->ArrayNum);
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_48 = this;
  local_40 = param_1;
  PhysicsParallelFor(param_1->ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_38,param_2);
  uVar4 = (uint)this->_padding_;
  iVar7 = (int)*plVar3;
  if (iVar7 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar4 - iVar7,(ForAnyElementType *)plVar1,(int *)plVar3,piVar2);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar7) {
      uVar8 = iVar7 - uVar4;
      if (((int)(uVar8 | uVar4) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (void *)(*plVar1 + (longlong)(int)uVar4 * 0x20);
        iVar7 = ((int)*plVar3 - uVar8) - uVar4;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0x20),(longlong)iVar7 << 5);
        }
        *(uint *)plVar3 = (int)*plVar3 - uVar8;
      }
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143a3cc10

void __thiscall
`Chaos::TSpatialHashGridPoints<int,float>::
InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TVector<float,3> *pTVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  FPayloadAndBounds local_58;
  TVector<int,3>_u_0 local_50;
  undefined8 local_40;
  undefined4 local_38;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar8 = (longlong)param_1;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  iVar6 = *(int *)(lVar2 + 8 + lVar8 * 0x10);
  pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)(lVar2 + lVar8 * 0x10),
                      iVar6);
  local_40 = *(undefined8 *)pTVar7;
  local_38 = *(undefined4 *)&pTVar7->field_0x8;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = (undefined1  [12])*pTVar7;
  auVar9 = divps(auVar9,*(undefined1 (*) [16])&(*(FHashMap **)this)[1].Hash.ArrayNum);
  local_50._s_0.X =
       (int)((auVar9._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar9._0_4_) >> 1;
  local_50._s_0.Y =
       (int)((auVar9._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar9._4_4_) >> 1;
  local_50._s_0.Z =
       (int)((auVar9._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar9._8_4_) >> 1;
  local_58.Payload = iVar6;
  local_58.BoundsLookupIdx = param_1;
  iVar6 = Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElement
                    (*(FHashMap **)this,(TVector<int,3> *)&local_50._s_0,-1,&local_58);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar2 + 0x40) + lVar8 * 4) = iVar6;
  return;
}

// InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_> @ 143ce2870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TSpatialHashGridPoints<int,float>::
InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>
          (TSpatialHashGridPoints<int,float> *this,
          TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  bool bVar9;
  TSpatialHashGridPoints<int,float> *local_48;
  TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_> *local_40;
  code *local_38;
  TSpatialHashGridPoints<int,float> **local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId506,"SpatialHashGridConstantBounds_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId506);
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
  }
  plVar1 = &this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  plVar3 = &this->_padding_;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)plVar1,0,piVar2);
  }
  (this->ParticleIndexToElement).ArrayNum = 0;
  if ((this->ParticleIndexToElement).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParticleIndexToElement).AllocatorInstance,0,
               &(this->ParticleIndexToElement).ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ParticleIndexToElement,param_1->ArrayNum,Default);
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,param_1->ArrayNum,param_1->ArrayNum);
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_48 = this;
  local_40 = param_1;
  PhysicsParallelFor(param_1->ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_38,param_2);
  uVar4 = (uint)this->_padding_;
  iVar7 = (int)*plVar3;
  if (iVar7 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar4 - iVar7,(ForAnyElementType *)plVar1,(int *)plVar3,piVar2);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar7) {
      uVar8 = iVar7 - uVar4;
      if (((int)(uVar8 | uVar4) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (void *)(*plVar1 + (longlong)(int)uVar4 * 0x20);
        iVar7 = ((int)*plVar3 - uVar8) - uVar4;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0x20),(longlong)iVar7 << 5);
        }
        *(uint *)plVar3 = (int)*plVar3 - uVar8;
      }
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143d0fd10

void __thiscall
`Chaos::TSpatialHashGridPoints<int,float>::
InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TVector<float,3> *pTVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  FPayloadAndBounds local_58;
  TVector<int,3>_u_0 local_50;
  undefined8 local_40;
  undefined4 local_38;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar8 = (longlong)param_1;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  iVar6 = *(int *)(lVar2 + 8 + lVar8 * 0x10);
  pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)(lVar2 + lVar8 * 0x10),
                      iVar6);
  local_40 = *(undefined8 *)pTVar7;
  local_38 = *(undefined4 *)&pTVar7->field_0x8;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = (undefined1  [12])*pTVar7;
  auVar9 = divps(auVar9,*(undefined1 (*) [16])&(*(FHashMap **)this)[1].Hash.ArrayNum);
  local_50._s_0.X =
       (int)((auVar9._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar9._0_4_) >> 1;
  local_50._s_0.Y =
       (int)((auVar9._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar9._4_4_) >> 1;
  local_50._s_0.Z =
       (int)((auVar9._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar9._8_4_) >> 1;
  local_58.Payload = iVar6;
  local_58.BoundsLookupIdx = param_1;
  iVar6 = Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElement
                    (*(FHashMap **)this,(TVector<int,3> *)&local_50._s_0,-1,&local_58);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar2 + 0x40) + lVar8 * 4) = iVar6;
  return;
}

// FindAllSelfProximities @ 143d50630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities
          (TSpatialHashGridPoints<int,float> *this,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2,TFunctionRef<bool___cdecl(int,int)> *param_3,bool param_4)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  BOOLEAN BVar3;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  code *local_68;
  int *local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  TSpatialHashGridPoints<int,float> *local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_30;
  undefined8 uStack_20;
  RTL_SRWLOCK local_18 [2];
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CellRadius >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
                       ,0x211,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = *(undefined8 *)param_3;
  local_48 = *(undefined8 *)&param_3->field_0x8;
  local_38 = &this->ParticleIndexToElement;
  local_18[0].Ptr = (PVOID)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  uStack_20 = 0;
  local_58[0] = param_1;
  local_40 = this;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum(&local_30,param_2,Default);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_30,local_30.ArrayMax,Default);
  local_60 = local_58;
  LOCK();
  uStack_20 = CONCAT44(local_30.ArrayNum,(int)uStack_20);
  UNLOCK();
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities,void,int>
             ::Call;
  PhysicsParallelFor((this->ParticleIndexToElement).ArrayNum,
                     (TFunctionRef<void___cdecl(int)> *)&local_68,param_4);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_30,(int)uStack_20,Default);
  _Src.Data = local_30.AllocatorInstance.Data;
  lVar5 = (longlong)local_30.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_30.ArrayNum;
  if (local_30.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_30.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,local_30.ArrayNum,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar5 << 3);
  }
  BVar3 = TryAcquireSRWLockExclusive(local_18);
  if (BVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else {
    ReleaseSRWLockExclusive(local_18);
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


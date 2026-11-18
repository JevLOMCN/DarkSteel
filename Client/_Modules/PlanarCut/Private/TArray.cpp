// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 4

// TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_><UE::Math::TBox<double>_const_,int> @ 14c98d230

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_><UE::Math::TBox<double>_const_,int>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_1)

{
  int iVar1;
  TBox<double> *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
  return this;
}

// operator=<UE::Geometry::TAxisAlignedBox3<double>_const_,int> @ 14c98d2c0

TArray<UE::Geometry::TAxisAlignedBox3<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Geometry::TAxisAlignedBox3<double>,TSizedDefaultAllocator<32>_>::
operator=<UE::Geometry::TAxisAlignedBox3<double>_const_,int>
          (TArray<UE::Geometry::TAxisAlignedBox3<double>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Geometry::TAxisAlignedBox3<double>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TAxisAlignedBox3<double> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x30);
  }
  return this;
}

// RemoveAtSwapImpl @ 14c9de5d0

void __thiscall
TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FDynamicMesh3 *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FDynamicMesh3 *)(pFVar1 + (longlong)param_1 * 0x230);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x230,(longlong)iVar2 * 0x230);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14c9e0570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::SetNum(void *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
  *_Dst;
  uint uVar6;
  
  piVar1 = (int *)((longlong)this + 8);
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,this,piVar1,(int *)((longlong)this + 0xc));
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this),0,(longlong)(param_1 - iVar5) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
              *)((longlong)param_1 * 0x10 + *(longlong *)this);
      DestructItems<TArray<_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise_::__l2::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>,int>
                (_Dst,uVar6);
      iVar5 = (*piVar1 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 4);
      }
      iVar5 = *piVar1;
      *piVar1 = iVar5 - uVar6;
      if (param_2 == Default) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,this,iVar5 - uVar6,(int *)((longlong)this + 0xc));
      }
    }
  }
  return;
}


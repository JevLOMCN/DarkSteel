// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// RemoveAtImpl @ 1497164c0

void __thiscall
TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
            ((TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 149719d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149719ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                  )0x0) {
      this = (TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                 )this;
        if (FVar2 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                      )0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14971a010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14971a150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_>::SetNum
          (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<UE::Geometry::FIndex3i> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_>
                      (0xc,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((this->AllocatorInstance).InlineData + iVar4,param_1 - iVar5);
  }
  else {
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
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_>
                    (0xc,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14971a2a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 8,0,(longlong)(param_1 - iVar2) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}


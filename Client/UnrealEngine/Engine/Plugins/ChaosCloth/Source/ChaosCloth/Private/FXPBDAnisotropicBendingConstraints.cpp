// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// GetConstraintsArray @ 14dbfa940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::GetConstraintsArray
          (FXPBDAnisotropicBendingConstraints *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Dst;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar11 = 0;
  if (0 < (int)this->_padding_) {
    lVar12 = 0;
    do {
      uVar10 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar12;
      iVar8 = *(int *)&pFVar9[8].field_0x0;
      pFVar2 = pFVar9 + 8;
      if (iVar8 < 4) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4 - iVar8,(ForAnyElementType *)pFVar9,(int *)pFVar2,
                           (int *)(pFVar9 + 0xc));
        memset((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)(4 - iVar8) << 2);
      }
      else if (4 < iVar8) {
        iVar8 = iVar8 + -4;
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar7;
          }
        }
        else if (iVar8 == 0) goto LAB_14dbfaad4;
        _Dst = (void *)(*(longlong *)&pFVar9->field_0x0 + 0x10);
        iVar6 = (*(int *)&pFVar2->field_0x0 - iVar8) + -4;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar6 << 2);
        }
        *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar2->field_0x0,(int *)(pFVar9 + 0xc))
        ;
      }
LAB_14dbfaad4:
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      **(undefined4 **)(pFVar2 + lVar12) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 4 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 4) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 8 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 8) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 0xc + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = pFVar2 + lVar12;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)(*(longlong *)pFVar2 + 0xc) = uVar1;
    } while ((int)uVar11 < (int)this->_padding_);
  }
  return __return_storage_ptr__;
}

// ResetRestLengths @ 14dc0f750

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::ResetRestLengths
          (FXPBDAnisotropicBendingConstraints *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3)

{
  ERestAngleConstructionType EVar1;
  uint uVar3;
  int *piVar4;
  TArrayView<float_const_,int> *pTVar5;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar6;
  float fVar7;
  undefined8 local_res8;
  TArrayView<float_const_,int> local_58 [2];
  int iVar2;
  
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,XPBDAnisoRestAngleTypeName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    EVar1 = Use3DRestAngles;
  }
  else {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar4,&param_2->LowValueArray);
    EVar1 = (ERestAngleConstructionType)iVar2;
  }
  pTVar6 = &param_2->LowValueArray;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,XPBDAnisoRestAngleTypeName);
  uVar3 = 0;
  if ((piVar4 != (int *)0x0) && (uVar3 = 0, *piVar4 != -1)) {
    uVar3 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar4,pTVar6);
  }
  if ((char)uVar3 == '\0') {
LAB_14dc0f8e3:
    local_res8 = (TVector<float,2>)0x0;
  }
  else {
    if ((uVar3 & 0xff) == 1) {
      piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&param_2->KeyNameIndices,XPBDAnisoFlatnessRatioName);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_2,iVar2,&param_2->HighValueArray);
        local_res8._0_4_ =
             FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar2,pTVar6);
        local_res8._4_4_ = fVar7;
        goto LAB_14dc0f8ef;
      }
    }
    else {
      if ((uVar3 & 0xff) != 2) goto LAB_14dc0f8e3;
      piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&param_2->KeyNameIndices,XPBDAnisoRestAngleName);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_2,iVar2,&param_2->HighValueArray);
        local_res8._0_4_ =
             FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar2,pTVar6);
        local_res8._4_4_ = fVar7;
        goto LAB_14dc0f8ef;
      }
    }
    local_res8 = (TVector<float,2>)0x0;
  }
LAB_14dc0f8ef:
  pTVar5 = GetRestAngleMapFromCollection(this,local_58,param_3,param_2);
  FPBDBendingConstraintsBase::CalculateRestAngles
            ((FPBDBendingConstraintsBase *)this,param_1,(int)this->_padding_,
             *(int *)((longlong)&this->_padding_ + 4),pTVar5,(TVector<float,2> *)&local_res8,EVar1);
  return;
}


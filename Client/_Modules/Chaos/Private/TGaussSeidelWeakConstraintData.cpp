// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~TGaussSeidelWeakConstraintData<float> @ 143a397f0

void __thiscall
Chaos::Softs::TGaussSeidelWeakConstraintData<float>::~TGaussSeidelWeakConstraintData<float>
          (TGaussSeidelWeakConstraintData<float> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TGaussSeidelWeakConstraintData_M_Softs_Chaos__6B_;
  *(undefined ***)&this->MRestLength = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MRestLength).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MIsZeroRestLength = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MIsZeroRestLength).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MNormals = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MNormals).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MIsAnisotropic = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MIsAnisotropic).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MStiffness = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MStiffness).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSecondWeights =
       &___7__TArrayCollectionArray_V__TArray_MV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->MSecondWeights).field_0x8,
             *(int *)&(this->MSecondWeights).field_0x10);
  pvVar1 = *(void **)&(this->MSecondWeights).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWeights =
       &___7__TArrayCollectionArray_V__TArray_MV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->MWeights).field_0x8,
             *(int *)&(this->MWeights).field_0x10);
  pvVar1 = *(void **)&(this->MWeights).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSecondIndices =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&(this->MSecondIndices).field_0x8,
             *(int *)&(this->MSecondIndices).field_0x10);
  pvVar1 = *(void **)&(this->MSecondIndices).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MIndices =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&(this->MIndices).field_0x8,
             *(int *)&(this->MIndices).field_0x10);
  pvVar1 = *(void **)&(this->MIndices).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// GetSingleConstraintData @ 143a6fbe0

FGaussSeidelWeakConstraintSingleData<float> * __thiscall
Chaos::Softs::TGaussSeidelWeakConstraintData<float>::GetSingleConstraintData
          (TGaussSeidelWeakConstraintData<float> *this,
          FGaussSeidelWeakConstraintSingleData<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FGaussSeidelWeakConstraintSingleData<float> *pFVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar6 = (longlong)param_1;
  (__return_storage_ptr__->SingleIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SingleIndices).ArrayNum = 0;
  (__return_storage_ptr__->SingleIndices).ArrayMax = 0;
  (__return_storage_ptr__->SingleSecondIndices).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SingleSecondIndices).ArrayNum = 0;
  (__return_storage_ptr__->SingleSecondIndices).ArrayMax = 0;
  __return_storage_ptr__->SingleStiffness = 0.0;
  (__return_storage_ptr__->SingleWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SingleWeights).ArrayNum = 0;
  (__return_storage_ptr__->SingleWeights).ArrayMax = 0;
  (__return_storage_ptr__->SingleSecondWeights).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SingleSecondWeights).ArrayNum = 0;
  (__return_storage_ptr__->SingleSecondWeights).ArrayMax = 0;
  __return_storage_ptr__->bIsAnisotropic = false;
  *(undefined8 *)&__return_storage_ptr__->SingleNormal = 0;
  *(undefined4 *)&(__return_storage_ptr__->SingleNormal).field_0x8 = 0;
  __return_storage_ptr__->bIsZeroRestLength = false;
  __return_storage_ptr__->RestLength = 0.0;
  if ((uint)this->_padding_ <= (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<uint32>(ConstraintIndex) < MSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelWeakConstraints.h"
                       ,0xf9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((-1 < param_1) && ((uint)param_1 < (uint)this->_padding_)) {
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MIndices).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    lVar7 = lVar6 * 0x10;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&__return_storage_ptr__->SingleIndices,
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&(this->MIndices).field_0x8 + lVar7));
    uVar4 = 0;
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MSecondIndices).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&__return_storage_ptr__->SingleSecondIndices,
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&(this->MSecondIndices).field_0x8 + lVar7));
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MStiffness).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->SingleStiffness =
         *(float *)(*(longlong *)&(this->MStiffness).field_0x8 + lVar6 * 4);
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MWeights).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&__return_storage_ptr__->SingleWeights,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&(this->MWeights).field_0x8 + lVar7));
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MSecondWeights).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&__return_storage_ptr__->SingleSecondWeights,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&(this->MSecondWeights).field_0x8 + lVar7));
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MIsAnisotropic).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->bIsAnisotropic =
         *(bool *)(lVar6 + *(longlong *)&(this->MIsAnisotropic).field_0x8);
    uVar3 = uVar4;
    if (param_1 < *(int *)&(this->MNormals).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    lVar7 = *(longlong *)&(this->MNormals).field_0x8;
    *(undefined8 *)&__return_storage_ptr__->SingleNormal = *(undefined8 *)(lVar7 + lVar6 * 0xc);
    *(undefined4 *)&(__return_storage_ptr__->SingleNormal).field_0x8 =
         *(undefined4 *)(lVar7 + 8 + lVar6 * 0xc);
    if (param_1 < *(int *)&(this->MIsZeroRestLength).field_0x10) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->bIsZeroRestLength =
         *(bool *)(lVar6 + *(longlong *)&(this->MIsZeroRestLength).field_0x8);
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MRestLength).field_0x10) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGaussSeidelWeakConstraintSingleData<float> *)(*pcVar1)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->RestLength =
         *(float *)(*(longlong *)&(this->MRestLength).field_0x8 + lVar6 * 4);
  }
  return __return_storage_ptr__;
}

// SetSingleConstraint @ 143a92f30

void __thiscall
Chaos::Softs::TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
          (TGaussSeidelWeakConstraintData<float> *this,
          FGaussSeidelWeakConstraintSingleData<float> *param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_2;
  uVar8 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MIndices).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar9 = lVar10 * 0x10;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&(this->MIndices).field_0x8 + lVar9),&param_1->SingleIndices);
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MSecondIndices).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&(this->MSecondIndices).field_0x8 + lVar9),&param_1->SingleSecondIndices)
  ;
  fVar1 = param_1->SingleStiffness;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MStiffness).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(float *)(*(longlong *)&(this->MStiffness).field_0x8 + lVar10 * 4) = fVar1;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MWeights).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&(this->MWeights).field_0x8 + lVar9),&param_1->SingleWeights);
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MSecondWeights).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&(this->MSecondWeights).field_0x8 + lVar9),&param_1->SingleSecondWeights)
  ;
  uVar2 = *(undefined8 *)&param_1->SingleNormal;
  uVar3 = *(undefined4 *)&(param_1->SingleNormal).field_0x8;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MNormals).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar9 = *(longlong *)&(this->MNormals).field_0x8;
  *(undefined8 *)(lVar9 + lVar10 * 0xc) = uVar2;
  *(undefined4 *)(lVar9 + 8 + lVar10 * 0xc) = uVar3;
  bVar5 = param_1->bIsAnisotropic;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MIsAnisotropic).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(bool *)(lVar10 + *(longlong *)&(this->MIsAnisotropic).field_0x8) = bVar5;
  bVar5 = param_1->bIsZeroRestLength;
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MIsZeroRestLength).field_0x10) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(bool *)(lVar10 + *(longlong *)&(this->MIsZeroRestLength).field_0x8) = bVar5;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 75

// ~TManagedArray<UE::Math::TVector<float>_> @ 1436f6ff0

void __thiscall
TManagedArray<UE::Math::TVector<float>_>::~TManagedArray<UE::Math::TVector<float>_>
          (TManagedArray<UE::Math::TVector<float>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FLinearColor> @ 1436f7030

void __thiscall
TManagedArray<FLinearColor>::~TManagedArray<FLinearColor>(TManagedArray<FLinearColor> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFLinearColor____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<unsigned_char> @ 14388be20

void __thiscall
TManagedArray<unsigned_char>::~TManagedArray<unsigned_char>(TManagedArray<unsigned_char> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_E__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<int> @ 14388be60

void __thiscall TManagedArray<int>::~TManagedArray<int>(TManagedArray<int> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_H__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<float> @ 14388bea0

void __thiscall TManagedArray<float>::~TManagedArray<float>(TManagedArray<float> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_M__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TIntVector2<unsigned_int>_> @ 14388bee0

void __thiscall
TManagedArray<UE::Math::TIntVector2<unsigned_int>_>::
~TManagedArray<UE::Math::TIntVector2<unsigned_int>_>
          (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TIntVector2_I_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FName> @ 14388bf20

void __thiscall TManagedArray<FName>::~TManagedArray<FName>(TManagedArray<FName> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_VFName____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FString> @ 14388bf60

void __thiscall TManagedArray<FString>::~TManagedArray<FString>(TManagedArray<FString> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_VFString____6B_;
  DestructItems<FString,int>(*(FString **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// Reindex @ 1438ca4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<int>::Reindex
          (TManagedArray<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<int>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar6 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar2 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < (longlong)iVar6) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x18) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)(lVar14 + *(longlong *)&this->field_0x10);
      if (-1 < (int)uVar7) {
        if ((iVar2 <= (int)uVar7) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7863574370055093111>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                               ,0x489,"RemapVal < MaskSize"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&this->field_0x18) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(*(longlong *)&this->field_0x10 + lVar13 * 4);
        if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
          FVar3 = (param_4->Hash).SecondaryData;
          FVar10 = (ForElementType<FSetElementId>)&param_4->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = FVar3;
          }
          iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(param_4->HashSize - 1U & uVar8) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar9 * 0xc) == uVar8) {
                uVar7 = 0;
                if ((int)uVar11 < *(int *)&this->field_0x18) {
                  uVar7 = uVar12;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined4 *)(*(longlong *)&this->field_0x10 + lVar13 * 4) = 0xffffffff;
                goto LAB_1438ca713;
              }
              iVar9 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar9 * 0xc);
            } while (iVar9 != -1);
          }
        }
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
        uVar7 = 0;
        if ((int)uVar11 < *(int *)&this->field_0x18) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar1 = (int *)(*(longlong *)&this->field_0x10 + lVar13 * 4);
        *piVar1 = *piVar1 - iVar9;
LAB_1438ca713:
        uVar7 = 0;
        if ((int)uVar11 < *(int *)&this->field_0x18) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)(*(longlong *)&this->field_0x10 + lVar13 * 4) < -1) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7863574370055093102>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                               ,0x492,"-1 <= this->operator[](Index)"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 4;
    } while (lVar13 < iVar6);
  }
  return;
}

// ReindexFromLookup @ 1438ca830

void __thiscall
TManagedArray<int>::ReindexFromLookup
          (TManagedArray<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  iVar4 = (**(code **)(*(longlong *)this + 0x60))();
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)&this->field_0x10;
      uVar5 = *(uint *)(lVar1 + lVar7 * 4);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(lVar1 + lVar7 * 4) =
             *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}

// SetDefaults @ 1438d1e30

void __thiscall
TManagedArray<int>::SetDefaults(TManagedArray<int> *this,uint param_1,uint param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3) {
    uVar4 = param_1 + param_2;
    for (; param_1 < uVar4; param_1 = param_1 + 1) {
      uVar3 = 0;
      if ((int)param_1 < *(int *)&this->field_0x18) {
        uVar3 = ~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)(*(longlong *)&this->field_0x10 + (longlong)(int)param_1 * 4) = 0xffffffff;
    }
  }
  return;
}

// ~TManagedArray<UE::Math::TBox<double>_> @ 143f8d5d0

void __thiscall
TManagedArray<UE::Math::TBox<double>_>::~TManagedArray<UE::Math::TBox<double>_>
          (TManagedArray<UE::Math::TBox<double>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TBox_N_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TIntVector2<int>_> @ 143f8d610

void __thiscall
TManagedArray<UE::Math::TIntVector2<int>_>::~TManagedArray<UE::Math::TIntVector2<int>_>
          (TManagedArray<UE::Math::TIntVector2<int>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TIntVector2_H_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TIntVector3<int>_> @ 143f8d650

void __thiscall
TManagedArray<UE::Math::TIntVector3<int>_>::~TManagedArray<UE::Math::TIntVector3<int>_>
          (TManagedArray<UE::Math::TIntVector3<int>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TIntVector3_H_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TIntVector4<int>_> @ 143f8d690

void __thiscall
TManagedArray<UE::Math::TIntVector4<int>_>::~TManagedArray<UE::Math::TIntVector4<int>_>
          (TManagedArray<UE::Math::TIntVector4<int>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TIntVector4_H_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TQuat<float>_> @ 143f8d6d0

void __thiscall
TManagedArray<UE::Math::TQuat<float>_>::~TManagedArray<UE::Math::TQuat<float>_>
          (TManagedArray<UE::Math::TQuat<float>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TQuat_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TTransform<float>_> @ 143f8d710

void __thiscall
TManagedArray<UE::Math::TTransform<float>_>::~TManagedArray<UE::Math::TTransform<float>_>
          (TManagedArray<UE::Math::TTransform<float>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TTransform_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TTransform<double>_> @ 143f8d750

void __thiscall
TManagedArray<UE::Math::TTransform<double>_>::~TManagedArray<UE::Math::TTransform<double>_>
          (TManagedArray<UE::Math::TTransform<double>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TTransform_N_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TVector4<float>_> @ 143f8d790

void __thiscall
TManagedArray<UE::Math::TVector4<float>_>::~TManagedArray<UE::Math::TVector4<float>_>
          (TManagedArray<UE::Math::TVector4<float>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TVector4_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FGeometryCollectionSection> @ 143f8d7d0

void __thiscall
TManagedArray<FGeometryCollectionSection>::~TManagedArray<FGeometryCollectionSection>
          (TManagedArray<FGeometryCollectionSection> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFGeometryCollectionSection____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f8d810

void __thiscall
TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_V__TArray_HV__TSizedDefaultAllocator__0CA_______6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f8d860

void __thiscall
TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_V__TArray_MV__TSizedDefaultAllocator__0CA_______6B_;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 143f8d8b0

void __thiscall
TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> @ 143f8d900

void __thiscall
TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_V__PMatrix_N_02_02_Chaos__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_> @ 143f8d950

void __thiscall
TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
::
~TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_____V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> @ 143f8d9a0

void __thiscall
TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
~TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
          (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,int>
            (*(TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> **)
              &this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::FLinearCurve> @ 143f8d9f0

void __thiscall
TManagedArray<Chaos::FLinearCurve>::~TManagedArray<Chaos::FLinearCurve>
          (TManagedArray<Chaos::FLinearCurve> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_VFLinearCurve_Chaos____6B_;
  DestructItems<Chaos::FLinearCurve,int>
            (*(FLinearCurve **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// Convert @ 143fa6ae0

void __thiscall
TManagedArray<UE::Math::TTransform<float>_>::Convert
          (TManagedArray<UE::Math::TTransform<float>_> *this,FManagedArrayBase *param_1)

{
  float *pfVar1;
  double *pdVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  
  pcVar3 = *(code **)(*(longlong *)this + 0x78);
  lVar20 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  lVar21 = (*pcVar3)(this);
  if ((lVar20 == lVar21) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewArray.GetTypeSize() != GetTypeSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                          ,0x4cc,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar20 = (**(code **)(*(longlong *)this + 0x78))(this);
  lVar21 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  if ((lVar21 != lVar20 * 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewArray.GetTypeSize() == 2 * GetTypeSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                          ,0x4cd,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar20 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  if ((lVar20 != 0x60) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewArray.GetTypeSize() == sizeof(FTransform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                          ,0x4ce,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar18 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
  (*(code *)**(undefined8 **)this)(this,iVar18);
  uVar22 = 0;
  if (0 < iVar18) {
    lVar20 = 0;
    lVar21 = 0;
    lVar23 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar22 < *(int *)&param_1[1].bIsDirty) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar4 = param_1[1]._padding_;
      pdVar2 = (double *)(lVar23 + 0x10 + lVar4);
      dVar5 = *pdVar2;
      dVar6 = pdVar2[1];
      dVar7 = *(double *)(lVar23 + lVar4);
      dVar8 = ((double *)(lVar23 + lVar4))[1];
      pdVar2 = (double *)(lVar23 + 0x20 + lVar4);
      dVar9 = *pdVar2;
      dVar10 = pdVar2[1];
      pdVar2 = (double *)(lVar23 + 0x40 + lVar4);
      dVar11 = *pdVar2;
      dVar12 = pdVar2[1];
      pdVar2 = (double *)(lVar23 + 0x30 + lVar4);
      dVar13 = *pdVar2;
      dVar14 = pdVar2[1];
      pdVar2 = (double *)(lVar23 + 0x50 + lVar4);
      dVar15 = *pdVar2;
      dVar16 = pdVar2[1];
      uVar19 = 0;
      if ((int)uVar22 < *(int *)&this->field_0x18) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar4 = *(longlong *)&this->field_0x10;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 1;
      lVar23 = lVar23 + 0x60;
      pfVar1 = (float *)(lVar4 + lVar20);
      *pfVar1 = (float)dVar7;
      pfVar1[1] = (float)dVar8;
      pfVar1[2] = (float)dVar5;
      pfVar1[3] = (float)dVar6;
      pfVar1 = (float *)(lVar4 + 0x10 + lVar20);
      *pfVar1 = (float)dVar9;
      pfVar1[1] = (float)dVar10;
      pfVar1[2] = (float)dVar13;
      pfVar1[3] = (float)dVar14;
      pfVar1 = (float *)(lVar4 + 0x20 + lVar20);
      *pfVar1 = (float)dVar11;
      pfVar1[1] = (float)dVar12;
      pfVar1[2] = (float)dVar15;
      pfVar1[3] = (float)dVar16;
      lVar20 = lVar20 + 0x30;
    } while (lVar21 < iVar18);
  }
  return;
}

// Convert @ 143fa6d40

void __thiscall TManagedArray<bool>::Convert(TManagedArray<bool> *this,FManagedArrayBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  
  pcVar2 = *(code **)(*(longlong *)this + 0x78);
  lVar6 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  lVar7 = (*pcVar2)(this);
  if ((lVar6 == lVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArray.GetTypeSize() != GetTypeSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                         ,0x4df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  if ((lVar6 != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArray.GetTypeSize() == sizeof(int32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                         ,0x4e0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
  (*(code *)**(undefined8 **)this)(this,iVar4);
  uVar11 = 0;
  if (0 < iVar4) {
    uVar10 = 1;
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&param_1[1].bIsDirty) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)(param_1[1]._padding_ + lVar6 * 4);
      if ((((int)uVar11 < 0) || (*(int *)&this->field_0x28 <= (int)uVar11)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar9 = *(undefined1 **)&this->field_0x20;
      if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
        puVar9 = &this->field_0x10;
      }
      uVar5 = uVar11;
      if ((int)uVar11 < 0) {
        uVar5 = uVar11 + 0x1f;
      }
      if (iVar1 == -1) {
        uVar8 = *(uint *)(puVar9 + (longlong)((int)uVar5 >> 5) * 4) & ~uVar10;
      }
      else {
        uVar8 = *(uint *)(puVar9 + (longlong)((int)uVar5 >> 5) * 4) | uVar10;
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      lVar6 = lVar6 + 1;
      *(uint *)(puVar9 + (longlong)((int)uVar5 >> 5) * 4) = uVar8;
    } while (lVar6 < iVar4);
  }
  return;
}

// Reindex @ 143fbb320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<UE::Math::TIntVector2<int>_>::Reindex
          (TManagedArray<UE::Math::TIntVector2<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_50;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<UE::Math::TIntVector2<int>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar8 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar4 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < (longlong)iVar8) {
    lVar14 = 0;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x18) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = 0;
      local_50 = 2;
      lVar1 = *(longlong *)&this->field_0x10 + lVar14 * 8;
      do {
        iVar10 = *(int *)(lVar1 + lVar16 * 4);
        if (-1 < iVar10) {
          if ((iVar4 <= iVar10) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7863574370055092832>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                 ,0x5a0,"RemapVal[i] < MaskSize"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar3 = (lVar16 + lVar14 * 2) * 4;
          uVar9 = *(uint *)(lVar3 + *(longlong *)&this->field_0x10);
          if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
            FVar5 = (param_4->Hash).SecondaryData;
            FVar12 = (ForElementType<FSetElementId>)&param_4->Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar5;
            }
            iVar10 = *(int *)((longlong)FVar12 + (ulonglong)(param_4->HashSize - 1U & uVar9) * 4);
            if (iVar10 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar10 * 0xc) == uVar9) {
                  uVar9 = 0;
                  if ((int)uVar13 < *(int *)&this->field_0x18) {
                    uVar9 = uVar15;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(undefined4 *)(lVar3 + *(longlong *)&this->field_0x10) = 0xffffffff;
                  goto LAB_143fbb5b7;
                }
                iVar10 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar10 * 0xc);
              } while (iVar10 != -1);
            }
          }
          uVar9 = *(uint *)(lVar1 + lVar16 * 4);
          uVar11 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
          uVar9 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          piVar2 = (int *)(lVar3 + *(longlong *)&this->field_0x10);
          *piVar2 = *piVar2 - iVar10;
LAB_143fbb5b7:
          uVar9 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (-2 < *(int *)(lVar3 + *(longlong *)&this->field_0x10)) {
            uVar9 = 0;
            if ((int)uVar13 < *(int *)&this->field_0x18) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)(lVar3 + *(longlong *)&this->field_0x10) <= *param_2) goto LAB_143fbb689;
          }
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7863574370055092823>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                             ,0x5a9,
                             "-1 <= this->operator[](Index)[i] && this->operator[](Index)[i] <= FinalSize"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
LAB_143fbb689:
        lVar16 = lVar16 + 1;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  return;
}

// Reindex @ 143fbb740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<UE::Math::TIntVector3<int>_>::Reindex
          (TManagedArray<UE::Math::TIntVector3<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<UE::Math::TIntVector3<int>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar6 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar2 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < (longlong)iVar6) {
    local_48 = 0;
    local_60 = 0;
    local_68 = 0;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x18) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = *(longlong *)&this->field_0x10 + local_48;
      local_58 = 3;
      lVar16 = 0;
      lVar14 = local_68;
      do {
        iVar8 = *(int *)(lVar10 + lVar16 * 4);
        if (-1 < iVar8) {
          if ((iVar2 <= iVar8) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7863574370055092909>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                 ,0x553,"RemapVal[i] < MaskSize"), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = *(uint *)(*(longlong *)&this->field_0x10 + lVar14 * 4);
          if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
            FVar3 = (param_4->Hash).SecondaryData;
            FVar11 = (ForElementType<FSetElementId>)&param_4->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar11 = FVar3;
            }
            iVar8 = *(int *)((longlong)FVar11 + (ulonglong)(param_4->HashSize - 1U & uVar7) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar8 * 0xc) == uVar7) {
                  uVar7 = 0;
                  if ((int)uVar13 < *(int *)&this->field_0x18) {
                    uVar7 = uVar15;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar12 = (lVar16 + local_68) * 4;
                  *(undefined4 *)(lVar12 + *(longlong *)&this->field_0x10) = 0xffffffff;
                  goto LAB_143fbb9e5;
                }
                iVar8 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar8 * 0xc);
              } while (iVar8 != -1);
            }
          }
          uVar7 = *(uint *)(lVar10 + lVar16 * 4);
          uVar9 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
          uVar7 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar12 = (local_68 + lVar16) * 4;
          piVar1 = (int *)(*(longlong *)&this->field_0x10 + lVar12);
          *piVar1 = *piVar1 - iVar8;
LAB_143fbb9e5:
          uVar7 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (-2 < *(int *)(lVar12 + *(longlong *)&this->field_0x10)) {
            uVar7 = 0;
            if ((int)uVar13 < *(int *)&this->field_0x18) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(lVar12 + *(longlong *)&this->field_0x10) <= *param_2) goto LAB_143fbbabc;
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7863574370055092900>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                             ,0x55c,
                             "-1 <= this->operator[](Index)[i] && this->operator[](Index)[i] <= FinalSize"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
LAB_143fbbabc:
        lVar14 = lVar14 + 1;
        lVar16 = lVar16 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
      local_48 = local_48 + 0xc;
      local_60 = local_60 + 1;
      local_68 = local_68 + 3;
      uVar13 = uVar13 + 1;
    } while (local_60 < iVar6);
  }
  return;
}

// Reindex @ 143fbbbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<UE::Math::TIntVector4<int>_>::Reindex
          (TManagedArray<UE::Math::TIntVector4<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_58;
  longlong local_48;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<UE::Math::TIntVector4<int>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar7 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar3 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < (longlong)iVar7) {
    local_48 = 0;
    local_58 = 0;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x18) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = 4;
      lVar11 = *(longlong *)&this->field_0x10 + local_48;
      lVar16 = 0;
      do {
        iVar9 = *(int *)(lVar11 + lVar16 * 4);
        if (-1 < iVar9) {
          if ((iVar3 <= iVar9) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7863574370055092681>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                 ,0x637,"RemapVal[i] < MaskSize"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar8 = uVar15;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar2 = (lVar16 + local_58 * 4) * 4;
          uVar8 = *(uint *)(lVar2 + *(longlong *)&this->field_0x10);
          if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
            FVar4 = (param_4->Hash).SecondaryData;
            FVar12 = (ForElementType<FSetElementId>)&param_4->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar4;
            }
            iVar9 = *(int *)((longlong)FVar12 + (ulonglong)(param_4->HashSize - 1U & uVar8) * 4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar9 * 0xc) == uVar8) {
                  uVar8 = 0;
                  if ((int)uVar13 < *(int *)&this->field_0x18) {
                    uVar8 = uVar15;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  *(undefined4 *)(lVar2 + *(longlong *)&this->field_0x10) = 0xffffffff;
                  goto LAB_143fbbe4c;
                }
                iVar9 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar9 * 0xc);
              } while (iVar9 != -1);
            }
          }
          uVar8 = *(uint *)(lVar11 + lVar16 * 4);
          uVar10 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
          uVar8 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar8 = uVar15;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          piVar1 = (int *)(lVar2 + *(longlong *)&this->field_0x10);
          *piVar1 = *piVar1 - iVar9;
LAB_143fbbe4c:
          uVar8 = 0;
          if ((int)uVar13 < *(int *)&this->field_0x18) {
            uVar8 = uVar15;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (-2 < *(int *)(lVar2 + *(longlong *)&this->field_0x10)) {
            uVar8 = 0;
            if ((int)uVar13 < *(int *)&this->field_0x18) {
              uVar8 = uVar15;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(int *)(lVar2 + *(longlong *)&this->field_0x10) <= *param_2) goto LAB_143fbbf1e;
          }
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7863574370055092672>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                             ,0x640,
                             "-1 <= this->operator[](Index)[i] && this->operator[](Index)[i] <= FinalSize"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
LAB_143fbbf1e:
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      local_48 = local_48 + 0x10;
      local_58 = local_58 + 1;
      uVar13 = uVar13 + 1;
    } while (local_58 < iVar7);
  }
  return;
}

// Reindex @ 143fbbff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>::Reindex
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong local_50;
  longlong local_48;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar6 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar2 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < (longlong)iVar6) {
    local_48 = 0;
    local_50 = 0;
    do {
      uVar14 = ~uVar16 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar16 < *(int *)&this->field_0x18) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = 0;
      plVar15 = (longlong *)(*(longlong *)&this->field_0x10 + local_48);
      iVar9 = (int)plVar15[1];
      if (0 < iVar9) {
        lVar17 = 0;
        do {
          uVar12 = ~uVar13 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar13 < iVar9) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (-1 < *(int *)(lVar17 + *plVar15)) {
            uVar7 = 0;
            if ((int)uVar13 < (int)plVar15[1]) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((iVar2 <= *(int *)(lVar17 + *plVar15)) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_7863574370055092604>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                   ,0x684,"RemapValArray[ArrayIndex] < MaskSize"), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = 0;
            if ((int)uVar16 < *(int *)&this->field_0x18) {
              uVar7 = uVar14;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar11 = (longlong *)(local_48 + *(longlong *)&this->field_0x10);
            uVar7 = 0;
            if ((int)uVar13 < (int)plVar11[1]) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = *(uint *)(lVar17 + *plVar11);
            if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
              FVar3 = (param_4->Hash).SecondaryData;
              FVar10 = (ForElementType<FSetElementId>)&param_4->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar10 = FVar3;
              }
              iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(param_4->HashSize - 1U & uVar7) * 4);
              if (iVar9 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar9 * 0xc) == uVar7) {
                    uVar7 = 0;
                    if ((int)uVar16 < *(int *)&this->field_0x18) {
                      uVar7 = uVar14;
                    }
                    if ((uVar7 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    plVar11 = (longlong *)(local_48 + *(longlong *)&this->field_0x10);
                    uVar7 = 0;
                    if ((int)uVar13 < (int)plVar11[1]) {
                      uVar7 = uVar12;
                    }
                    if ((uVar7 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    *(undefined4 *)(lVar17 + *plVar11) = 0xffffffff;
                    goto LAB_143fbc3f0;
                  }
                  iVar9 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar9 * 0xc);
                } while (iVar9 != -1);
              }
            }
            uVar7 = 0;
            if ((int)uVar13 < (int)plVar15[1]) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = *(uint *)(lVar17 + *plVar15);
            uVar8 = 0;
            if ((int)uVar7 < param_1->ArrayNum) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
            uVar7 = 0;
            if ((int)uVar16 < *(int *)&this->field_0x18) {
              uVar7 = uVar14;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar11 = (longlong *)(local_48 + *(longlong *)&this->field_0x10);
            uVar7 = 0;
            if ((int)uVar13 < (int)plVar11[1]) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            piVar1 = (int *)(lVar17 + *plVar11);
            *piVar1 = *piVar1 - iVar9;
LAB_143fbc3f0:
            uVar7 = 0;
            if ((int)uVar16 < *(int *)&this->field_0x18) {
              uVar7 = uVar14;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar11 = (longlong *)(local_48 + *(longlong *)&this->field_0x10);
            uVar7 = 0;
            if ((int)uVar13 < (int)plVar11[1]) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (-2 < *(int *)(lVar17 + *plVar11)) {
              uVar7 = 0;
              if ((int)uVar16 < *(int *)&this->field_0x18) {
                uVar7 = uVar14;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              plVar11 = (longlong *)(local_48 + *(longlong *)&this->field_0x10);
              uVar7 = 0;
              if ((int)uVar13 < (int)plVar11[1]) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)(lVar17 + *plVar11) <= *param_2) goto LAB_143fbc571;
            }
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7863574370055092595>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                               ,0x68d,
                               "-1 <= this->operator[](Index)[ArrayIndex] && this->operator[](Index)[ArrayIndex] <= FinalSize"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
LAB_143fbc571:
          iVar9 = (int)plVar15[1];
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 4;
        } while ((int)uVar13 < iVar9);
      }
      local_50 = local_50 + 1;
      local_48 = local_48 + 0x10;
      uVar16 = uVar16 + 1;
    } while (local_50 < iVar6);
  }
  return;
}

// ReindexFromLookup @ 143fbc680

void __thiscall
TManagedArray<UE::Math::TIntVector2<int>_>::ReindexFromLookup
          (TManagedArray<UE::Math::TIntVector2<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  iVar4 = (**(code **)(*(longlong *)this + 0x60))();
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(*(longlong *)&this->field_0x10 + lVar7 * 8);
      puVar1 = (undefined4 *)(*(longlong *)&this->field_0x10 + lVar7 * 8);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *puVar1 = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
      }
      uVar5 = puVar1[1];
      if (-1 < (int)uVar5) {
        uVar6 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1[1] = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}

// ReindexFromLookup @ 143fbc800

void __thiscall
TManagedArray<UE::Math::TIntVector3<int>_>::ReindexFromLookup
          (TManagedArray<UE::Math::TIntVector3<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = 0;
  iVar3 = (**(code **)(*(longlong *)this + 0x60))();
  lVar8 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x18) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar6 = (uint *)(*(longlong *)&this->field_0x10 + lVar9);
      uVar4 = *puVar6;
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *puVar6 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar4 = puVar6[1];
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6[1] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar4 = puVar6[2];
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6[2] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0xc;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// ReindexFromLookup @ 143fbc9d0

void __thiscall
TManagedArray<UE::Math::TIntVector4<int>_>::ReindexFromLookup
          (TManagedArray<UE::Math::TIntVector4<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  iVar3 = (**(code **)(*(longlong *)this + 0x60))();
  lVar10 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x18) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar6 = (uint *)(*(longlong *)&this->field_0x10 + lVar9);
      uVar4 = *puVar6;
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *puVar6 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      piVar8 = &param_1->ArrayNum;
      uVar4 = puVar6[1];
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < *piVar8) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6[1] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar4 = puVar6[2];
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < *piVar8) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6[2] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar4 = puVar6[3];
      if (-1 < (int)uVar4) {
        uVar5 = 0;
        if ((int)uVar4 < *piVar8) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6[3] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// ReindexFromLookup @ 143fbcc10

void __thiscall
TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>::ReindexFromLookup
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar13 = 0;
  iVar4 = (**(code **)(*(longlong *)this + 0x60))();
  lVar10 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x18) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = 0;
      plVar8 = (longlong *)(*(longlong *)&this->field_0x10 + lVar11);
      iVar4 = (int)plVar8[1];
      if (0 < iVar4) {
        lVar12 = 0;
        do {
          uVar9 = ~uVar7 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar7 < iVar4) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (-1 < *(int *)(lVar12 + *plVar8)) {
            uVar5 = 0;
            if ((int)uVar7 < (int)plVar8[1]) {
              uVar5 = uVar9;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar5 = *(uint *)(lVar12 + *plVar8);
            uVar6 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar1 = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
            uVar5 = 0;
            if ((int)uVar7 < (int)plVar8[1]) {
              uVar5 = uVar9;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(lVar12 + *plVar8) = uVar1;
          }
          iVar4 = (int)plVar8[1];
          uVar7 = uVar7 + 1;
          lVar12 = lVar12 + 4;
        } while ((int)uVar7 < iVar4);
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// SetDefaults @ 143fc80c0

void __thiscall
TManagedArray<UE::Math::TIntVector2<int>_>::SetDefaults
          (TManagedArray<UE::Math::TIntVector2<int>_> *this,uint param_1,uint param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3) {
    uVar4 = param_1 + param_2;
    for (; param_1 < uVar4; param_1 = param_1 + 1) {
      uVar3 = 0;
      if ((int)param_1 < *(int *)&this->field_0x18) {
        uVar3 = ~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined8 *)(*(longlong *)&this->field_0x10 + (longlong)(int)param_1 * 8) =
           0xffffffffffffffff;
    }
  }
  return;
}

// SetDefaults @ 143fc8170

void __thiscall
TManagedArray<UE::Math::TIntVector3<int>_>::SetDefaults
          (TManagedArray<UE::Math::TIntVector3<int>_> *this,uint param_1,uint param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3) {
    uVar5 = param_1 + param_2;
    for (; param_1 < uVar5; param_1 = param_1 + 1) {
      uVar4 = 0;
      if ((int)param_1 < *(int *)&this->field_0x18) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)&this->field_0x10;
      *(undefined8 *)(lVar1 + (longlong)(int)param_1 * 0xc) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 8 + (longlong)(int)param_1 * 0xc) = 0xffffffff;
    }
  }
  return;
}

// SetDefaults @ 143fc8220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TManagedArray<UE::Math::TIntVector4<int>_>::SetDefaults
          (TManagedArray<UE::Math::TIntVector4<int>_> *this,uint param_1,uint param_2,bool param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = _UNK_15060db28;
  uVar3 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (param_3) {
    uVar7 = param_1 + param_2;
    for (; param_1 < uVar7; param_1 = param_1 + 1) {
      uVar6 = 0;
      if ((int)param_1 < *(int *)&this->field_0x18) {
        uVar6 = ~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = (undefined8 *)(*(longlong *)&this->field_0x10 + (longlong)(int)param_1 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
    }
  }
  return;
}

// ~TManagedArray<TObjectPtr<UObject>_> @ 143fd7280

void __thiscall
TManagedArray<TObjectPtr<UObject>_>::~TManagedArray<TObjectPtr<UObject>_>
          (TManagedArray<TObjectPtr<UObject>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TObjectPtr_VUObject______6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TVector2<float>_> @ 143fd72c0

void __thiscall
TManagedArray<UE::Math::TVector2<float>_>::~TManagedArray<UE::Math::TVector2<float>_>
          (TManagedArray<UE::Math::TVector2<float>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TVector2_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<UE::Math::TVector<double>_> @ 143fd7300

void __thiscall
TManagedArray<UE::Math::TVector<double>_>::~TManagedArray<UE::Math::TVector<double>_>
          (TManagedArray<UE::Math::TVector<double>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TVector_N_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd7340

void __thiscall
TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
~TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______6B_;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// Reindex @ 143ff3cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Reindex
          (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  uint local_160 [2];
  uint local_158 [2];
  longlong local_150;
  longlong local_148;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_140;
  int local_138;
  int local_134;
  int local_130 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_128;
  longlong local_120;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140 = this;
  local_128 = param_3;
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  uVar14 = 0;
  local_164 = 0;
  iVar8 = (**(code **)(*(longlong *)this + 0x60))(this);
  local_120 = (longlong)iVar8;
  if (0 < local_120) {
    local_148 = 0;
    local_150 = 0;
    do {
      lVar10 = local_148;
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&this->field_0x18) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar5 = local_128;
      this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (*(longlong *)&this->field_0x10 + lVar10);
      pFVar11 = (local_128->AllocatorInstance).Data;
      iVar8 = local_128->ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar8 * 4;
      while( true ) {
        if (pTVar5->ArrayNum != iVar8) {
          local_168 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_168);
        }
        pTVar4 = local_140;
        if (pFVar11 == pFVar1) break;
        local_160[0] = *(uint *)pFVar11;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (this_00,local_160[0],(int *)local_160);
        }
        pFVar11 = pFVar11 + 4;
      }
      uVar12 = 0;
      uVar13 = uVar12;
      if ((int)local_164 < *(int *)&local_140->field_0x18) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 (local_148 + *(longlong *)&pTVar4->field_0x10));
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
        *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
        if (*(int *)&(this_00->Elements).field_0xc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)&(this_00->Elements).field_0xc);
        }
        *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      }
      uVar14 = local_70;
      iStack_110 = 0;
      uStack_10c = 1;
      uStack_fc = uVar12;
      if (local_70 != 0) {
        puVar15 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar15 = local_78;
        }
        uVar13 = *puVar15;
        while (uVar13 == 0) {
          lVar10 = (longlong)iStack_110;
          uVar12 = uVar12 + 0x20;
          iStack_110 = iStack_110 + 1;
          uStack_fc = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_110)
          goto LAB_143ff3f51;
          uVar13 = puVar15[lVar10 + 1];
        }
        uStack_10c = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_10c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_138 = (int)lVar10;
        uStack_fc = (uVar12 - 1) + local_138;
        if ((int)local_70 < (int)uStack_fc) {
          uStack_fc = local_70;
        }
      }
LAB_143ff3f51:
      uStack_f4 = local_9c;
      local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar13 = local_70 & 0xffffffe0;
      iStack_f0 = local_98._8_4_ - local_64;
      TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)local_70 >> 5;
      TStack_e0._28_4_ = local_9c;
      TStack_e0.BaseBitIndex = uVar12;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      bVar9 = (byte)local_70;
      local_118 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98;
      local_f8 = uVar12;
      local_e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98;
      TStack_e0.Array = local_108;
      if (((int)local_70 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar14 != local_70) {
        puVar15 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar15 = local_78;
        }
        uVar14 = -1 << (bVar9 & 0x1f) & puVar15[iVar8];
        while (uVar14 == 0) {
          lVar10 = (longlong)iVar8;
          uVar13 = uVar13 + 0x20;
          iVar8 = iVar8 + 1;
          uVar14 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_143ff4051;
          uVar14 = puVar15[lVar10 + 1];
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_134 = (int)lVar10;
        uVar14 = local_134 + -1 + uVar13;
        if ((int)local_70 < (int)uVar14) {
          uVar14 = local_70;
        }
      }
LAB_143ff4051:
      while( true ) {
        pTVar6 = local_e8;
        if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
            (int)uStack_c0) {
          local_167[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
        }
        if (((TStack_e0.CurrentBitIndex == uVar14) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (pTVar6 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98)) break;
        uVar12 = *(uint *)(*(longlong *)&pTVar6->Elements +
                          (longlong)TStack_e0.CurrentBitIndex * 0xc);
        if (-1 < (int)uVar12) {
          uVar13 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar12 = uVar12 - *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
        }
        local_158[0] = uVar12;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,local_130,(bool *)local_158);
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_150 = local_150 + 1;
      uVar14 = local_164 + 1;
      local_148 = local_148 + 0x50;
      this = local_140;
      local_164 = uVar14;
    } while (local_150 < local_120);
  }
  return;
}

// ReindexFromLookup @ 143ff4540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::ReindexFromLookup
          (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  uint uVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  uint uVar12;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  uint local_154;
  longlong local_150;
  uint local_148 [2];
  longlong local_140;
  int local_138;
  int local_134;
  int local_130 [2];
  longlong local_128;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_120;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_154 = 0;
  local_120 = this;
  iVar5 = (**(code **)(*(longlong *)this + 0x60))();
  local_128 = (longlong)iVar5;
  if (0 < local_128) {
    local_150 = 0;
    local_140 = 0;
    uVar9 = 0;
    do {
      lVar7 = local_140;
      uVar12 = 0;
      uVar11 = 0;
      uVar8 = uVar11;
      if ((int)uVar9 < *(int *)&this->field_0x18) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (*(longlong *)&this->field_0x10 + lVar7);
      uVar8 = uVar11;
      if ((int)uVar9 < *(int *)&this->field_0x18) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 (*(longlong *)&this->field_0x10 + lVar7));
      if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_01);
        *(undefined4 *)&(this_01->Elements).field_0x8 = 0;
        if (*(int *)&(this_01->Elements).field_0xc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_01,0,(int *)&(this_01->Elements).field_0xc);
        }
        *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
        *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
      }
      uVar9 = local_70;
      uStack_10c = 1;
      uStack_fc = uVar11;
      uStack_110 = uVar12;
      if (local_70 != 0) {
        pTVar10 = this_00;
        if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar10 = local_78;
        }
        uVar8 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
        uVar11 = uVar12;
        while (uVar8 == 0) {
          lVar7 = (longlong)(int)uStack_110;
          uVar11 = uVar11 + 0x20;
          uStack_110 = uStack_110 + 1;
          uStack_fc = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_110)
          goto LAB_143ff4763;
          uVar8 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar7 * 4);
        }
        uStack_10c = -uVar8 & uVar8;
        uVar1 = (ulonglong)uStack_10c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_138 = (int)lVar7;
        uStack_fc = (uVar11 - 1) + local_138;
        if ((int)local_70 < (int)uStack_fc) {
          uStack_fc = local_70;
        }
      }
LAB_143ff4763:
      local_118 = (longlong *)local_98;
      uStack_f4 = local_9c;
      uVar8 = local_70 & 0xffffffe0;
      iStack_f0 = local_98._8_4_ - local_64;
      TStack_e0._padding_ = CONCAT44(uStack_10c,uStack_110);
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar5 = (int)local_70 >> 5;
      TStack_e0._28_4_ = local_9c;
      TStack_e0.BaseBitIndex = uVar11;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      bVar6 = (byte)local_70;
      local_108 = this_00;
      local_f8 = uVar11;
      local_e8 = local_118;
      TStack_e0.Array = this_00;
      if (((int)local_70 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != local_70) {
        pTVar10 = this_00;
        if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar10 = local_78;
        }
        uVar9 = -1 << (bVar6 & 0x1f) &
                *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)iVar5 * 4);
        while (uVar9 == 0) {
          lVar7 = (longlong)iVar5;
          uVar8 = uVar8 + 0x20;
          iVar5 = iVar5 + 1;
          uVar9 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
          goto LAB_143ff4870;
          uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar7 * 4);
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_134 = (int)lVar7;
        uVar9 = local_134 + -1 + uVar8;
        if ((int)local_70 < (int)uVar9) {
          uVar9 = local_70;
        }
      }
LAB_143ff4870:
      while( true ) {
        plVar3 = local_e8;
        if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
          local_158[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
        }
        if (((TStack_e0.CurrentBitIndex == uVar9) && (TStack_e0.Array == this_00)) &&
           (plVar3 == (longlong *)local_98)) break;
        uVar11 = *(uint *)(*plVar3 + (longlong)TStack_e0.CurrentBitIndex * 0xc);
        if (-1 < (int)uVar11) {
          uVar8 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar11 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
        }
        local_148[0] = uVar11;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_01,local_130,(bool *)local_148);
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar5 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
      }
      if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_154 = local_154 + 1;
      local_150 = local_150 + 1;
      local_140 = local_140 + 0x50;
      this = local_120;
      uVar9 = local_154;
    } while (local_150 < local_128);
  }
  return;
}

// ~TManagedArray<TRefCountPtr<Chaos::FConvex>_> @ 144012c70

void __thiscall
TManagedArray<TRefCountPtr<Chaos::FConvex>_>::~TManagedArray<TRefCountPtr<Chaos::FConvex>_>
          (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_V__TRefCountPtr_VFConvex_Chaos______6B_;
  DestructItems<TRefCountPtr<Chaos::FConvex>,int>
            (*(TRefCountPtr<Chaos::FConvex> **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<double> @ 144069b70

void __thiscall TManagedArray<double>::~TManagedArray<double>(TManagedArray<double> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_N__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_*> @ 144069bb0

void __thiscall
TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_*>::
~TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_*>
          (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_*> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_PEAV__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*> @ 144069bf0

void __thiscall
TManagedArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*>::
~TManagedArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*>
          (TManagedArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_PEAV__TPBDGeometryCollectionParticleHandleImp_N_02_00_Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*> @ 144069c30

void __thiscall
TManagedArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>::
~TManagedArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>
          (TManagedArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_PEAV__TPBDRigidClusteredParticleHandleImp_N_02_00_Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> @ 144069c70

void __thiscall
TManagedArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>::
~TManagedArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
          (TManagedArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_PEAV__TPBDRigidParticleHandleImp_N_02_00_Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::FImplicitObject_*> @ 144069cb0

void __thiscall
TManagedArray<Chaos::FImplicitObject_*>::~TManagedArray<Chaos::FImplicitObject_*>
          (TManagedArray<Chaos::FImplicitObject_*> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_PEAVFImplicitObject_Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FGeometryCollectionBoneNode> @ 144069cf0

void __thiscall
TManagedArray<FGeometryCollectionBoneNode>::~TManagedArray<FGeometryCollectionBoneNode>
          (TManagedArray<FGeometryCollectionBoneNode> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFGeometryCollectionBoneNode____6B_;
  DestructItems<FGeometryCollectionBoneNode,int>
            (*(FGeometryCollectionBoneNode **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FGuid> @ 144069d40

void __thiscall TManagedArray<FGuid>::~TManagedArray<FGuid>(TManagedArray<FGuid> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFGuid____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<FSoftObjectPath> @ 144069d80

void __thiscall
TManagedArray<FSoftObjectPath>::~TManagedArray<FSoftObjectPath>
          (TManagedArray<FSoftObjectPath> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFSoftObjectPath____6B_;
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::PMatrix<double,3,3>_> @ 144069dd0

void __thiscall
TManagedArray<Chaos::PMatrix<double,3,3>_>::~TManagedArray<Chaos::PMatrix<double,3,3>_>
          (TManagedArray<Chaos::PMatrix<double,3,3>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_V__PMatrix_N_02_02_Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> @ 144069e10

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_U__TIntVector2_H_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 144069e60

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 144069eb0

void __thiscall
TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 144069f00

void __thiscall
TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
~TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> @ 144069f50

void __thiscall
TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>::
~TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>
          (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_V__TRefCountPtr_VFImplicitObject_Chaos______6B_;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            (*(TRefCountPtr<Chaos::FImplicitObject> **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> @ 144069fa0

void __thiscall
TManagedArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::
~TManagedArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>
          (TManagedArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this)

{
  *(undefined ***)this =
       &___7__TManagedArrayBase_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> @ 144069fe0

void __thiscall
TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_>::
~TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_>
          (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_V__TSharedPtr_VFImplicitObject_Chaos___00____6B_;
  DestructItems<TSharedPtr<Chaos::FImplicitObject,1>,int>
            (*(TSharedPtr<Chaos::FImplicitObject,1> **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TSharedPtr<Chaos::FImplicitObject,0>_> @ 14406a030

void __thiscall
TManagedArray<TSharedPtr<Chaos::FImplicitObject,0>_>::
~TManagedArray<TSharedPtr<Chaos::FImplicitObject,0>_>
          (TManagedArray<TSharedPtr<Chaos::FImplicitObject,0>_> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_V__TSharedPtr_VFImplicitObject_Chaos___0A_____6B_;
  DestructItems<TSharedPtr<Chaos::FImplicitObject,0>,int>
            (*(TSharedPtr<Chaos::FImplicitObject,0> **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>_> @ 14406a080

void __thiscall
TManagedArray<TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>_>
::
~TManagedArray<TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>_>
          (TManagedArray<TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_____U__TDefaultDelete_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA___________6B_
  ;
  DestructItems<TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>,int>
            (*(TUniquePtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
               **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>_> @ 14406a0d0

void __thiscall
TManagedArray<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>_>
::
~TManagedArray<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>_>
          (TManagedArray<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_V__TGeometryParticle_N_02_Chaos__U__TDefaultDelete_V__TGeometryParticle_N_02_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>,int>
            (*(TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
               **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>_> @ 14406a120

void __thiscall
TManagedArray<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>_>
::
~TManagedArray<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>_>
          (TManagedArray<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_V__TPBDRigidParticle_N_02_Chaos__U__TDefaultDelete_V__TPBDRigidParticle_N_02_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>,int>
            (*(TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
               **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_>_> @ 14406a170

void __thiscall
TManagedArray<TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_>_>::
~TManagedArray<TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_>_>
          (TManagedArray<TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_VFConvex_Chaos__U__TDefaultDelete_VFConvex_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_>,int>
            (*(TUniquePtr<Chaos::FConvex,TDefaultDelete<Chaos::FConvex>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_> @ 14406a1c0

void __thiscall
TManagedArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
~TManagedArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
          (TManagedArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,int>
            (*(TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> **)
              &this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// ~TManagedArray<Chaos::FBVHParticles> @ 14406a210

void __thiscall
TManagedArray<Chaos::FBVHParticles>::~TManagedArray<Chaos::FBVHParticles>
          (TManagedArray<Chaos::FBVHParticles> *this)

{
  *(undefined ***)this = &___7__TManagedArrayBase_VFBVHParticles_Chaos____6B_;
  DestructItems<Chaos::FBVHParticles,int>
            (*(FBVHParticles **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  return;
}

// Reindex @ 14409ece0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>::Reindex
          (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  ForElementType<FSetElementId> FVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar9 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar4 = param_1->ArrayNum;
  uVar17 = 0;
  if (0 < (longlong)iVar9) {
    local_70 = 0;
    local_78 = 0;
    do {
      uVar18 = ~uVar17 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar17 < *(int *)&this->field_0x18) {
        uVar16 = uVar18;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar12 = (longlong *)(*(longlong *)&this->field_0x10 + local_70);
      local_58 = 0;
      uVar16 = 0;
      iVar13 = (int)plVar12[1];
      if (0 < iVar13) {
        do {
          uVar19 = ~uVar16 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar16 < iVar13) {
            uVar10 = uVar19;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_60 = 2;
          lVar1 = *plVar12 + local_58 * 8;
          local_50 = 0;
          do {
            iVar13 = *(int *)(lVar1 + local_50 * 4);
            if (-1 < iVar13) {
              if ((iVar4 <= iVar13) &&
                 (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_7863574370055092752>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                     ,0x5f0,"RemapVal[i] < MaskSize"), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&this->field_0x18) {
                uVar10 = uVar18;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar5 = *(longlong *)&this->field_0x10;
              uVar10 = 0;
              if ((int)uVar16 < *(int *)(lVar5 + 8 + local_70)) {
                uVar10 = uVar19;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar3 = (local_50 + local_58 * 2) * 4;
              uVar10 = *(uint *)(lVar3 + *(longlong *)(lVar5 + local_70));
              if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34)
              {
                FVar6 = (param_4->Hash).SecondaryData;
                FVar14 = (ForElementType<FSetElementId>)&param_4->Hash;
                if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                  FVar14 = FVar6;
                }
                iVar13 = *(int *)((longlong)FVar14 +
                                 (ulonglong)(param_4->HashSize - 1U & uVar10) * 4);
                if (iVar13 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar13 * 0xc) ==
                        uVar10) {
                      uVar10 = 0;
                      if ((int)uVar17 < *(int *)&this->field_0x18) {
                        uVar10 = uVar18;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      lVar5 = *(longlong *)&this->field_0x10;
                      uVar10 = 0;
                      if ((int)uVar16 < *(int *)(lVar5 + 8 + local_70)) {
                        uVar10 = uVar19;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      *(undefined4 *)(lVar3 + *(longlong *)(lVar5 + local_70)) = 0xffffffff;
                      goto LAB_14409f087;
                    }
                    iVar13 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar13 * 0xc);
                  } while (iVar13 != -1);
                }
              }
              uVar10 = *(uint *)(lVar1 + local_50 * 4);
              uVar11 = 0;
              if ((int)uVar10 < param_1->ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&this->field_0x18) {
                uVar10 = uVar18;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              plVar15 = (longlong *)(local_70 + *(longlong *)&this->field_0x10);
              uVar10 = 0;
              if ((int)uVar16 < (int)plVar15[1]) {
                uVar10 = uVar19;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              piVar2 = (int *)(lVar3 + *plVar15);
              *piVar2 = *piVar2 - iVar13;
LAB_14409f087:
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&this->field_0x18) {
                uVar10 = uVar18;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              plVar15 = (longlong *)(local_70 + *(longlong *)&this->field_0x10);
              uVar10 = 0;
              if ((int)uVar16 < (int)plVar15[1]) {
                uVar10 = uVar19;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (-2 < *(int *)(lVar3 + *plVar15)) {
                uVar10 = 0;
                if ((int)uVar17 < *(int *)&this->field_0x18) {
                  uVar10 = uVar18;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                plVar15 = (longlong *)(local_70 + *(longlong *)&this->field_0x10);
                uVar10 = 0;
                if ((int)uVar16 < (int)plVar15[1]) {
                  uVar10 = uVar19;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(int *)(lVar3 + *plVar15) <= *param_2) goto LAB_14409f20d;
              }
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7863574370055092743>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                 ,0x5f9,
                                 "-1 <= this->operator[](Index)[ArrayIndex][i] && this->operator[](Index)[ArrayIndex][i] <= FinalSize"
                                );
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
LAB_14409f20d:
            local_50 = local_50 + 1;
            local_60 = local_60 + -1;
          } while (local_60 != 0);
          local_58 = local_58 + 1;
          uVar16 = uVar16 + 1;
          iVar13 = (int)plVar12[1];
        } while ((int)uVar16 < iVar13);
      }
      local_78 = local_78 + 1;
      local_70 = local_70 + 0x10;
      uVar17 = uVar17 + 1;
    } while (local_78 < iVar9);
  }
  return;
}

// Reindex @ 14409f340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::Reindex
          (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint local_res8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  
  if (6 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::Reindex(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,int_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  iVar8 = (**(code **)(*(longlong *)this + 0x60))(this);
  iVar2 = param_1->ArrayNum;
  local_res8 = 0;
  if (0 < (longlong)iVar8) {
    local_98 = 0;
    local_90 = 0;
    do {
      uVar15 = 0;
      uVar18 = ~local_res8 >> 0x1f;
      uVar9 = 0;
      if ((int)local_res8 < *(int *)&this->field_0x18) {
        uVar9 = uVar18;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar11 = (longlong *)(*(longlong *)&this->field_0x10 + local_90);
      iVar12 = (int)plVar11[1];
      if (0 < iVar12) {
        local_88 = 0;
        local_58 = 0;
        do {
          uVar17 = ~uVar15 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar15 < iVar12) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_60 = 3;
          lVar3 = *plVar11;
          lVar19 = 0;
          local_70 = local_88;
          do {
            iVar12 = *(int *)(lVar3 + local_58 + lVar19 * 4);
            if (-1 < iVar12) {
              if ((iVar2 <= iVar12) &&
                 (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_7863574370055092535>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                     ,0x6c9,"RemapVal[i] < MaskSize"), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = 0;
              if ((int)local_res8 < *(int *)&this->field_0x18) {
                uVar9 = uVar18;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&this->field_0x10;
              uVar9 = 0;
              if ((int)uVar15 < *(int *)(lVar4 + 8 + local_90)) {
                uVar9 = uVar17;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = *(uint *)(*(longlong *)(lVar4 + local_90) + local_70 * 4);
              if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34)
              {
                FVar5 = (param_4->Hash).SecondaryData;
                FVar13 = (ForElementType<FSetElementId>)&param_4->Hash;
                if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                  FVar13 = FVar5;
                }
                iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(param_4->HashSize - 1U & uVar9) * 4
                                 );
                if (iVar12 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar12 * 0xc) == uVar9
                       ) {
                      uVar9 = 0;
                      if ((int)local_res8 < *(int *)&this->field_0x18) {
                        uVar9 = uVar18;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      lVar4 = *(longlong *)&this->field_0x10;
                      uVar9 = 0;
                      if ((int)uVar15 < *(int *)(lVar4 + 8 + local_90)) {
                        uVar9 = uVar17;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      lVar16 = (local_88 + lVar19) * 4;
                      *(undefined4 *)(lVar16 + *(longlong *)(lVar4 + local_90)) = 0xffffffff;
                      goto LAB_14409f701;
                    }
                    iVar12 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar12 * 0xc);
                  } while (iVar12 != -1);
                }
              }
              uVar9 = *(uint *)(lVar3 + local_58 + lVar19 * 4);
              uVar10 = 0;
              if ((int)uVar9 < param_1->ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
              uVar9 = 0;
              if ((int)local_res8 < *(int *)&this->field_0x18) {
                uVar9 = uVar18;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar14 = (longlong *)(local_90 + *(longlong *)&this->field_0x10);
              uVar9 = 0;
              if ((int)uVar15 < (int)plVar14[1]) {
                uVar9 = uVar17;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar16 = (local_88 + lVar19) * 4;
              piVar1 = (int *)(lVar16 + *plVar14);
              *piVar1 = *piVar1 - iVar12;
LAB_14409f701:
              uVar9 = 0;
              if ((int)local_res8 < *(int *)&this->field_0x18) {
                uVar9 = uVar18;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar14 = (longlong *)(local_90 + *(longlong *)&this->field_0x10);
              uVar9 = 0;
              if ((int)uVar15 < (int)plVar14[1]) {
                uVar9 = uVar17;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (-2 < *(int *)(lVar16 + *plVar14)) {
                uVar9 = 0;
                if ((int)local_res8 < *(int *)&this->field_0x18) {
                  uVar9 = uVar18;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                plVar14 = (longlong *)(local_90 + *(longlong *)&this->field_0x10);
                uVar9 = 0;
                if ((int)uVar15 < (int)plVar14[1]) {
                  uVar9 = uVar17;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)(lVar16 + *plVar14) <= *param_2) goto LAB_14409f88c;
              }
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7863574370055092526>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                                 ,0x6d2,
                                 "-1 <= this->operator[](Index)[ArrayIndex][i] && this->operator[](Index)[ArrayIndex][i] <= FinalSize"
                                );
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
LAB_14409f88c:
            lVar19 = lVar19 + 1;
            local_60 = local_60 + -1;
            local_70 = local_70 + 1;
          } while (local_60 != 0);
          uVar15 = uVar15 + 1;
          local_58 = local_58 + 0xc;
          local_88 = local_88 + 3;
          iVar12 = (int)plVar11[1];
        } while ((int)uVar15 < iVar12);
      }
      local_res8 = local_res8 + 1;
      local_98 = local_98 + 1;
      local_90 = local_90 + 0x10;
    } while (local_98 < iVar8);
  }
  return;
}

// ReindexFromLookup @ 14409f9f0

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>::ReindexFromLookup
          (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong local_res20;
  
  uVar11 = 0;
  iVar3 = (**(code **)(*(longlong *)this + 0x60))();
  lVar9 = (longlong)iVar3;
  if (0 < iVar3) {
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x18) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = 0;
      plVar6 = (longlong *)(*(longlong *)&this->field_0x10 + local_res20);
      iVar3 = (int)plVar6[1];
      if (0 < iVar3) {
        lVar10 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < iVar3) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar7 = (uint *)(*plVar6 + lVar10);
          uVar5 = *puVar7;
          if (-1 < (int)uVar5) {
            uVar4 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *puVar7 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
          }
          uVar5 = puVar7[1];
          if (-1 < (int)uVar5) {
            uVar4 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            puVar7[1] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
          }
          iVar3 = (int)plVar6[1];
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 8;
        } while ((int)uVar8 < iVar3);
      }
      local_res20 = local_res20 + 0x10;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// ReindexFromLookup @ 14409fc40

void __thiscall
TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::ReindexFromLookup
          (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong local_res20;
  
  uVar11 = 0;
  iVar3 = (**(code **)(*(longlong *)this + 0x60))();
  lVar9 = (longlong)iVar3;
  if (0 < iVar3) {
    local_res20 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x18) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = 0;
      plVar6 = (longlong *)(*(longlong *)&this->field_0x10 + local_res20);
      iVar3 = (int)plVar6[1];
      if (0 < iVar3) {
        lVar10 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < iVar3) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar8 = (uint *)(*plVar6 + lVar10);
          uVar5 = *puVar8;
          if (-1 < (int)uVar5) {
            uVar4 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *puVar8 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
          }
          uVar5 = puVar8[1];
          if (-1 < (int)uVar5) {
            uVar4 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            puVar8[1] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
          }
          uVar5 = puVar8[2];
          if (-1 < (int)uVar5) {
            uVar4 = 0;
            if ((int)uVar5 < param_1->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            puVar8[2] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
          }
          iVar3 = (int)plVar6[1];
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0xc;
        } while ((int)uVar7 < iVar3);
      }
      local_res20 = local_res20 + 0x10;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}


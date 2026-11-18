// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 11

// StaticStruct @ 14da55680

UScriptStruct * __cdecl FPVMaterialSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVMaterialSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVMaterialSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVMaterialSettings,(UObject *)pUVar1,
                         L"PVMaterialSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPVMaterialSettings.OuterSingleton;
}

// operator= @ 14da681d0

FPVMaterialSettings * __thiscall
FPVMaterialSettings::operator=(FPVMaterialSettings *this,FPVMaterialSettings *param_1)

{
  TArray<FTrunkGenerationMaterialSetup,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FTrunkGenerationMaterialSetup *pFVar5;
  
  this->GenerationOffset = param_1->GenerationOffset;
  this->DistributionMethod = param_1->DistributionMethod;
  pTVar1 = &this->MaterialSetups;
  if (pTVar1 != &param_1->MaterialSetups) {
    iVar3 = (this->MaterialSetups).ArrayMax;
    piVar2 = &(this->MaterialSetups).ArrayMax;
    iVar4 = (param_1->MaterialSetups).ArrayNum;
    pFVar5 = (FTrunkGenerationMaterialSetup *)(param_1->MaterialSetups).AllocatorInstance.Data;
    (this->MaterialSetups).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FTrunkGenerationMaterialSetup,FTrunkGenerationMaterialSetup,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  this->MaterialMode = param_1->MaterialMode;
  return this;
}

// ApplyMaterialSettings @ 14da6dcf0

void __thiscall
FPVMaterialSettings::ApplyMaterialSettings
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1)

{
  TArray<FBranchUVData,TSizedDefaultAllocator<32>_> local_38;
  TArray<FPointUVData,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  SetBranchUVMaterial(this,param_1,&local_18,&local_38);
  SetUVOffsetAndScale(this,param_1,&local_38);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  SetBaseUVs(this,param_1,&local_28);
  FitUVs01(this,param_1,&local_28,&local_18,&local_38);
  SetOutputUVs(this,param_1,&local_28,&local_38);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FitUVs01 @ 14da8baa0

void __thiscall
FPVMaterialSettings::FitUVs01
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1,
          TArray<FPointUVData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FBranchUVData,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_7e0;
  float fStack_7d4;
  float fStack_7cc;
  FBranchFacade local_7c8;
  FPointFacade local_4d8;
  
  PV::Facades::FPointFacade::FPointFacade(&local_4d8,param_1);
  PV::Facades::FBranchFacade::FBranchFacade(&local_7c8,param_1);
  uVar8 = __xmm_80000000800000008000000080000000;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar17 = 0;
  if (0 < param_3->ArrayNum) {
    local_7e0 = 0;
    do {
      uVar15 = 0;
      lVar14 = 0;
      while( true ) {
        if (local_7c8.Parents.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
          iVar10 = FManagedArrayCollection::NumElements
                             (local_7c8.Parents.ConstCollection,local_7c8.Parents.Group);
        }
        else {
          iVar10 = (**(code **)(*(longlong *)local_7c8.Parents.ConstAttributeArray + 0x60))();
        }
        if (iVar10 <= (int)uVar15) break;
        uVar11 = 0;
        if ((int)uVar15 < param_4->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *(uint *)((param_4->AllocatorInstance).Data + lVar14 + 0xc);
        if (((int)uVar17 < 0) || ((this->MaterialSetups).ArrayNum <= (int)uVar17)) {
LAB_14da8bc67:
          bVar9 = false;
        }
        else {
          uVar16 = 0;
          if ((int)uVar17 < (this->MaterialSetups).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((this->MaterialSetups).AllocatorInstance.Data[local_7e0 + 8] ==
              (FScriptContainerElement)0x0) goto LAB_14da8bc67;
          bVar9 = true;
        }
        if ((uVar11 == uVar17) && (bVar9)) {
          if ((local_7c8.BranchPoints.ConstAttributeArray ==
               (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
             (((int)uVar15 < 0 ||
              (iVar10 = (**(code **)(*(longlong *)local_7c8.BranchPoints.ConstAttributeArray + 0x60)
                        )(), iVar10 <= (int)uVar15)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                     _dynamic_atexit_destructor_for__EmptyPoints__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar13 = &EmptyPoints;
          }
          else {
            pTVar13 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_7c8.BranchPoints,uVar15);
          }
          if ((pTVar13->ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("BranchPoints.IsValidIndex(0)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                                 ,0x106,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pTVar13->ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)(pTVar13->AllocatorInstance).Data;
          if (((iVar10 < 0) || (param_2->ArrayNum <= iVar10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointUVData.IsValidIndex(BranchPoints[0])",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                                 ,0x107,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pTVar13->ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          piVar1 = &param_2->ArrayNum;
          uVar11 = *(uint *)(pTVar13->AllocatorInstance).Data;
          uVar16 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar16 = ~uVar11 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8);
          uVar16 = pTVar13->ArrayNum - 1;
          uVar11 = 0;
          if ((int)uVar16 < pTVar13->ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
          if (((iVar10 < 0) || (*piVar1 <= iVar10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointUVData.IsValidIndex(BranchPoints[BranchPoints.Num() - 1])",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                                 ,0x109,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = pTVar13->ArrayNum - 1;
          uVar11 = 0;
          if ((int)uVar16 < pTVar13->ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar11 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
          uVar16 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar16 = ~uVar11 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = 0;
          iVar10 = pTVar13->ArrayNum;
          if (0 < iVar10) {
            fStack_7d4 = (float)((ulonglong)uVar2 >> 0x20);
            lVar18 = 0;
            fStack_7cc = (float)((ulonglong)
                                 *(undefined8 *)
                                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8) >>
                                0x20);
            do {
              uVar11 = 0;
              if ((int)uVar16 < iVar10) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar11 = *(uint *)((pTVar13->AllocatorInstance).Data + lVar18);
              uVar12 = 0;
              if ((int)uVar11 < *piVar1) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (param_2->AllocatorInstance).Data;
              fVar19 = *(float *)(pFVar3 + (longlong)(int)uVar11 * 8 + 4);
              if (fVar19 < fStack_7d4) {
                fVar20 = (float)((uint)fStack_7cc ^ uVar8);
                fVar21 = fVar20 - fStack_7d4;
                if (fVar5 < (float)((uint)fVar21 & uVar7)) {
                  fVar21 = (fVar19 - fStack_7d4) / fVar21;
                }
                else {
                  fVar21 = fVar6;
                  if (fVar19 < fVar20) {
                    fVar21 = 0.0;
                  }
                }
                if (fVar6 <= fVar21) {
                  fVar21 = fVar6;
                }
                if (fVar21 <= 0.0) {
                  fVar21 = 0.0;
                }
                fVar19 = (float)((uint)fVar21 ^ uVar8);
              }
              else if (fVar5 < (float)((uint)(fStack_7cc - fStack_7d4) & uVar7)) {
                fVar19 = (fVar19 - fStack_7d4) / (fStack_7cc - fStack_7d4);
                if (fVar6 <= fVar19) {
                  fVar19 = fVar6;
                }
                if (fVar19 <= 0.0) {
                  fVar19 = 0.0;
                }
              }
              else if (fVar19 < fStack_7cc) {
                fVar19 = 0.0;
                if (fVar6 <= 0.0) {
                  fVar19 = fVar6;
                }
                if (fVar19 <= 0.0) {
                  fVar19 = 0.0;
                }
              }
              else {
                fVar19 = fVar6;
                if (fVar6 <= 0.0) {
                  fVar19 = 0.0;
                }
              }
              *(float *)(pFVar3 + (longlong)(int)uVar11 * 8 + 4) = fVar19;
              uVar16 = uVar16 + 1;
              iVar10 = pTVar13->ArrayNum;
              lVar18 = lVar18 + 4;
            } while ((int)uVar16 < iVar10);
          }
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x10;
      }
      local_7e0 = local_7e0 + 0x30;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < param_3->ArrayNum);
  }
  return;
}

// GetMaterialValue @ 14da96540

float __thiscall
FPVMaterialSettings::GetMaterialValue
          (FPVMaterialSettings *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  float fVar1;
  
  if (__real_322bcc77 < (float)((uint)(param_3 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    fVar1 = (param_1 - param_2) / (param_3 - param_2);
  }
  else {
    fVar1 = __real_3f800000;
    if (param_1 < param_3) {
      fVar1 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1 * (param_5 - param_4) + param_4;
}

// MakeSegmentArray @ 14da9d200

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FPVMaterialSettings::MakeSegmentArray
          (FPVMaterialSettings *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FPointFacade *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,float param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  float *pfVar10;
  TVector<float> *pTVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a0;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_3 <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxPointScale > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                         ,0xda,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar9;
  }
  fVar4 = __real_3f800000;
  fVar3 = __real_38d1b717;
  iVar8 = param_2->ArrayNum;
  uVar12 = 0;
  fVar19 = __real_3e22f983 / param_3;
  if (0 < iVar8 + -1) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < iVar8) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      iVar8 = *(int *)((param_2->AllocatorInstance).Data + lVar13);
      if ((((param_1->PointScale).ConstAttributeArray == (TManagedArray<float> *)0x0) || (iVar8 < 0)
          ) || (iVar7 = (**(code **)(*(longlong *)(param_1->PointScale).ConstAttributeArray + 0x60))
                                  (), iVar7 <= iVar8)) {
        pfVar10 = &DefaultPScale;
      }
      else {
        pfVar10 = TManagedArrayAccessor<float>::operator[](&param_1->PointScale,iVar8);
      }
      fVar18 = *pfVar10;
      uVar6 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      pTVar11 = PV::Facades::FPointFacade::GetPosition
                          (param_1,*(int *)((param_2->AllocatorInstance).Data + lVar13));
      local_b0 = *(undefined8 *)&pTVar11->field0_0x0;
      fVar15 = (pTVar11->field0_0x0)._s_0.Z;
      uVar6 = 0;
      if ((int)(uVar12 + 1) < param_2->ArrayNum) {
        uVar6 = ~(uVar12 + 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      pTVar11 = PV::Facades::FPointFacade::GetPosition
                          (param_1,*(int *)((param_2->AllocatorInstance).Data + lVar13 + 4));
      local_a0 = *(undefined8 *)&pTVar11->field0_0x0;
      fVar16 = (float)local_a0 - (float)local_b0;
      fVar17 = (float)((ulonglong)local_a0 >> 0x20) - local_b0._4_4_;
      fVar15 = (pTVar11->field0_0x0)._s_0.Z - fVar15;
      fVar14 = fVar4;
      if (param_4 == 1) {
        if (fVar18 == 0.0) {
          fVar18 = fVar3;
        }
        fVar14 = param_3 / fVar18;
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8[0] = fVar14 * fVar19 * SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15);
      if (((pFVar1 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           local_b8[0];
      iVar8 = param_2->ArrayNum;
    } while ((int)uVar12 < iVar8 + -1);
  }
  return __return_storage_ptr__;
}

// SetBaseUVs @ 14daa4f90

void __thiscall
FPVMaterialSettings::SetBaseUVs
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1,
          TArray<FPointUVData,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  float *pfVar12;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  float *pfVar14;
  ulonglong uVar15;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined1 local_res20 [8];
  undefined8 local_7c4;
  undefined4 local_7b8;
  float fStack_7b4;
  TArray<float,TSizedDefaultAllocator<32>_> local_7b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_7a0;
  FBranchFacade local_788;
  FPointFacade local_498;
  
  PV::Facades::FPointFacade::FPointFacade(&local_498,param_1);
  PV::Facades::FBranchFacade::FBranchFacade(&local_788,param_1);
  if ((local_498.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar12 = *(float **)&(local_498.PointScale.ConstAttributeArray)->field_0x10;
  pfVar14 = (float *)0x0;
  iVar17 = *(int *)&(local_498.PointScale.ConstAttributeArray)->field_0x18;
  pfVar1 = pfVar12 + iVar17;
  while( true ) {
    if (*(int *)&(local_498.PointScale.ConstAttributeArray)->field_0x18 != iVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pfVar12 == pfVar1) break;
    if ((pfVar14 == (float *)0x0) || (*pfVar14 <= *pfVar12 && *pfVar12 != *pfVar14)) {
      pfVar14 = pfVar12;
    }
    pfVar12 = pfVar12 + 1;
  }
  iVar17 = 0;
  fVar3 = *pfVar14;
  local_7c4 = 0;
  uVar7 = (**(code **)(*(longlong *)local_498.PointScale.ConstAttributeArray + 0x60))
                    (local_498.PointScale.ConstAttributeArray);
  uVar15 = (ulonglong)uVar7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar2 != uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar7,&param_2->AllocatorInstance,0,piVar2);
  }
  pTVar13 = local_788.BranchPoints.ConstAttributeArray;
  pTVar16 = local_788.Parents.ConstAttributeArray;
  if (0 < (int)uVar7) {
    do {
      pFVar4 = (param_2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_7c4) &&
          ((FScriptContainerElement *)&local_7c4 < pFVar4 + (longlong)*piVar2 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,piVar2);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_7c4;
      uVar15 = uVar15 - 1;
      pTVar13 = local_788.BranchPoints.ConstAttributeArray;
      pTVar16 = local_788.Parents.ConstAttributeArray;
    } while (uVar15 != 0);
  }
  do {
    if (pTVar16 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        (local_788.Parents.ConstCollection,local_788.Parents.Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar16 + 0x60))(pTVar16);
    }
    if (iVar8 <= iVar17) {
      return;
    }
    if (((pTVar13 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar17 < 0)
        ) || (iVar8 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13), iVar8 <= iVar17)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar11 = &EmptyPoints;
    }
    else {
      pTVar11 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_788.BranchPoints,iVar17);
    }
    MakeSegmentArray(this,&local_7a0,&local_498,pTVar11,fVar3,0);
    MakeSegmentArray(this,&local_7b0,&local_498,pTVar11,fVar3,1);
    iVar8 = pTVar11->ArrayNum;
    uVar7 = 1;
    fVar19 = 0.0;
    if (1 < iVar8) {
      local_7b8 = 0;
      lVar18 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar7 < iVar8) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = *(uint *)((pTVar11->AllocatorInstance).Data + lVar18 + 4);
        uVar10 = 0;
        if ((int)(uVar7 - 1) < local_7a0.ArrayNum) {
          uVar10 = -uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)(uVar7 - 1) < local_7b0.ArrayNum) {
          uVar10 = -uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar19 = fVar19 + *(float *)(local_7b0.AllocatorInstance.Data + lVar18);
        fStack_7b4 = fVar19;
        if ((((int)uVar9 < 0) || (param_2->ArrayNum <= (int)uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointUVData.IsValidIndex(PTCurrent)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                               ,0xce,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = uVar7 + 1;
        lVar18 = lVar18 + 4;
        *(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) =
             CONCAT44(fStack_7b4,local_7b8);
        iVar8 = pTVar11->ArrayNum;
        pTVar13 = local_788.BranchPoints.ConstAttributeArray;
        pTVar16 = local_788.Parents.ConstAttributeArray;
      } while ((int)uVar7 < iVar8);
    }
    if (local_7b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b0.AllocatorInstance.Data);
    }
    if (local_7a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.AllocatorInstance.Data);
    }
    iVar17 = iVar17 + 1;
  } while( true );
}

// SetBranchUVMaterial @ 14daa61d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPVMaterialSettings::SetBranchUVMaterial
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FBranchUVData,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  float fVar2;
  EUVMaterialMode EVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  FPVMaterialSettings *pFVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  float *pfVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_8c8 [32];
  ForAnyElementType local_878;
  int local_870;
  int local_86c;
  ForAnyElementType local_868;
  int local_860;
  int local_85c;
  float local_858;
  float local_854;
  float local_850;
  int local_84c;
  int local_848 [2];
  undefined8 local_840;
  FPVMaterialSettings *local_838;
  TArray<int,TSizedDefaultAllocator<32>_> *local_830;
  FBranchFacade local_828;
  FPointFacade local_538;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_838 = this;
  local_830 = param_2;
  PV::Facades::FPointFacade::FPointFacade(&local_538,param_1);
  PV::Facades::FBranchFacade::FBranchFacade(&local_828,param_1);
  local_108 = 0;
  uStack_100 = 0;
  if (local_828.Parents.ConstAttributeArray ==
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar14 = FManagedArrayCollection::NumElements
                       (local_828.Parents.ConstCollection,local_828.Parents.Group);
  }
  else {
    uVar14 = (**(code **)(*(longlong *)local_828.Parents.ConstAttributeArray + 0x60))();
  }
  uVar22 = (ulonglong)uVar14;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &param_3->ArrayMax;
  iVar21 = 0;
  param_3->ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar14,&param_3->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar14) {
    do {
      pFVar17 = (param_3->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar17 + (longlong)*piVar1 * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = param_3->ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_3->AllocatorInstance,piVar1);
      }
      pFVar17 = (param_3->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
      param_3->ArrayNum = iVar15 + 1;
      *(undefined8 *)pFVar17 = local_108;
      *(undefined8 *)(pFVar17 + 8) = uStack_100;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  fVar33 = 0.0;
  fVar31 = 0.0;
  fVar34 = 0.0;
  fVar25 = __real_461c4000;
  fVar32 = __real_461c4000;
  fVar26 = __real_461c4000;
  while( true ) {
    uVar22 = 0;
    if (local_538.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
    {
      iVar15 = FManagedArrayCollection::NumElements
                         (local_538.Positions.ConstCollection,local_538.Positions.Group);
    }
    else {
      iVar15 = (**(code **)(*(longlong *)local_538.Positions.ConstAttributeArray + 0x60))();
    }
    fVar10 = __real_3f000000;
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar12 = __real_3f800000;
    fVar2 = __real_322bcc77;
    uVar24 = uVar22;
    local_858 = fVar31;
    local_854 = fVar26;
    local_850 = fVar25;
    if (iVar15 <= iVar21) break;
    if (((local_538.BudDevelopment.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar21 < 0)) ||
       (iVar15 = (**(code **)(*(longlong *)local_538.BudDevelopment.ConstAttributeArray + 0x60))(),
       iVar15 <= iVar21)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FPointFacade::GetBudDevelopment'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar18 = &::EmptyArray;
    }
    else {
      pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_538.BudDevelopment,iVar21);
    }
    local_878.Data = (FScriptContainerElement *)0x0;
    local_870 = pTVar18->ArrayNum;
    lVar20 = (longlong)local_870;
    pFVar17 = (pTVar18->AllocatorInstance).Data;
    if (local_870 == 0) {
      local_86c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_870,0,&local_878,local_870,&local_86c);
      memcpy(local_878.Data,pFVar17,lVar20 << 2);
    }
    if (((local_538.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) || (iVar21 < 0))
       || (iVar15 = (**(code **)(*(longlong *)local_538.PointScale.ConstAttributeArray + 0x60))(),
          iVar15 <= iVar21)) {
      pfVar19 = &DefaultPScale;
    }
    else {
      pfVar19 = TManagedArrayAccessor<float>::operator[](&local_538.PointScale,iVar21);
    }
    fVar2 = *pfVar19;
    if ((local_870 < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BudDevelopment.Num() > 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                            ,0x47,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_870 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar12 = (float)*(int *)local_878.Data;
    if (fVar32 <= (float)*(int *)local_878.Data) {
      fVar12 = fVar32;
    }
    fVar32 = fVar12;
    if ((local_870 < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar12 = fVar2;
    if (fVar25 <= fVar2) {
      fVar12 = fVar25;
    }
    fVar25 = fVar12;
    fVar12 = (float)*(int *)(local_878.Data + 8);
    if (fVar26 <= (float)*(int *)(local_878.Data + 8)) {
      fVar12 = fVar26;
    }
    if ((local_870 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar26 = (float)*(int *)local_878.Data;
    if ((float)*(int *)local_878.Data <= fVar33) {
      fVar26 = fVar33;
    }
    fVar33 = fVar26;
    if ((local_870 < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (fVar2 <= fVar34) {
      fVar2 = fVar34;
    }
    fVar34 = fVar2;
    fVar26 = (float)*(int *)(local_878.Data + 8);
    if ((float)*(int *)(local_878.Data + 8) <= fVar31) {
      fVar26 = fVar31;
    }
    fVar31 = fVar26;
    FMemory::Free(local_878.Data);
    iVar21 = iVar21 + 1;
    fVar26 = fVar12;
  }
  do {
    if (local_828.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar21 = FManagedArrayCollection::NumElements
                         (local_828.Parents.ConstCollection,local_828.Parents.Group);
    }
    else {
      iVar21 = (**(code **)(*(longlong *)local_828.Parents.ConstAttributeArray + 0x60))();
    }
    uVar23 = (uint)uVar24;
    if (iVar21 <= (int)uVar23) {
      return;
    }
    if (((local_828.BranchPoints.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar23 < 0)) ||
       (iVar21 = (**(code **)(*(longlong *)local_828.BranchPoints.ConstAttributeArray + 0x60))(),
       iVar21 <= (int)uVar23)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar18 = &EmptyPoints;
    }
    else {
      pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_828.BranchPoints,uVar23);
    }
    if ((pTVar18->ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BranchPoints.Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                            ,0x54,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar18->ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    auVar28 = ZEXT816(0);
    iVar21 = *(int *)(pTVar18->AllocatorInstance).Data;
    if (((local_538.BudDevelopment.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar21 < 0)) ||
       (iVar15 = (**(code **)(*(longlong *)local_538.BudDevelopment.ConstAttributeArray + 0x60))(),
       iVar15 <= iVar21)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FPointFacade::GetBudDevelopment'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar18 = &::EmptyArray;
    }
    else {
      pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_538.BudDevelopment,iVar21);
    }
    local_868.Data = (FScriptContainerElement *)0x0;
    local_860 = pTVar18->ArrayNum;
    lVar20 = (longlong)local_860;
    pFVar17 = (pTVar18->AllocatorInstance).Data;
    if (local_860 == 0) {
      local_85c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_860,0,&local_868,local_860,&local_85c);
      memcpy(local_868.Data,pFVar17,lVar20 << 2);
    }
    if (((local_538.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) || (iVar21 < 0))
       || (iVar15 = (**(code **)(*(longlong *)local_538.PointScale.ConstAttributeArray + 0x60))(),
          iVar15 <= iVar21)) {
      pfVar19 = &DefaultPScale;
    }
    else {
      pfVar19 = TManagedArrayAccessor<float>::operator[](&local_538.PointScale,iVar21);
    }
    fVar25 = *pfVar19;
    if ((local_860 < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BudDevelopment.Num() >= 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                            ,0x5b,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar11 = local_838;
    EVar3 = local_838->MaterialMode;
    if (EVar3 == Generation) {
      if ((local_860 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar25 = fVar33 - fVar32;
      if (fVar2 < (float)((uint)fVar25 & uVar14)) {
        auVar27 = ZEXT416((uint)(((float)*(int *)local_868.Data - fVar32) / fVar25));
      }
      else if ((float)*(int *)local_868.Data < fVar33) {
        auVar27 = ZEXT816(0);
      }
      else {
        auVar27 = ZEXT416((uint)fVar12);
      }
      if (fVar12 <= auVar27._0_4_) {
        auVar27._0_4_ = fVar12;
      }
      if (auVar27._0_4_ <= 0.0) {
        auVar5._12_4_ = 0;
        auVar5._0_12_ = auVar27._4_12_;
        auVar27 = auVar5 << 0x20;
      }
      if (fVar12 <= auVar27._0_4_) {
        auVar27._0_4_ = fVar12;
      }
      if (auVar27._0_4_ <= 0.0) {
        auVar6._12_4_ = 0;
        auVar6._0_12_ = auVar27._4_12_;
        auVar27 = auVar6 << 0x20;
      }
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = auVar27._0_4_ * fVar25 + fVar32;
    }
    else {
      if (EVar3 == Age) {
        if ((local_860 < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar26 = local_858 - local_854;
        fVar25 = (float)*(int *)(local_868.Data + 8);
        fVar31 = local_854;
        if (fVar2 < (float)((uint)fVar26 & uVar14)) {
LAB_14daa6aac:
          auVar29 = ZEXT416((uint)((fVar25 - fVar31) / fVar26));
        }
        else if (fVar25 < local_858) {
LAB_14daa6aa3:
          auVar29 = ZEXT816(0);
        }
        else {
          auVar29 = ZEXT416((uint)fVar12);
        }
      }
      else {
        if (EVar3 != Radius) goto LAB_14daa6ada;
        fVar26 = fVar34 - local_850;
        fVar31 = local_850;
        if (fVar2 < (float)((uint)fVar26 & uVar14)) goto LAB_14daa6aac;
        if (fVar25 < fVar34) goto LAB_14daa6aa3;
        auVar29 = ZEXT416((uint)fVar12);
      }
      if (fVar12 <= auVar29._0_4_) {
        auVar29._0_4_ = fVar12;
      }
      if (auVar29._0_4_ <= 0.0) {
        auVar7._12_4_ = 0;
        auVar7._0_12_ = auVar29._4_12_;
        auVar29 = auVar7 << 0x20;
      }
      if (fVar12 <= auVar29._0_4_) {
        auVar29._0_4_ = fVar12;
      }
      if (auVar29._0_4_ <= 0.0) {
        auVar8._12_4_ = 0;
        auVar8._0_12_ = auVar29._4_12_;
        auVar29 = auVar8 << 0x20;
      }
      auVar28._4_12_ = auVar29._4_12_;
      auVar28._0_4_ = auVar29._0_4_ * (fVar32 - fVar33) + fVar33;
    }
LAB_14daa6ada:
    fVar31 = (float)(pFVar11->MaterialSetups).ArrayNum;
    fVar25 = (float)pFVar11->GenerationOffset + fVar32;
    if (fVar31 <= fVar25) {
      fVar25 = fVar31;
    }
    fVar26 = auVar28._0_4_;
    auVar30._4_12_ = auVar28._4_12_;
    if (pFVar11->DistributionMethod == Repeat) {
      fVar26 = (float)pFVar11->GenerationOffset + fVar26;
      fVar25 = (float)(int)fVar25;
      if (fVar31 <= fVar26) {
        fVar26 = fVar31;
      }
      if (fVar26 <= fVar25) {
        fVar26 = fVar25;
      }
      auVar28 = ZEXT416((uint)fVar26);
    }
    else if (pFVar11->DistributionMethod == Fit) {
      fVar25 = (float)(int)fVar25;
      if (fVar2 < (float)((uint)(fVar33 - fVar32) & uVar14)) {
        auVar30._0_4_ = (fVar26 - fVar32) / (fVar33 - fVar32);
      }
      else if (fVar26 < fVar33) {
        auVar30 = ZEXT816(0);
      }
      else {
        auVar30 = ZEXT416((uint)fVar12);
      }
      if (fVar12 <= auVar30._0_4_) {
        auVar30._0_4_ = fVar12;
      }
      if (auVar30._0_4_ <= 0.0) {
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar30._4_12_;
        auVar30 = auVar9 << 0x20;
      }
      auVar28._4_12_ = auVar30._4_12_;
      auVar28._0_4_ = auVar30._0_4_ * (fVar31 - fVar25) + fVar25;
    }
    local_84c = (int)ROUND(auVar28._0_4_ + auVar28._0_4_ + fVar10) >> 1;
    local_848[0] = local_84c + -1;
    if (local_828.BranchUVMaterial.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      local_840 = 0;
      TManagedArrayAccessor<int>::Add(&local_828.BranchUVMaterial,MakePersistent,(FName)0x0);
      if (local_828.BranchUVMaterial.ConstAttributeArray != (TManagedArray<int> *)0x0) {
        if ((local_828.BranchUVMaterial.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x3b,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14daa6bdb;
      }
    }
    else {
LAB_14daa6bdb:
      if ((-1 < (int)uVar23) &&
         (iVar21 = (**(code **)(*(longlong *)local_828.BranchUVMaterial.ConstAttributeArray + 0x60))
                             (), (int)uVar23 < iVar21)) {
        TManagedArrayAccessor<int>::ModifyAt(&local_828.BranchUVMaterial,uVar23,local_848);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(local_830,&local_84c);
    iVar21 = local_84c + -1;
    uVar16 = 0;
    if ((int)uVar23 < param_3->ArrayNum) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)((param_3->AllocatorInstance).Data + uVar22 + 0xc) = iVar21;
    if (local_868.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data);
    }
    uVar22 = uVar22 + 0x10;
    uVar24 = (ulonglong)(uVar23 + 1);
  } while( true );
}

// SetMaterial @ 14daa7ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPVMaterialSettings::SetMaterial
          (FPVMaterialSettings *this,FString *param_1,TVector2<float> param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_b8;
  uint uStack_b0;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  UObject *local_68;
  FScriptContainerElement local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar5 = (param_1->Data).ArrayNum;
  local_60 = (FScriptContainerElement)0x0;
  local_5c = ___xmm_0000000000000000000000003f800000;
  uStack_54 = _UNK_1506894f8;
  local_4c = 0;
  uVar9 = 0;
  uVar8 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar8 = uVar9;
  }
  pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  local_78._12_4_ = uStack_8c;
  local_78.Size = uVar8;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88.Size = 0;
  local_88._12_4_ = 0;
  local_78.DataPtr = (wchar_t *)pFVar2;
  local_68 = StaticLoadObject(pUVar6,(UObject *)0x0,&local_78,&local_88,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  local_res18 = param_2.field0_0x0._0_4_;
  uStackX_1c = param_2.field0_0x0._4_4_;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uStack_b0 = uStack_b0 & 0xffffff00;
  local_48 = local_b8;
  uStack_44 = local_res18;
  uStack_40 = uStack_b0;
  uStack_3c = uStackX_1c;
  if ((param_3 < 0) || ((this->MaterialSetups).ArrayNum <= param_3)) {
    pFVar2 = (this->MaterialSetups).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar2 + (longlong)(this->MaterialSetups).ArrayMax * 0x30)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->MaterialSetups).ArrayNum;
    piVar1 = &(this->MaterialSetups).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->MaterialSetups).AllocatorInstance,piVar1);
    }
    lVar7 = (longlong)iVar5;
    (this->MaterialSetups).ArrayNum = iVar5 + 1;
    pFVar2 = (this->MaterialSetups).AllocatorInstance.Data;
    *(UObject **)(pFVar2 + lVar7 * 0x30) = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_68);
    }
    pFVar2[lVar7 * 0x30 + 8] = local_60;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = (undefined4)local_5c;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x10) = local_5c._4_4_;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x14) = (undefined4)uStack_54;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x18) = uStack_54._4_4_;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_4c;
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20 + 8) = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    uVar8 = uVar9;
    if (param_3 < (this->MaterialSetups).ArrayNum) {
      uVar8 = (uint)~param_3 >> 0x1f;
    }
    if (uVar8 == 0) {
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
    pFVar2 = (this->MaterialSetups).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_68);
    }
    *(UObject **)(pFVar2 + (longlong)param_3 * 0x30) = local_68;
    if (param_3 < (this->MaterialSetups).ArrayNum) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if (uVar9 == 0) {
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
    pFVar2 = (this->MaterialSetups).AllocatorInstance.Data + (longlong)param_3 * 0x30 + 0x20;
    *(ulonglong *)pFVar2 = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_3c,uStack_40);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetOutputUVs @ 14daa8480

void __thiscall
FPVMaterialSettings::SetOutputUVs
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1,
          TArray<FPointUVData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FBranchUVData,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_838;
  ulonglong local_830;
  undefined8 uStack_828;
  float local_820 [2];
  float local_818 [2];
  undefined8 local_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined8 local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  TVector2<float>_u_0 local_7d8 [2];
  FPointFacade local_7c8;
  FBranchFacade local_398;
  
  PV::Facades::FBranchFacade::FBranchFacade(&local_398,param_1);
  PV::Facades::FPointFacade::FPointFacade(&local_7c8,param_1);
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar3 = __real_3f800000;
  local_838 = 0;
  local_7f0 = 0;
  do {
    lVar14 = local_7f0;
    if (local_398.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar6 = FManagedArrayCollection::NumElements
                        (local_398.Parents.ConstCollection,local_398.Parents.Group);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)local_398.Parents.ConstAttributeArray + 0x60))();
    }
    if (iVar6 <= (int)local_838) {
      return;
    }
    uVar13 = ~local_838 >> 0x1f;
    uVar7 = 0;
    if ((int)local_838 < param_3->ArrayNum) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar18 = 0.0;
    local_830 = CONCAT71(local_830._1_7_,1);
    local_830 = local_830 & 0xffffffff;
    uVar11 = (uint)uStack_828;
    uVar7 = *(uint *)((param_3->AllocatorInstance).Data + lVar14 + 0xc);
    uStack_828 = CONCAT44(0x3f800000,uVar11 & 0xffffff00);
    fVar17 = fVar3;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->MaterialSetups).ArrayNum)) {
      if (((int)uVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->MaterialSetups).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x20;
      local_830 = *(ulonglong *)pFVar1;
      uStack_828 = *(undefined8 *)(pFVar1 + 8);
      uVar11 = 0;
      if ((int)uVar7 < (this->MaterialSetups).ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->MaterialSetups).AllocatorInstance.Data[(longlong)(int)uVar7 * 0x30 + 8] ==
          (FScriptContainerElement)0x0) {
        uVar7 = 0;
        if ((int)local_838 < param_3->ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar18 = *(float *)((param_3->AllocatorInstance).Data + lVar14 + 4);
        uVar7 = 0;
        if ((int)local_838 < param_3->ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar17 = *(float *)((param_3->AllocatorInstance).Data + lVar14 + 8);
      }
    }
    uVar12 = 0;
    uVar7 = 0;
    if ((int)local_838 < param_3->ArrayNum) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = *(uint *)((param_3->AllocatorInstance).Data + lVar14);
    if (((local_398.BranchPoints.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)local_838 < 0))
       || (iVar6 = (**(code **)(*(longlong *)local_398.BranchPoints.ConstAttributeArray + 0x60))(),
          iVar6 <= (int)local_838)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = &EmptyPoints;
    }
    else {
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_398.BranchPoints,local_838);
    }
    iVar6 = pTVar10->ArrayNum;
    if (0 < iVar6) {
      uVar15 = uVar12;
      do {
        uVar11 = (uint)uVar12;
        uVar13 = 0;
        if ((int)uVar11 < iVar6) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar13 = *(uint *)((pTVar10->AllocatorInstance).Data + uVar15);
        lVar14 = (longlong)(int)uVar13;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        fVar16 = *(float *)(pFVar1 + lVar14 * 8 + 4);
        *(uint *)(pFVar1 + lVar14 * 8) = uVar7 ^ uVar4;
        fVar16 = (fVar18 - fVar16) * fVar17;
        *(float *)(pFVar1 + lVar14 * 8 + 4) = fVar16;
        uVar13 = 0;
        if ((int)uVar11 < pTVar10->ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)((pTVar10->AllocatorInstance).Data + uVar15);
        local_820[0] = fVar16;
        if (local_7c8.TextureCoordV.ConstAttributeArray == (TManagedArray<float> *)0x0) {
          local_810 = 0;
          TManagedArrayAccessor<float>::Add(&local_7c8.TextureCoordV,MakePersistent,(FName)0x0);
          if (local_7c8.TextureCoordV.ConstAttributeArray != (TManagedArray<float> *)0x0)
          goto LAB_14daa896a;
        }
        else {
LAB_14daa896a:
          if ((-1 < iVar6) &&
             (iVar9 = (**(code **)(*(longlong *)local_7c8.TextureCoordV.ConstAttributeArray + 0x60))
                                (), iVar6 < iVar9)) {
            TManagedArrayAccessor<float>::ModifyAt(&local_7c8.TextureCoordV,iVar6,local_820);
          }
        }
        fVar16 = *(float *)(pFVar1 + lVar14 * 8);
        uVar13 = 0;
        if ((int)uVar11 < pTVar10->ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)((pTVar10->AllocatorInstance).Data + uVar15);
        local_818[0] = fVar16;
        if (local_7c8.TextureCoordUOffset.ConstAttributeArray == (TManagedArray<float> *)0x0) {
          local_808 = 0;
          TManagedArrayAccessor<float>::Add
                    (&local_7c8.TextureCoordUOffset,MakePersistent,(FName)0x0);
          if (local_7c8.TextureCoordUOffset.ConstAttributeArray != (TManagedArray<float> *)0x0)
          goto LAB_14daa8a1a;
        }
        else {
LAB_14daa8a1a:
          if ((-1 < iVar6) &&
             (iVar9 = (**(code **)(*(longlong *)local_7c8.TextureCoordUOffset.ConstAttributeArray +
                                  0x60))(), iVar6 < iVar9)) {
            TManagedArrayAccessor<float>::ModifyAt(&local_7c8.TextureCoordUOffset,iVar6,local_818);
          }
        }
        local_7e0 = uStack_828;
        if (((char)uStack_828 == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_7e8 = local_830;
        if (((char)local_830 == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_800 = local_7e8._4_4_;
        uStack_7fc = local_7e0._4_4_;
        uVar13 = 0;
        if ((int)uVar11 < pTVar10->ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)((pTVar10->AllocatorInstance).Data + uVar15);
        local_7d8[0]._s_0.Y = uStack_7fc;
        local_7d8[0]._s_0.X = local_800;
        if (local_7c8.URange.ConstAttributeArray == (TManagedArray<UE::Math::TVector2<float>_> *)0x0
           ) {
          local_7f8 = 0;
          TManagedArrayAccessor<UE::Math::TVector2<float>_>::Add
                    (&local_7c8.URange,MakePersistent,(FName)0x0);
          if (local_7c8.URange.ConstAttributeArray !=
              (TManagedArray<UE::Math::TVector2<float>_> *)0x0) goto LAB_14daa8b40;
        }
        else {
LAB_14daa8b40:
          if ((-1 < iVar6) &&
             (iVar9 = (**(code **)(*(longlong *)local_7c8.URange.ConstAttributeArray + 0x60))(),
             iVar6 < iVar9)) {
            TManagedArrayAccessor<UE::Math::TVector2<float>_>::ModifyAt
                      (&local_7c8.URange,iVar6,(TVector2<float> *)&local_7d8[0]._s_0);
          }
        }
        iVar6 = pTVar10->ArrayNum;
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar15 = uVar15 + 4;
        lVar14 = local_7f0;
      } while ((int)(uVar11 + 1) < iVar6);
    }
    local_838 = local_838 + 1;
    local_7f0 = lVar14 + 0x10;
  } while( true );
}

// SetUVOffsetAndScale @ 14daa9260

void __thiscall
FPVMaterialSettings::SetUVOffsetAndScale
          (FPVMaterialSettings *this,FManagedArrayCollection *param_1,
          TArray<FBranchUVData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_res20;
  FBranchFacade local_368;
  
  PV::Facades::FBranchFacade::FBranchFacade(&local_368,param_1);
  fVar8 = __real_3f800000;
  uVar14 = 0;
  lVar16 = 0;
  local_res20 = 0x67;
  do {
    if (local_368.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar10 = FManagedArrayCollection::NumElements
                         (local_368.Parents.ConstCollection,local_368.Parents.Group);
    }
    else {
      iVar10 = (**(code **)(*(longlong *)local_368.Parents.ConstAttributeArray + 0x60))();
    }
    if (iVar10 <= (int)uVar14) {
      return;
    }
    uVar11 = 0;
    if ((int)uVar14 < param_2->ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = 0;
    uVar11 = *(uint *)((param_2->AllocatorInstance).Data + lVar16 + 0xc);
    iVar10 = (this->MaterialSetups).ArrayNum;
    if (0 < iVar10) {
      lVar17 = 0;
      do {
        uVar15 = ~uVar13 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar13 < (this->MaterialSetups).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar2 = *(float *)((this->MaterialSetups).AllocatorInstance.Data + lVar17 + 0x18);
        uVar12 = 0;
        if ((int)uVar13 < (this->MaterialSetups).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar3 = *(float *)((this->MaterialSetups).AllocatorInstance.Data + lVar17 + 0x1c);
        uVar12 = 0;
        if ((int)uVar13 < (this->MaterialSetups).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar4 = *(float *)((this->MaterialSetups).AllocatorInstance.Data + lVar17 + 0x10);
        uVar12 = 0;
        if ((int)uVar13 < (this->MaterialSetups).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar5 = *(undefined4 *)((this->MaterialSetups).AllocatorInstance.Data + lVar17 + 0xc);
        uVar12 = 0;
        if ((int)uVar13 < (this->MaterialSetups).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar11 == uVar13) {
          uVar12 = local_res20 * 0xbb38435 + 0x3619636b;
          local_res20 = uVar12 * 0xbb38435 + 0x3619636b;
          fVar6 = *(float *)((this->MaterialSetups).AllocatorInstance.Data + lVar17 + 0x14);
          if ((((int)uVar14 < 0) || (param_2->ArrayNum <= (int)uVar14)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("BranchUVData.IsValidIndex(BranchIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                                 ,0xa3,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data + lVar16;
          *(ulonglong *)pFVar1 =
               CONCAT44(((float)(local_res20 >> 9 | 0x3f800000) - fVar8) * fVar6 + fVar4,
                        ((float)(uVar12 >> 9 | 0x3f800000) - fVar8) * fVar3 + fVar2);
          *(ulonglong *)(pFVar1 + 8) = CONCAT44(uVar11,uVar5);
        }
        iVar10 = (this->MaterialSetups).ArrayNum;
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 0x30;
      } while ((int)uVar13 < iVar10);
    }
    if (iVar10 < (int)uVar11) {
      if ((((int)uVar14 < 0) || (param_2->ArrayNum <= (int)uVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BranchUVData.IsValidIndex(BranchIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVMaterialSettings.cpp"
                             ,0xab,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + lVar16;
      *(undefined8 *)pFVar1 = 0;
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(uVar11,0x3f800000);
    }
    uVar14 = uVar14 + 1;
    lVar16 = lVar16 + 0x10;
  } while( true );
}


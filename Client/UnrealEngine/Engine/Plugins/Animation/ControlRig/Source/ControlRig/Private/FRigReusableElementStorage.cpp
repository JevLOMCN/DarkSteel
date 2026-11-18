// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// operator[] @ 14a2e22d0

TTransform<double> * __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::operator[]
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)((this->Storage).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// operator[] @ 14a2e2350

FMetadataStorage * __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::operator[]
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMetadataStorage *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMetadataStorage *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMetadataStorage *)((this->Storage).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// operator[] @ 14a2e23d0

FMetadataStorage * __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::operator[]
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMetadataStorage *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMetadataStorage *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMetadataStorage *)((this->Storage).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// operator[] @ 14a2e2450

bool * __thiscall
FRigReusableElementStorage<bool>::operator[](FRigReusableElementStorage<bool> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((this->Storage).AllocatorInstance.Data + param_1);
}

// Add @ 14a2ea400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::Add
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,
          FMetadataStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<int> FVar4;
  undefined1 auStack_68 [32];
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  Allocate(this,&local_38,1,param_1,false);
  if ((local_38.ArrayNum != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Indices.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigReusableElementStorage.h"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_38.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FVar4 = (ForElementType<int>)&local_38;
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar4 = local_38.AllocatorInstance.SecondaryData;
  }
  iVar3 = *(int *)FVar4;
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  return iVar3;
}

// Allocate @ 14a2efcb0

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FRigReusableElementStorage<float>::Allocate
          (FRigReusableElementStorage<float> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,int param_1,float *param_2,bool param_3)

{
  int *piVar1;
  float fVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int local_48;
  int local_44;
  undefined4 local_40 [6];
  
  uVar12 = (ulonglong)(uint)param_1;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 4;
  if (param_3) {
    if (0 < param_1) {
      local_48 = AllocateContiguous(this,param_1,param_2);
      iVar13 = local_48 + param_1;
      if (*piVar1 < param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      for (; local_48 < iVar13; local_48 = local_48 + 1) {
        FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar10 = FVar3;
        }
        if ((ulonglong)FVar10 <= &local_48) {
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          if ((&local_48 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar10 = FVar3;
        }
        *(int *)((longlong)FVar10 + (longlong)iVar7 * 4) = local_48;
      }
    }
  }
  else {
    iVar13 = (this->FreeList).ArrayNum;
    if (param_1 < iVar13) {
      iVar13 = param_1;
    }
    if (0 < param_1 - iVar13) {
      iVar7 = (this->Storage).ArrayNum;
      uVar8 = iVar7 + (param_1 - iVar13);
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((this->Storage).ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar8,(ForAnyElementType *)this,iVar7,&(this->Storage).ArrayMax);
      }
    }
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (*piVar1 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < param_1) {
      do {
        iVar13 = (this->FreeList).ArrayNum;
        if (iVar13 == 0) {
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (longlong)(this->Storage).ArrayMax * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          iVar13 = (this->Storage).ArrayNum;
          if (iVar13 == (this->Storage).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)this,&(this->Storage).ArrayMax);
          }
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          (this->Storage).ArrayNum = iVar13 + 1;
          *(float *)(pFVar4 + (longlong)iVar13 * 4) = *param_2;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          local_44 = iVar13;
          if ((ulonglong)FVar10 <= &local_44) {
            FVar10 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<int>)0x0) {
              FVar10 = FVar3;
            }
            if ((&local_44 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar5)();
              return pTVar9;
            }
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          *(int *)((longlong)FVar10 + (longlong)iVar13 * 4) = local_44;
        }
        else {
          if ((iVar13 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          iVar13 = (this->FreeList).ArrayNum;
          local_40[0] = *(undefined4 *)
                         ((this->FreeList).AllocatorInstance.Data + (longlong)iVar13 * 4 + -4);
          (this->FreeList).ArrayNum = iVar13 + -1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          if ((ulonglong)FVar10 <= local_40) {
            FVar10 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<int>)0x0) {
              FVar10 = FVar3;
            }
            if ((local_40 < (undefined4 *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar5)();
              return pTVar9;
            }
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          *(undefined4 *)((longlong)FVar10 + (longlong)iVar13 * 4) = local_40[0];
          fVar2 = *param_2;
          uVar11 = __return_storage_ptr__->ArrayNum - 1;
          uVar8 = 0;
          if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          uVar8 = ((int *)((longlong)FVar10 + -4))[__return_storage_ptr__->ArrayNum];
          uVar11 = 0;
          if ((int)uVar8 < (this->Storage).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          *(float *)((this->Storage).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = fVar2;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return __return_storage_ptr__;
}

// Allocate @ 14a2f0210

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::Allocate
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,int param_1,TTransform<double> *param_2,bool param_3)

{
  int *piVar1;
  ForElementType<int> FVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar10;
  ForElementType<int> FVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int local_98;
  int local_94;
  undefined4 local_90 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  uVar14 = (ulonglong)(uint)param_1;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 4;
  if (param_3) {
    if (0 < param_1) {
      local_98 = AllocateContiguous(this,param_1,param_2);
      iVar15 = local_98 + param_1;
      if (*piVar1 < param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      for (; local_98 < iVar15; local_98 = local_98 + 1) {
        FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar11 = FVar2;
        }
        if ((ulonglong)FVar11 <= &local_98) {
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          if ((&local_98 < (int *)((longlong)FVar11 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar5)();
            return pTVar10;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar11 = FVar2;
        }
        *(int *)((longlong)FVar11 + (longlong)iVar8 * 4) = local_98;
      }
    }
  }
  else {
    iVar15 = (this->FreeList).ArrayNum;
    if (param_1 < iVar15) {
      iVar15 = param_1;
    }
    if (0 < param_1 - iVar15) {
      iVar8 = (this->Storage).ArrayNum;
      uVar9 = iVar8 + (param_1 - iVar15);
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((this->Storage).ArrayMax < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar9,(ForAnyElementType *)this,iVar8,&(this->Storage).ArrayMax);
      }
    }
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    if (*piVar1 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < param_1) {
      do {
        iVar15 = (this->FreeList).ArrayNum;
        if (iVar15 == 0) {
          pTVar3 = (TTransform<double> *)(this->Storage).AllocatorInstance.Data;
          if (((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->Storage).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar5)();
            return pTVar10;
          }
          iVar15 = (this->Storage).ArrayNum;
          if (iVar15 == (this->Storage).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,(ForAnyElementType *)this,&(this->Storage).ArrayMax);
          }
          (this->Storage).ArrayNum = iVar15 + 1;
          dVar6 = (param_2->Rotation).XY.m128d_f64[1];
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          lVar13 = (longlong)iVar15 * 0x60;
          *(double *)(pFVar4 + lVar13) = (param_2->Rotation).XY.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 8) = dVar6;
          dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
          *(double *)(pFVar4 + lVar13 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 0x10 + 8) = dVar6;
          dVar6 = (param_2->Translation).XY.m128d_f64[1];
          *(double *)(pFVar4 + lVar13 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 0x20 + 8) = dVar6;
          dVar6 = (param_2->Translation).ZW.m128d_f64[1];
          *(double *)(pFVar4 + lVar13 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 0x30 + 8) = dVar6;
          dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
          *(double *)(pFVar4 + lVar13 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 0x40 + 8) = dVar6;
          dVar6 = (param_2->Scale3D).ZW.m128d_f64[1];
          *(double *)(pFVar4 + lVar13 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
          *(double *)(pFVar4 + lVar13 + 0x50 + 8) = dVar6;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          local_94 = iVar15;
          if ((ulonglong)FVar11 <= &local_94) {
            FVar11 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar2 != (ForElementType<int>)0x0) {
              FVar11 = FVar2;
            }
            if ((&local_94 < (int *)((longlong)FVar11 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                        (*pcVar5)();
              return pTVar10;
            }
          }
          iVar15 = __return_storage_ptr__->ArrayNum;
          if (iVar15 == *piVar1) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar15 + 1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          *(int *)((longlong)FVar11 + (longlong)iVar15 * 4) = local_94;
        }
        else {
          if ((iVar15 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar5)();
            return pTVar10;
          }
          iVar15 = (this->FreeList).ArrayNum;
          local_90[0] = *(undefined4 *)
                         ((this->FreeList).AllocatorInstance.Data + (longlong)iVar15 * 4 + -4);
          (this->FreeList).ArrayNum = iVar15 + -1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          if ((ulonglong)FVar11 <= local_90) {
            FVar11 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar2 != (ForElementType<int>)0x0) {
              FVar11 = FVar2;
            }
            if ((local_90 < (undefined4 *)((longlong)FVar11 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                        (*pcVar5)();
              return pTVar10;
            }
          }
          iVar15 = __return_storage_ptr__->ArrayNum;
          if (iVar15 == *piVar1) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar15 + 1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          *(undefined4 *)((longlong)FVar11 + (longlong)iVar15 * 4) = local_90[0];
          local_88 = (param_2->Rotation).XY.m128d_f64[0];
          dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
          local_78 = (param_2->Rotation).ZW.m128d_f64[0];
          dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
          uVar12 = __return_storage_ptr__->ArrayNum - 1;
          local_68 = (param_2->Translation).XY.m128d_f64[0];
          dStack_60 = (param_2->Translation).XY.m128d_f64[1];
          local_58 = (param_2->Translation).ZW.m128d_f64[0];
          dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
          uVar9 = 0;
          if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          local_48 = (param_2->Scale3D).XY.m128d_f64[0];
          dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
          local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
          dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar5)();
            return pTVar10;
          }
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          uVar9 = ((int *)((longlong)FVar11 + -4))[__return_storage_ptr__->ArrayNum];
          uVar12 = 0;
          if ((int)uVar9 < (this->Storage).ArrayNum) {
            uVar12 = ~uVar9 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar5)();
            return pTVar10;
          }
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          lVar13 = (longlong)(int)uVar9 * 0x60;
          *(double *)(pFVar4 + lVar13) = local_88;
          *(double *)(pFVar4 + lVar13 + 8) = dStack_80;
          *(double *)(pFVar4 + lVar13 + 0x10) = local_78;
          *(double *)(pFVar4 + lVar13 + 0x10 + 8) = dStack_70;
          *(double *)(pFVar4 + lVar13 + 0x20) = local_68;
          *(double *)(pFVar4 + lVar13 + 0x20 + 8) = dStack_60;
          *(double *)(pFVar4 + lVar13 + 0x30) = local_58;
          *(double *)(pFVar4 + lVar13 + 0x30 + 8) = dStack_50;
          *(double *)(pFVar4 + lVar13 + 0x40) = local_48;
          *(double *)(pFVar4 + lVar13 + 0x40 + 8) = dStack_40;
          *(double *)(pFVar4 + lVar13 + 0x50) = local_38;
          *(double *)(pFVar4 + lVar13 + 0x50 + 8) = dStack_30;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return __return_storage_ptr__;
}

// Allocate @ 14a2f0840

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::Allocate
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,int param_1,FMetadataStorage *param_2,bool param_3)

{
  int *piVar1;
  ForElementType<int> FVar2;
  FMetadataStorage *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  ForElementType<int> FVar9;
  uint uVar10;
  int iVar11;
  TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
  *pTVar12;
  ulonglong uVar13;
  int local_38;
  int local_34;
  undefined4 local_30 [2];
  
  uVar13 = (ulonglong)(uint)param_1;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 4;
  if (param_3) {
    if (0 < param_1) {
      local_38 = AllocateContiguous(this,param_1,param_2);
      iVar11 = local_38 + param_1;
      if (*piVar1 < param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      for (; local_38 < iVar11; local_38 = local_38 + 1) {
        FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar9 = FVar2;
        }
        if ((ulonglong)FVar9 <= &local_38) {
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          if ((&local_38 < (int *)((longlong)FVar9 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar9 = FVar2;
        }
        *(int *)((longlong)FVar9 + (longlong)iVar6 * 4) = local_38;
      }
    }
  }
  else {
    iVar11 = (this->FreeList).ArrayNum;
    if (param_1 < iVar11) {
      iVar11 = param_1;
    }
    if (0 < param_1 - iVar11) {
      iVar6 = (this->Storage).ArrayNum;
      uVar7 = iVar6 + (param_1 - iVar11);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((this->Storage).ArrayMax < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,uVar7,(ForAnyElementType *)this,iVar6,&(this->Storage).ArrayMax);
      }
    }
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (*piVar1 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < param_1) {
      do {
        iVar11 = (this->FreeList).ArrayNum;
        if (iVar11 == 0) {
          pFVar3 = (FMetadataStorage *)(this->Storage).AllocatorInstance.Data;
          if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (this->Storage).ArrayMax)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          iVar11 = (this->Storage).ArrayNum;
          if (iVar11 == (this->Storage).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,(ForAnyElementType *)this,&(this->Storage).ArrayMax);
          }
          (this->Storage).ArrayNum = iVar11 + 1;
          pTVar12 = (TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                     *)((this->Storage).AllocatorInstance.Data + (longlong)iVar11 * 0x60);
          *(undefined8 *)&pTVar12->Elements = 0;
          *(undefined8 *)&(pTVar12->Elements).field_0x8 = 0;
          *(undefined8 *)&(pTVar12->Elements).field_0x20 = 0;
          *(undefined4 *)&(pTVar12->Elements).field_0x28 = 0;
          *(undefined4 *)&(pTVar12->Elements).field_0x2c = 0x80;
          *(undefined4 *)&(pTVar12->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pTVar12->Elements).field_0x34 = 0;
          (pTVar12->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
          pTVar12->HashSize = 0;
          TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
          ::operator=(pTVar12,(TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                               *)param_2);
          uVar7 = (param_2->LastAccessName).Number;
          *(uint *)&pTVar12[1].Elements.field_0x0 = (param_2->LastAccessName).ComparisonIndex.Value;
          *(uint *)&pTVar12[1].Elements.field_0x4 = uVar7;
          *(FRigBaseMetadata **)&pTVar12[1].Elements.field_0x8 = param_2->LastAccessMetadata;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          local_34 = iVar11;
          if ((ulonglong)FVar9 <= &local_34) {
            FVar9 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar2 != (ForElementType<int>)0x0) {
              FVar9 = FVar2;
            }
            if ((&local_34 < (int *)((longlong)FVar9 + (longlong)*piVar1 * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar4)();
              return pTVar8;
            }
          }
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          *(int *)((longlong)FVar9 + (longlong)iVar11 * 4) = local_34;
        }
        else {
          if ((iVar11 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          iVar11 = (this->FreeList).ArrayNum;
          local_30[0] = *(undefined4 *)
                         ((this->FreeList).AllocatorInstance.Data + (longlong)iVar11 * 4 + -4);
          (this->FreeList).ArrayNum = iVar11 + -1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          if ((ulonglong)FVar9 <= local_30) {
            FVar9 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar2 != (ForElementType<int>)0x0) {
              FVar9 = FVar2;
            }
            if ((local_30 < (undefined4 *)((longlong)FVar9 + (longlong)*piVar1 * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar4)();
              return pTVar8;
            }
          }
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          *(undefined4 *)((longlong)FVar9 + (longlong)iVar11 * 4) = local_30[0];
          uVar10 = __return_storage_ptr__->ArrayNum - 1;
          uVar7 = 0;
          if ((int)uVar10 < __return_storage_ptr__->ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar9 = FVar2;
          }
          uVar7 = ((int *)((longlong)FVar9 + -4))[__return_storage_ptr__->ArrayNum];
          uVar10 = 0;
          if ((int)uVar7 < (this->Storage).ArrayNum) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          pTVar12 = (TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                     *)((this->Storage).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60);
          TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
          ::operator=(pTVar12,(TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                               *)param_2);
          uVar7 = (param_2->LastAccessName).Number;
          *(uint *)&pTVar12[1].Elements.field_0x0 = (param_2->LastAccessName).ComparisonIndex.Value;
          *(uint *)&pTVar12[1].Elements.field_0x4 = uVar7;
          *(FRigBaseMetadata **)&pTVar12[1].Elements.field_0x8 = param_2->LastAccessMetadata;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return __return_storage_ptr__;
}

// Allocate @ 14a2f0e00

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FRigReusableElementStorage<bool>::Allocate
          (FRigReusableElementStorage<bool> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,int param_1,bool *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int local_38;
  int local_34;
  undefined4 local_30 [2];
  
  uVar12 = (ulonglong)(uint)param_1;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 4;
  if (param_3) {
    if (0 < param_1) {
      local_38 = AllocateContiguous(this,param_1,param_2);
      iVar13 = local_38 + param_1;
      if (*piVar1 < param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      for (; local_38 < iVar13; local_38 = local_38 + 1) {
        FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar10 = FVar3;
        }
        if ((ulonglong)FVar10 <= &local_38) {
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          if ((&local_38 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar10 = FVar3;
        }
        *(int *)((longlong)FVar10 + (longlong)iVar7 * 4) = local_38;
      }
    }
  }
  else {
    iVar13 = (this->FreeList).ArrayNum;
    if (param_1 < iVar13) {
      iVar13 = param_1;
    }
    if (0 < param_1 - iVar13) {
      iVar7 = (this->Storage).ArrayNum;
      uVar8 = iVar7 + (param_1 - iVar13);
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((this->Storage).ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8,(ForAnyElementType *)this,iVar7,&(this->Storage).ArrayMax);
      }
    }
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (*piVar1 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < param_1) {
      do {
        iVar13 = (this->FreeList).ArrayNum;
        if (iVar13 == 0) {
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (this->Storage).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          iVar13 = (this->Storage).ArrayNum;
          if (iVar13 == (this->Storage).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,(ForAnyElementType *)this,&(this->Storage).ArrayMax);
          }
          pFVar4 = (this->Storage).AllocatorInstance.Data;
          (this->Storage).ArrayNum = iVar13 + 1;
          pFVar4[iVar13] = (FScriptContainerElement)*param_2;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          local_34 = iVar13;
          if ((ulonglong)FVar10 <= &local_34) {
            FVar10 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<int>)0x0) {
              FVar10 = FVar3;
            }
            if ((&local_34 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar5)();
              return pTVar9;
            }
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          *(int *)((longlong)FVar10 + (longlong)iVar13 * 4) = local_34;
        }
        else {
          if ((iVar13 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          iVar13 = (this->FreeList).ArrayNum;
          local_30[0] = *(undefined4 *)
                         ((this->FreeList).AllocatorInstance.Data + (longlong)iVar13 * 4 + -4);
          (this->FreeList).ArrayNum = iVar13 + -1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          if ((ulonglong)FVar10 <= local_30) {
            FVar10 = (ForElementType<int>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<int>)0x0) {
              FVar10 = FVar3;
            }
            if ((local_30 < (undefined4 *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       (*pcVar5)();
              return pTVar9;
            }
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          *(undefined4 *)((longlong)FVar10 + (longlong)iVar13 * 4) = local_30[0];
          FVar2 = (FScriptContainerElement)*param_2;
          uVar11 = __return_storage_ptr__->ArrayNum - 1;
          uVar8 = 0;
          if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<int>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar10 = FVar3;
          }
          uVar8 = ((int *)((longlong)FVar10 + -4))[__return_storage_ptr__->ArrayNum];
          uVar11 = 0;
          if ((int)uVar8 < (this->Storage).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (*pcVar5)();
            return pTVar9;
          }
          (this->Storage).AllocatorInstance.Data[(int)uVar8] = FVar2;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return __return_storage_ptr__;
}

// AllocateContiguous @ 14a2f1360

int __thiscall
FRigReusableElementStorage<float>::AllocateContiguous
          (FRigReusableElementStorage<float> *this,int param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  
  if (param_1 == 0) {
    return -1;
  }
  iVar7 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayNum;
  if (param_1 <= iVar7) {
    if (this->bFreeListIsSorted == false) {
      local_res10 = SUB41(param_1,0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(this->FreeList).AllocatorInstance.Data,iVar7,local_res10,
                 (TLess<void> *)local_res20);
      this->bFreeListIsSorted = true;
    }
    if (((this->FreeList).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    iVar7 = param_1 + -1;
    uVar10 = 1;
    uVar9 = *(uint *)(this->FreeList).AllocatorInstance.Data;
    if (1 < *piVar1) {
      lVar13 = 1;
      iVar15 = iVar7;
      do {
        iVar7 = 0;
        if (iVar15 == 0) break;
        uVar8 = 0;
        if ((int)uVar10 < (this->FreeList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar3 = (this->FreeList).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)(uVar10 - 1) < (this->FreeList).ArrayNum) {
          uVar8 = -uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (*(int *)((this->FreeList).AllocatorInstance.Data + lVar13 * 4 + -4) !=
            *(int *)(pFVar3 + lVar13 * 4) + -1) {
          uVar9 = 0;
          if ((int)uVar10 < (this->FreeList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          uVar9 = *(uint *)((this->FreeList).AllocatorInstance.Data + lVar13 * 4);
          iVar15 = param_1;
        }
        iVar7 = iVar15 + -1;
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
        iVar15 = iVar7;
      } while ((int)uVar10 < *piVar1);
    }
    if ((iVar7 < 1) && (uVar9 != 0xffffffff)) {
      iVar7 = (this->FreeList).ArrayNum;
      if (iVar7 != 0) {
        pFVar3 = (this->FreeList).AllocatorInstance.Data;
        iVar15 = 0;
        if ((*(int *)pFVar3 < (int)uVar9) || ((int)(param_1 + uVar9) <= *(int *)pFVar3)) {
          bVar14 = 1;
        }
        else {
          bVar14 = 0;
        }
        lVar13 = 0;
        iVar11 = 0;
        do {
          iVar12 = iVar11;
          do {
            lVar13 = lVar13 + 1;
            iVar12 = iVar12 + 1;
            if (iVar7 <= lVar13) break;
            if ((*(int *)(pFVar3 + lVar13 * 4) < (int)uVar9) ||
               ((int)(param_1 + uVar9) <= *(int *)(pFVar3 + lVar13 * 4))) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
          } while (bVar14 == bVar6);
          if (bVar14 != 0) {
            if (iVar15 != iVar11) {
              memmove(pFVar3 + (longlong)iVar15 * 4,pFVar3 + (longlong)iVar11 * 4,
                      (longlong)(iVar12 - iVar11) << 2);
            }
            iVar15 = iVar15 + (iVar12 - iVar11);
          }
          bVar14 = bVar14 ^ 1;
          iVar11 = iVar12;
        } while (lVar13 < iVar7);
        (this->FreeList).ArrayNum = iVar15;
      }
      goto LAB_14a2f1659;
    }
  }
  uVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,(ForAnyElementType *)this,&(this->Storage).ArrayNum,
                     &(this->Storage).ArrayMax);
LAB_14a2f1659:
  lVar13 = (longlong)(int)uVar9;
  uVar10 = uVar9;
  while( true ) {
    if ((int)(param_1 + uVar9) <= lVar13) {
      return uVar9;
    }
    fVar2 = *param_2;
    uVar8 = 0;
    if ((int)uVar10 < (this->Storage).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    uVar10 = uVar10 + 1;
    *(float *)((this->Storage).AllocatorInstance.Data + lVar13 * 4) = fVar2;
    lVar13 = lVar13 + 1;
  }
  pcVar4 = (code *)swi(3);
  iVar7 = (*pcVar4)();
  return iVar7;
}

// AllocateContiguous @ 14a2f1720

int __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::AllocateContiguous
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  byte bVar28;
  int iVar29;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  uint local_b8;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar21 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayNum;
  if (param_1 <= iVar21) {
    if (this->bFreeListIsSorted == false) {
      local_res10 = SUB41(param_1,0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(this->FreeList).AllocatorInstance.Data,iVar21,local_res10,
                 (TLess<void> *)local_res20);
      this->bFreeListIsSorted = true;
    }
    if (((this->FreeList).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      iVar21 = (*pcVar4)();
      return iVar21;
    }
    iVar21 = param_1 + -1;
    uVar23 = 1;
    local_b8 = *(uint *)(this->FreeList).AllocatorInstance.Data;
    if (1 < *piVar1) {
      lVar24 = 1;
      iVar29 = iVar21;
      do {
        iVar21 = 0;
        if (iVar29 == 0) break;
        uVar22 = 0;
        if ((int)uVar23 < (this->FreeList).ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          iVar21 = (*pcVar4)();
          return iVar21;
        }
        pFVar2 = (this->FreeList).AllocatorInstance.Data;
        uVar22 = 0;
        if ((int)(uVar23 - 1) < (this->FreeList).ArrayNum) {
          uVar22 = -uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          iVar21 = (*pcVar4)();
          return iVar21;
        }
        if (*(int *)((this->FreeList).AllocatorInstance.Data + lVar24 * 4 + -4) !=
            *(int *)(pFVar2 + lVar24 * 4) + -1) {
          uVar22 = 0;
          if ((int)uVar23 < (this->FreeList).ArrayNum) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            iVar21 = (*pcVar4)();
            return iVar21;
          }
          local_b8 = *(uint *)((this->FreeList).AllocatorInstance.Data + lVar24 * 4);
          iVar29 = param_1;
        }
        iVar21 = iVar29 + -1;
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 1;
        iVar29 = iVar21;
      } while ((int)uVar23 < *piVar1);
    }
    if ((iVar21 < 1) && (local_b8 != 0xffffffff)) {
      iVar21 = (this->FreeList).ArrayNum;
      if (iVar21 != 0) {
        pFVar2 = (this->FreeList).AllocatorInstance.Data;
        iVar29 = 0;
        if ((*(int *)pFVar2 < (int)local_b8) || ((int)(param_1 + local_b8) <= *(int *)pFVar2)) {
          bVar28 = 1;
        }
        else {
          bVar28 = 0;
        }
        lVar24 = 0;
        iVar25 = 0;
        do {
          iVar26 = iVar25;
          do {
            lVar24 = lVar24 + 1;
            iVar26 = iVar26 + 1;
            if (iVar21 <= lVar24) break;
            if ((*(int *)(pFVar2 + lVar24 * 4) < (int)local_b8) ||
               ((int)(param_1 + local_b8) <= *(int *)(pFVar2 + lVar24 * 4))) {
              bVar20 = 1;
            }
            else {
              bVar20 = 0;
            }
          } while (bVar28 == bVar20);
          if (bVar28 != 0) {
            if (iVar29 != iVar25) {
              memmove(pFVar2 + (longlong)iVar29 * 4,pFVar2 + (longlong)iVar25 * 4,
                      (longlong)(iVar26 - iVar25) << 2);
            }
            iVar29 = iVar29 + (iVar26 - iVar25);
          }
          bVar28 = bVar28 ^ 1;
          iVar25 = iVar26;
        } while (lVar24 < iVar21);
        (this->FreeList).ArrayNum = iVar29;
      }
      goto LAB_14a2f1a57;
    }
  }
  local_b8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,param_1,(ForAnyElementType *)this,&(this->Storage).ArrayNum,
                        &(this->Storage).ArrayMax);
LAB_14a2f1a57:
  lVar24 = (longlong)(int)local_b8;
  if (lVar24 < (int)(param_1 + local_b8)) {
    lVar27 = lVar24 * 0x60;
    lVar24 = (int)(param_1 + local_b8) - lVar24;
    uVar23 = local_b8;
    do {
      dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
      dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar11 = (param_2->Translation).XY.m128d_f64[0];
      dVar12 = (param_2->Translation).XY.m128d_f64[1];
      uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      uVar22 = 0;
      if ((int)uVar23 < (this->Storage).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      dVar13 = (param_2->Translation).ZW.m128d_f64[0];
      dVar14 = (param_2->Translation).ZW.m128d_f64[1];
      dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
      dVar16 = (param_2->Scale3D).XY.m128d_f64[1];
      dVar17 = (param_2->Scale3D).ZW.m128d_f64[0];
      dVar18 = (param_2->Scale3D).ZW.m128d_f64[1];
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        iVar21 = (*pcVar4)();
        return iVar21;
      }
      pFVar3 = (this->Storage).AllocatorInstance.Data;
      uVar23 = uVar23 + 1;
      pFVar2 = pFVar3 + lVar27;
      *(undefined4 *)pFVar2 = uVar5;
      *(undefined4 *)(pFVar2 + 4) = uVar6;
      *(undefined4 *)(pFVar2 + 8) = uVar7;
      *(undefined4 *)(pFVar2 + 0xc) = uVar8;
      *(double *)(pFVar3 + lVar27 + 0x10) = dVar9;
      *(double *)(pFVar3 + lVar27 + 0x10 + 8) = dVar10;
      *(double *)(pFVar3 + lVar27 + 0x20) = dVar11;
      *(double *)(pFVar3 + lVar27 + 0x20 + 8) = dVar12;
      *(double *)(pFVar3 + lVar27 + 0x30) = dVar13;
      *(double *)(pFVar3 + lVar27 + 0x30 + 8) = dVar14;
      *(double *)(pFVar3 + lVar27 + 0x40) = dVar15;
      *(double *)(pFVar3 + lVar27 + 0x40 + 8) = dVar16;
      *(double *)(pFVar3 + lVar27 + 0x50) = dVar17;
      *(double *)(pFVar3 + lVar27 + 0x50 + 8) = dVar18;
      lVar27 = lVar27 + 0x60;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  return local_b8;
}

// AllocateContiguous @ 14a2f1bb0

int __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::AllocateContiguous
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,int param_1,
          FMetadataStorage *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  
  if (param_1 == 0) {
    return -1;
  }
  iVar6 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayNum;
  if (param_1 <= iVar6) {
    if (this->bFreeListIsSorted == false) {
      local_res10 = SUB41(param_1,0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(this->FreeList).AllocatorInstance.Data,iVar6,local_res10,
                 (TLess<void> *)local_res20);
      this->bFreeListIsSorted = true;
    }
    if (((this->FreeList).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    iVar6 = param_1 + -1;
    uVar9 = 1;
    uVar8 = *(uint *)(this->FreeList).AllocatorInstance.Data;
    if (1 < *piVar1) {
      lVar10 = 1;
      do {
        if (iVar6 == 0) goto LAB_14a2f1dbb;
        uVar7 = 0;
        if ((int)uVar9 < (this->FreeList).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar2 = (this->FreeList).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)(uVar9 - 1) < (this->FreeList).ArrayNum) {
          uVar7 = -uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (*(int *)((this->FreeList).AllocatorInstance.Data + lVar10 * 4 + -4) !=
            *(int *)(pFVar2 + lVar10 * 4) + -1) {
          uVar8 = 0;
          if ((int)uVar9 < (this->FreeList).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          uVar8 = *(uint *)((this->FreeList).AllocatorInstance.Data + lVar10 * 4);
          iVar6 = param_1;
        }
        iVar6 = iVar6 + -1;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while ((int)uVar9 < *piVar1);
    }
    if (iVar6 < 1) {
LAB_14a2f1dbb:
      if (uVar8 != 0xffffffff) {
        iVar6 = (this->FreeList).ArrayNum;
        if (iVar6 != 0) {
          pFVar2 = (this->FreeList).AllocatorInstance.Data;
          iVar15 = 0;
          if ((*(int *)pFVar2 < (int)uVar8) || ((int)(param_1 + uVar8) <= *(int *)pFVar2)) {
            bVar14 = 1;
          }
          else {
            bVar14 = 0;
          }
          lVar10 = 0;
          iVar12 = 0;
          do {
            iVar13 = iVar12;
            do {
              lVar10 = lVar10 + 1;
              iVar13 = iVar13 + 1;
              if (iVar6 <= lVar10) break;
              if ((*(int *)(pFVar2 + lVar10 * 4) < (int)uVar8) ||
                 ((int)(param_1 + uVar8) <= *(int *)(pFVar2 + lVar10 * 4))) {
                bVar5 = 1;
              }
              else {
                bVar5 = 0;
              }
            } while (bVar14 == bVar5);
            if (bVar14 != 0) {
              if (iVar15 != iVar12) {
                memmove(pFVar2 + (longlong)iVar15 * 4,pFVar2 + (longlong)iVar12 * 4,
                        (longlong)(iVar13 - iVar12) << 2);
              }
              iVar15 = iVar15 + (iVar13 - iVar12);
            }
            bVar14 = bVar14 ^ 1;
            iVar12 = iVar13;
          } while (lVar10 < iVar6);
          (this->FreeList).ArrayNum = iVar15;
        }
        goto LAB_14a2f1eac;
      }
    }
  }
  uVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,param_1,(ForAnyElementType *)this,&(this->Storage).ArrayNum,
                     &(this->Storage).ArrayMax);
LAB_14a2f1eac:
  lVar10 = (longlong)(int)uVar8;
  if (lVar10 < (int)(param_1 + uVar8)) {
    lVar11 = lVar10 * 0x60;
    lVar10 = (int)(param_1 + uVar8) - lVar10;
    uVar9 = uVar8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Storage).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      this_00 = (TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                 *)((this->Storage).AllocatorInstance.Data + lVar11);
      TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
      ::operator=(this_00,(TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                           *)param_2);
      uVar7 = (param_2->LastAccessName).Number;
      uVar9 = uVar9 + 1;
      *(uint *)&this_00[1].Elements.field_0x0 = (param_2->LastAccessName).ComparisonIndex.Value;
      *(uint *)&this_00[1].Elements.field_0x4 = uVar7;
      lVar11 = lVar11 + 0x60;
      *(FRigBaseMetadata **)&this_00[1].Elements.field_0x8 = param_2->LastAccessMetadata;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return uVar8;
}

// AllocateContiguous @ 14a2f1f80

int __thiscall
FRigReusableElementStorage<bool>::AllocateContiguous
          (FRigReusableElementStorage<bool> *this,int param_1,bool *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  
  if (param_1 == 0) {
    return -1;
  }
  iVar7 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayNum;
  if (param_1 <= iVar7) {
    if (this->bFreeListIsSorted == false) {
      local_res10 = SUB41(param_1,0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(this->FreeList).AllocatorInstance.Data,iVar7,local_res10,
                 (TLess<void> *)local_res20);
      this->bFreeListIsSorted = true;
    }
    if (((this->FreeList).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    iVar7 = param_1 + -1;
    uVar10 = 1;
    uVar9 = *(uint *)(this->FreeList).AllocatorInstance.Data;
    if (1 < *piVar1) {
      lVar11 = 1;
      do {
        if (iVar7 == 0) goto LAB_14a2f218b;
        uVar8 = 0;
        if ((int)uVar10 < (this->FreeList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar3 = (this->FreeList).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)(uVar10 - 1) < (this->FreeList).ArrayNum) {
          uVar8 = -uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (*(int *)((this->FreeList).AllocatorInstance.Data + lVar11 * 4 + -4) !=
            *(int *)(pFVar3 + lVar11 * 4) + -1) {
          uVar9 = 0;
          if ((int)uVar10 < (this->FreeList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          uVar9 = *(uint *)((this->FreeList).AllocatorInstance.Data + lVar11 * 4);
          iVar7 = param_1;
        }
        iVar7 = iVar7 + -1;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar10 < *piVar1);
    }
    if (iVar7 < 1) {
LAB_14a2f218b:
      if (uVar9 != 0xffffffff) {
        iVar7 = (this->FreeList).ArrayNum;
        if (iVar7 != 0) {
          pFVar3 = (this->FreeList).AllocatorInstance.Data;
          iVar15 = 0;
          if ((*(int *)pFVar3 < (int)uVar9) || ((int)(param_1 + uVar9) <= *(int *)pFVar3)) {
            bVar14 = 1;
          }
          else {
            bVar14 = 0;
          }
          lVar11 = 0;
          iVar12 = 0;
          do {
            iVar13 = iVar12;
            do {
              lVar11 = lVar11 + 1;
              iVar13 = iVar13 + 1;
              if (iVar7 <= lVar11) break;
              if ((*(int *)(pFVar3 + lVar11 * 4) < (int)uVar9) ||
                 ((int)(param_1 + uVar9) <= *(int *)(pFVar3 + lVar11 * 4))) {
                bVar6 = 1;
              }
              else {
                bVar6 = 0;
              }
            } while (bVar14 == bVar6);
            if (bVar14 != 0) {
              if (iVar15 != iVar12) {
                memmove(pFVar3 + (longlong)iVar15 * 4,pFVar3 + (longlong)iVar12 * 4,
                        (longlong)(iVar13 - iVar12) << 2);
              }
              iVar15 = iVar15 + (iVar13 - iVar12);
            }
            bVar14 = bVar14 ^ 1;
            iVar12 = iVar13;
          } while (lVar11 < iVar7);
          (this->FreeList).ArrayNum = iVar15;
        }
        goto LAB_14a2f2279;
      }
    }
  }
  uVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,(ForAnyElementType *)this,&(this->Storage).ArrayNum,
                     &(this->Storage).ArrayMax);
LAB_14a2f2279:
  lVar11 = (longlong)(int)uVar9;
  uVar10 = uVar9;
  while( true ) {
    if ((int)(param_1 + uVar9) <= lVar11) {
      return uVar9;
    }
    FVar2 = (FScriptContainerElement)*param_2;
    uVar8 = 0;
    if ((int)uVar10 < (this->Storage).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    uVar10 = uVar10 + 1;
    (this->Storage).AllocatorInstance.Data[lVar11] = FVar2;
    lVar11 = lVar11 + 1;
  }
  pcVar4 = (code *)swi(3);
  iVar7 = (*pcVar4)();
  return iVar7;
}

// Deallocate @ 14a2feb40

void __thiscall
FRigReusableElementStorage<float>::Deallocate
          (FRigReusableElementStorage<float> *this,int *param_1,float **param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != -1) {
    if (this->bFreeListIsSorted != false) {
      iVar6 = (this->FreeList).ArrayNum;
      if (iVar6 != 0) {
        uVar5 = 0;
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar5 = ~(iVar6 - 1U) >> 0x1f;
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
        if (*param_1 <
            *(int *)((this->FreeList).AllocatorInstance.Data +
                    (longlong)(this->FreeList).ArrayNum * 4 + -4)) {
          this->bFreeListIsSorted = false;
        }
      }
    }
    pFVar2 = (this->FreeList).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 4)) {
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
    iVar6 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeList).AllocatorInstance,piVar1);
    }
    (this->FreeList).ArrayNum = iVar6 + 1;
    *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = *param_1;
    *param_1 = -1;
    if (param_2 != (float **)0x0) {
      *param_2 = (float *)0x0;
    }
  }
  return;
}

// Deallocate @ 14a2fec80

void __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,int *param_1,
          TTransform<double> **param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != -1) {
    if (this->bFreeListIsSorted != false) {
      iVar6 = (this->FreeList).ArrayNum;
      if (iVar6 != 0) {
        uVar5 = 0;
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar5 = ~(iVar6 - 1U) >> 0x1f;
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
        if (*param_1 <
            *(int *)((this->FreeList).AllocatorInstance.Data +
                    (longlong)(this->FreeList).ArrayNum * 4 + -4)) {
          this->bFreeListIsSorted = false;
        }
      }
    }
    pFVar2 = (this->FreeList).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 4)) {
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
    iVar6 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeList).AllocatorInstance,piVar1);
    }
    (this->FreeList).ArrayNum = iVar6 + 1;
    *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = *param_1;
    *param_1 = -1;
    if (param_2 != (TTransform<double> **)0x0) {
      *param_2 = (TTransform<double> *)0x0;
    }
  }
  return;
}

// Deallocate @ 14a2fedc0

void __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::Deallocate
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,int *param_1,
          FMetadataStorage **param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != -1) {
    if (this->bFreeListIsSorted != false) {
      iVar6 = (this->FreeList).ArrayNum;
      if (iVar6 != 0) {
        uVar5 = 0;
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar5 = ~(iVar6 - 1U) >> 0x1f;
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
        if (*param_1 <
            *(int *)((this->FreeList).AllocatorInstance.Data +
                    (longlong)(this->FreeList).ArrayNum * 4 + -4)) {
          this->bFreeListIsSorted = false;
        }
      }
    }
    pFVar2 = (this->FreeList).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 4)) {
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
    iVar6 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeList).AllocatorInstance,piVar1);
    }
    (this->FreeList).ArrayNum = iVar6 + 1;
    *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = *param_1;
    *param_1 = -1;
    if (param_2 != (FMetadataStorage **)0x0) {
      *param_2 = (FMetadataStorage *)0x0;
    }
  }
  return;
}

// Deallocate @ 14a2fef00

void __thiscall
FRigReusableElementStorage<bool>::Deallocate
          (FRigReusableElementStorage<bool> *this,int *param_1,bool **param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != -1) {
    if (this->bFreeListIsSorted != false) {
      iVar6 = (this->FreeList).ArrayNum;
      if (iVar6 != 0) {
        uVar5 = 0;
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar5 = ~(iVar6 - 1U) >> 0x1f;
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
        if (*param_1 <
            *(int *)((this->FreeList).AllocatorInstance.Data +
                    (longlong)(this->FreeList).ArrayNum * 4 + -4)) {
          this->bFreeListIsSorted = false;
        }
      }
    }
    pFVar2 = (this->FreeList).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 4)) {
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
    iVar6 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeList).AllocatorInstance,piVar1);
    }
    (this->FreeList).ArrayNum = iVar6 + 1;
    *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = *param_1;
    *param_1 = -1;
    if (param_2 != (bool **)0x0) {
      *param_2 = (bool *)0x0;
    }
  }
  return;
}

// Reset @ 14a33fd70

void __thiscall
FRigReusableElementStorage<float>::Reset
          (FRigReusableElementStorage<float> *this,TFunction<void___cdecl(int,float_*)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar7 = 0;
  if ((*(longlong *)param_1 != 0) && (iVar6 = (this->Storage).ArrayNum, 0 < iVar6)) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar6) {
        uVar3 = ~uVar7 >> 0x1f;
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
      local_30 = (this->Storage).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
      local_38[0] = uVar7;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar5 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar5 = (longlong *)&param_1->field_0x10;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,local_38);
      iVar6 = (this->Storage).ArrayNum;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  (this->Storage).ArrayNum = 0;
  if ((this->Storage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  this->bFreeListIsSorted = true;
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar5 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a33fedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// Reset @ 14a33fef0

void __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::Reset
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,
          TFunction<void___cdecl(int,UE::Math::TTransform<double>_*)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar7 = 0;
  if ((*(longlong *)param_1 != 0) && (iVar6 = (this->Storage).ArrayNum, 0 < iVar6)) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar6) {
        uVar3 = ~uVar7 >> 0x1f;
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
      local_30 = (this->Storage).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60;
      local_38[0] = uVar7;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar5 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar5 = (longlong *)&param_1->field_0x10;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,local_38);
      iVar6 = (this->Storage).ArrayNum;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  (this->Storage).ArrayNum = 0;
  if ((this->Storage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  this->bFreeListIsSorted = true;
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar5 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a340062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// Reset @ 14a340080

void __thiscall
FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::Reset
          (FRigReusableElementStorage<URigHierarchy::FMetadataStorage> *this,
          TFunction<void___cdecl(int,URigHierarchy::FMetadataStorage_*)> *param_1)

{
  int *piVar1;
  FMetadataStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar9 = 0;
  if ((*(longlong *)param_1 != 0) && (iVar8 = (this->Storage).ArrayNum, 0 < iVar8)) {
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_30 = (this->Storage).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60;
      local_38[0] = uVar9;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar7 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar7 = (longlong *)&param_1->field_0x10;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar6,local_38);
      iVar8 = (this->Storage).ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar8);
  }
  piVar1 = &(this->Storage).ArrayMax;
  pFVar2 = (FMetadataStorage *)(this->Storage).AllocatorInstance.Data;
  iVar8 = (this->Storage).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<URigHierarchy::FMetadataStorage,int>(pFVar2,iVar8);
    (this->Storage).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<URigHierarchy::FMetadataStorage,int>(pFVar2,iVar8);
    (this->Storage).ArrayNum = 0;
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  this->bFreeListIsSorted = true;
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a34020b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Reset @ 14a340220

void __thiscall
FRigReusableElementStorage<bool>::Reset
          (FRigReusableElementStorage<bool> *this,TFunction<void___cdecl(int,bool_*)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar7 = 0;
  if ((*(longlong *)param_1 != 0) && (iVar6 = (this->Storage).ArrayNum, 0 < iVar6)) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar6) {
        uVar3 = ~uVar7 >> 0x1f;
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
      local_30 = (this->Storage).AllocatorInstance.Data + (int)uVar7;
      local_38[0] = uVar7;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar5 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar5 = (longlong *)&param_1->field_0x10;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,local_38);
      iVar6 = (this->Storage).ArrayNum;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  (this->Storage).ArrayNum = 0;
  if ((this->Storage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  this->bFreeListIsSorted = true;
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar5 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a340387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// Shrink @ 14a3534c0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
FRigReusableElementStorage<float>::Shrink
          (FRigReusableElementStorage<float> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__,TFunction<void___cdecl(int,float_&)> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<FSetElementId> FVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_e8 [4];
  uint local_e4;
  undefined1 local_e0 [24];
  ForAnyElementType local_c8;
  int local_c0 [4];
  uint local_b0 [2];
  uint local_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  TPairInitializer<int_const_&,int_const_&> local_80;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  uint *local_48;
  uint *local_40;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar7 = (this->FreeList).ArrayNum;
  local_e0._16_8_ = param_1;
  local_80.Value = (int *)__return_storage_ptr__;
  if (iVar7 == 0) goto LAB_14a353b7a;
  iVar3 = (this->Storage).ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_8_ = 0;
  if ((iVar7 != iVar3) || (*(longlong *)param_1 != 0)) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar3,&local_c8,local_c0,local_c0 + 1);
    memset(local_c8.Data + iVar7,0,(longlong)iVar3);
    pFVar23 = (this->FreeList).AllocatorInstance.Data;
    iVar7 = (this->FreeList).ArrayNum;
    pFVar2 = pFVar23 + (longlong)iVar7 * 4;
    while( true ) {
      if ((this->FreeList).ArrayNum != iVar7) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (pFVar23 == pFVar2) break;
      uVar16 = *(uint *)pFVar23;
      uVar15 = 0;
      if ((int)uVar16 < local_c0[0]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar5)();
        return pTVar8;
      }
      local_c8.Data[(int)uVar16] = (FScriptContainerElement)0x1;
      if (*(longlong *)local_e0._16_8_ == 0) {
        pFVar23 = pFVar23 + 4;
        param_1 = (TFunction<void___cdecl(int,float_&)> *)local_e0._16_8_;
      }
      else {
        uVar15 = 0;
        if ((int)uVar16 < (this->Storage).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar5)();
          return pTVar8;
        }
        param_1 = (TFunction<void___cdecl(int,float_&)> *)local_e0._16_8_;
        local_c0[2] = uVar16;
        UE::Core::Private::Function::CheckCallable(*(void **)local_e0._16_8_);
        pcVar5 = *(code **)param_1;
        pFVar11 = *(FScriptContainerElement **)((longlong)param_1 + 0x28);
        if (*(FScriptContainerElement **)((longlong)param_1 + 0x28) ==
            (FScriptContainerElement *)0x0) {
          pFVar11 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
        }
        uVar9 = (**(code **)(*(longlong *)pFVar11 + 8))();
        (*pcVar5)(uVar9,local_c0 + 2);
        pFVar23 = pFVar23 + 4;
      }
    }
  }
  __return_storage_ptr__ =
       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_80.Value;
  uVar17 = 0;
  iVar7 = (this->Storage).ArrayNum;
  iVar3 = (this->FreeList).ArrayNum;
  if (iVar3 == iVar7) {
    (this->Storage).ArrayNum = 0;
    if ((this->Storage).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
    }
  }
  else {
    uVar16 = iVar7 - iVar3;
    if ((uint)(*(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_80.Value)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_80.Value)->field_0x34) < uVar16) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_80.Value,uVar16);
      uVar15 = 1;
      if (3 < uVar16) {
        uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_88 = (undefined4)lVar20;
        uVar15 = 1 << ((byte)lVar20 & 0x1f);
      }
      if ((*(int *)((longlong)__return_storage_ptr__ + 0x48) == 0) ||
         (*(int *)((longlong)__return_storage_ptr__ + 0x48) < (int)uVar15)) {
        *(uint *)((longlong)__return_storage_ptr__ + 0x48) = uVar15;
        if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
            SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData,0,0,4);
        }
        if (uVar15 != 0) {
          uVar18 = uVar15;
          if (uVar15 < 2) {
            if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                SecondaryData != (ForElementType<FSetElementId>)0x0) {
              uVar18 = 0;
              goto LAB_14a353739;
            }
          }
          else {
LAB_14a353739:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)
                       &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))
                        ->SecondaryData,0,uVar18,4);
          }
          if (0 < (int)uVar15) {
            uVar19 = (ulonglong)uVar15;
            uVar14 = uVar17;
            do {
              FVar4 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar4;
              }
              uVar10 = uVar14 & (longlong)(int)uVar15 - 1U;
              uVar14 = uVar14 + 1;
              *(undefined4 *)((longlong)FVar12 + uVar10 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        param_1 = (TFunction<void___cdecl(int,float_&)> *)local_e0._16_8_;
        if (*(int *)((longlong)__return_storage_ptr__ + 0x48) != 0) {
          uVar15 = *(uint *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)__return_storage_ptr__)->field_0x28;
          puStack_a0 = &((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)__return_storage_ptr__)->field_0x10;
          uStack_a4 = 1;
          local_a8 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uVar14 = uVar17;
          if (uVar15 != 0) {
            puVar21 = *(uint **)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)__return_storage_ptr__)->field_0x20;
            if (puVar21 == (uint *)0x0) {
              puVar21 = (uint *)puStack_a0;
            }
            uVar18 = *puVar21;
            uVar19 = uVar17;
            while (uVar18 == 0) {
              uStack_90 = (int)uVar19 + 0x20;
              uVar19 = (ulonglong)uStack_90;
              iVar7 = (int)uVar14;
              local_a8 = iVar7 + 1;
              uVar14 = (ulonglong)local_a8;
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a8)
              goto LAB_14a35383d;
              uVar18 = puVar21[(longlong)iVar7 + 1];
            }
            uStack_a4 = -uVar18 & uVar18;
            uVar14 = (ulonglong)uStack_a4 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_84 = (int)lVar20;
            uStack_94 = local_84 + -1 + uStack_90;
            uVar14 = (ulonglong)uStack_94;
            if ((int)uVar15 < (int)uStack_94) {
LAB_14a35383d:
              uVar14 = (ulonglong)uVar15;
              uStack_94 = uVar15;
            }
          }
          local_98 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_a4,local_a8);
          local_68.CurrentBitIndex = uStack_94;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_8c;
          local_68.BaseBitIndex = uStack_90;
          local_70 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_a0;
          if ((int)uVar14 <
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__)->field_0x28) {
            do {
              lVar20 = *(longlong *)&local_70->Elements;
              lVar22 = (longlong)(int)uVar14 * 0x10;
              uVar15 = *(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U &
                       *(uint *)(lVar22 + lVar20);
              *(uint *)(lVar22 + 0xc + lVar20) = uVar15;
              FVar4 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar4;
              }
              uVar19 = (longlong)*(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U &
                       (longlong)(int)uVar15;
              *(undefined4 *)(lVar22 + 8 + lVar20) = *(undefined4 *)((longlong)FVar12 + uVar19 * 4);
              *(int *)((longlong)FVar12 + uVar19 * 4) = (int)uVar14;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              uVar14 = (ulonglong)(uint)local_68.CurrentBitIndex;
              param_1 = (TFunction<void___cdecl(int,float_&)> *)local_e0._16_8_;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
    }
    local_e0._0_8_ = (FScriptContainerElement *)0x0;
    local_e0._8_4_ = 0;
    local_e0._12_4_ = 0;
    uVar14 = uVar17;
    if (0 < (int)uVar16) {
      uVar14 = (ulonglong)uVar16;
    }
    iVar7 = (int)uVar14;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    if (0 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
    }
    local_e4 = 0;
    if (0 < (this->Storage).ArrayNum) {
      do {
        uVar15 = (uint)uVar17;
        uVar16 = 0;
        if ((int)uVar15 < local_c0[0]) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        uVar18 = uVar15;
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar18 = local_e4, bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar5)();
          return pTVar8;
        }
        if (local_c8.Data[(int)uVar15] == (FScriptContainerElement)0x0) {
          uVar16 = 0;
          if ((int)uVar18 < (this->Storage).ArrayNum) {
            uVar16 = ~uVar18 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar5)();
            return pTVar8;
          }
          pFVar2 = (this->Storage).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
          if ((((ulonglong)local_e0._0_8_ <= pFVar2) &&
              (pFVar2 < (FScriptContainerElement *)
                        (local_e0._0_8_ + (longlong)(int)local_e0._12_4_ * 4))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar5)();
            return pTVar8;
          }
          if (local_e0._8_4_ == local_e0._12_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)local_e0,(int *)(local_e0 + 0xc));
            local_e0._8_4_ = iVar7;
          }
          local_b0[0] = local_e0._8_4_;
          lVar20 = (longlong)(int)local_e0._8_4_;
          local_e0._8_4_ = local_e0._8_4_ + 1;
          *(undefined4 *)(local_e0._0_8_ + lVar20 * 4) = *(undefined4 *)pFVar2;
          uVar18 = local_e4;
          if (local_e4 != local_b0[0]) {
            local_48 = &local_e4;
            local_40 = local_b0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,&local_80,(bool *)&local_48);
            uVar18 = local_e4;
          }
        }
        local_e4 = uVar18 + 1;
        uVar17 = (ulonglong)local_e4;
      } while ((int)local_e4 < (this->Storage).ArrayNum);
    }
    if (this != (FRigReusableElementStorage<float> *)local_e0) {
      pFVar2 = (this->Storage).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)local_e0._0_8_;
      (this->Storage).ArrayNum = local_e0._8_4_;
      (this->Storage).ArrayMax = local_e0._12_4_;
      local_e0._8_4_ = 0;
      local_e0._12_4_ = 0;
      local_e0._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e0._0_8_);
    }
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
LAB_14a353b7a:
  iVar7 = (this->FreeList).ArrayNum;
  if ((this->FreeList).ArrayMax != iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
  }
  iVar7 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (*piVar1 != iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,(ForAnyElementType *)this,iVar7,piVar1);
  }
  if (*(longlong *)param_1 != 0) {
    plVar13 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
         (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
         __return_storage_ptr__;
}

// Shrink @ 14a353c20

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
FRigReusableElementStorage<UE::Math::TTransform<double>_>::Shrink
          (FRigReusableElementStorage<UE::Math::TTransform<double>_> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__,
          TFunction<void___cdecl(int,UE::Math::TTransform<double>_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FSetElementId> FVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_e8 [4];
  uint local_e4;
  undefined1 local_e0 [24];
  ForAnyElementType local_c8;
  int local_c0 [4];
  uint local_b0 [2];
  uint local_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  TPairInitializer<int_const_&,int_const_&> local_80;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  uint *local_48;
  uint *local_40;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar6 = (this->FreeList).ArrayNum;
  local_e0._16_8_ = param_1;
  local_80.Value = (int *)__return_storage_ptr__;
  if (iVar6 == 0) goto LAB_14a35430b;
  iVar2 = (this->Storage).ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_8_ = 0;
  if ((iVar6 != iVar2) || (*(longlong *)param_1 != 0)) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,&local_c8,local_c0,local_c0 + 1);
    memset(local_c8.Data + iVar6,0,(longlong)iVar2);
    pFVar22 = (this->FreeList).AllocatorInstance.Data;
    iVar6 = (this->FreeList).ArrayNum;
    pFVar16 = pFVar22 + (longlong)iVar6 * 4;
    while( true ) {
      if ((this->FreeList).ArrayNum != iVar6) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (pFVar22 == pFVar16) break;
      uVar17 = *(uint *)pFVar22;
      uVar15 = 0;
      if ((int)uVar17 < local_c0[0]) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      local_c8.Data[(int)uVar17] = (FScriptContainerElement)0x1;
      if (*(longlong *)local_e0._16_8_ == 0) {
        pFVar22 = pFVar22 + 4;
        param_1 = (TFunction<void___cdecl(int,UE::Math::TTransform<double>_&)> *)local_e0._16_8_;
      }
      else {
        uVar15 = 0;
        if ((int)uVar17 < (this->Storage).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        param_1 = (TFunction<void___cdecl(int,UE::Math::TTransform<double>_&)> *)local_e0._16_8_;
        local_c0[2] = uVar17;
        UE::Core::Private::Function::CheckCallable(*(void **)local_e0._16_8_);
        pcVar4 = *(code **)param_1;
        pFVar10 = *(FScriptContainerElement **)((longlong)param_1 + 0x28);
        if (*(FScriptContainerElement **)((longlong)param_1 + 0x28) ==
            (FScriptContainerElement *)0x0) {
          pFVar10 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
        }
        uVar8 = (**(code **)(*(longlong *)pFVar10 + 8))();
        (*pcVar4)(uVar8,local_c0 + 2);
        pFVar22 = pFVar22 + 4;
      }
    }
  }
  __return_storage_ptr__ =
       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_80.Value;
  uVar18 = 0;
  iVar6 = (this->Storage).ArrayNum;
  iVar2 = (this->FreeList).ArrayNum;
  if (iVar2 == iVar6) {
    (this->Storage).ArrayNum = 0;
    if ((this->Storage).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
    }
  }
  else {
    uVar17 = iVar6 - iVar2;
    if ((uint)(*(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_80.Value)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_80.Value)->field_0x34) < uVar17) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_80.Value,uVar17);
      uVar15 = 1;
      if (3 < uVar17) {
        uVar13 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_88 = (undefined4)lVar14;
        uVar15 = 1 << ((byte)lVar14 & 0x1f);
      }
      if ((*(int *)((longlong)__return_storage_ptr__ + 0x48) == 0) ||
         (*(int *)((longlong)__return_storage_ptr__ + 0x48) < (int)uVar15)) {
        *(uint *)((longlong)__return_storage_ptr__ + 0x48) = uVar15;
        if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
            SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData,0,0,4);
        }
        if (uVar15 != 0) {
          uVar19 = uVar15;
          if (uVar15 < 2) {
            if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                SecondaryData != (ForElementType<FSetElementId>)0x0) {
              uVar19 = 0;
              goto LAB_14a353e9d;
            }
          }
          else {
LAB_14a353e9d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)
                       &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))
                        ->SecondaryData,0,uVar19,4);
          }
          if (0 < (int)uVar15) {
            uVar20 = (ulonglong)uVar15;
            uVar13 = uVar18;
            do {
              FVar3 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar11 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar11 = FVar3;
              }
              uVar9 = uVar13 & (longlong)(int)uVar15 - 1U;
              uVar13 = uVar13 + 1;
              *(undefined4 *)((longlong)FVar11 + uVar9 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        param_1 = (TFunction<void___cdecl(int,UE::Math::TTransform<double>_&)> *)local_e0._16_8_;
        if (*(int *)((longlong)__return_storage_ptr__ + 0x48) != 0) {
          uVar15 = *(uint *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)__return_storage_ptr__)->field_0x28;
          puStack_a0 = &((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)__return_storage_ptr__)->field_0x10;
          uStack_a4 = 1;
          local_a8 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uVar13 = uVar18;
          if (uVar15 != 0) {
            puVar21 = *(uint **)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)__return_storage_ptr__)->field_0x20;
            if (puVar21 == (uint *)0x0) {
              puVar21 = (uint *)puStack_a0;
            }
            uVar19 = *puVar21;
            uVar20 = uVar18;
            while (uVar19 == 0) {
              uStack_90 = (int)uVar20 + 0x20;
              uVar20 = (ulonglong)uStack_90;
              iVar6 = (int)uVar13;
              local_a8 = iVar6 + 1;
              uVar13 = (ulonglong)local_a8;
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a8)
              goto LAB_14a353f9d;
              uVar19 = puVar21[(longlong)iVar6 + 1];
            }
            uStack_a4 = -uVar19 & uVar19;
            uVar13 = (ulonglong)uStack_a4 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_84 = (int)lVar14;
            uStack_94 = local_84 + -1 + uStack_90;
            uVar13 = (ulonglong)uStack_94;
            if ((int)uVar15 < (int)uStack_94) {
LAB_14a353f9d:
              uVar13 = (ulonglong)uVar15;
              uStack_94 = uVar15;
            }
          }
          local_98 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_a4,local_a8);
          local_68.CurrentBitIndex = uStack_94;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_8c;
          local_68.BaseBitIndex = uStack_90;
          local_70 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_a0;
          if ((int)uVar13 < (int)uVar15) {
            do {
              puVar21 = (uint *)((longlong)(int)uVar13 * 0x10 + *(longlong *)&local_70->Elements);
              uVar15 = *(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U & *puVar21;
              puVar21[3] = uVar15;
              FVar3 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar11 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar11 = FVar3;
              }
              uVar20 = (longlong)*(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U &
                       (longlong)(int)uVar15;
              puVar21[2] = *(uint *)((longlong)FVar11 + uVar20 * 4);
              *(int *)((longlong)FVar11 + uVar20 * 4) = (int)uVar13;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              uVar13 = (ulonglong)(uint)local_68.CurrentBitIndex;
              param_1 = (TFunction<void___cdecl(int,UE::Math::TTransform<double>_&)> *)
                        local_e0._16_8_;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
    }
    local_e0._0_8_ = (FScriptContainerElement *)0x0;
    local_e0._8_4_ = 0;
    local_e0._12_4_ = 0;
    uVar13 = uVar18;
    if (0 < (int)uVar17) {
      uVar13 = (ulonglong)uVar17;
    }
    iVar6 = (int)uVar13;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (0 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar6,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
    }
    local_e4 = 0;
    if (0 < (this->Storage).ArrayNum) {
      do {
        uVar15 = (uint)uVar18;
        uVar17 = 0;
        if ((int)uVar15 < local_c0[0]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        uVar19 = uVar15;
        if ((uVar17 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar19 = local_e4, bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        if (local_c8.Data[(int)uVar15] == (FScriptContainerElement)0x0) {
          uVar17 = 0;
          if ((int)uVar19 < (this->Storage).ArrayNum) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar4)();
            return pTVar7;
          }
          pFVar16 = (this->Storage).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x60;
          if ((((ulonglong)local_e0._0_8_ <= pFVar16) &&
              (pFVar16 < (FScriptContainerElement *)
                         (local_e0._0_8_ + (longlong)(int)local_e0._12_4_ * 0x60))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar4)();
            return pTVar7;
          }
          if (local_e0._8_4_ == local_e0._12_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,(ForAnyElementType *)local_e0,(int *)(local_e0 + 0xc));
            local_e0._8_4_ = iVar6;
          }
          local_b0[0] = local_e0._8_4_;
          lVar14 = (longlong)(int)local_e0._8_4_;
          local_e0._8_4_ = local_e0._8_4_ + 1;
          uVar8 = *(undefined8 *)(pFVar16 + 8);
          lVar14 = lVar14 * 0x60;
          *(undefined8 *)(local_e0._0_8_ + lVar14) = *(undefined8 *)pFVar16;
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14) + 8) = uVar8;
          uVar8 = *(undefined8 *)(pFVar16 + 0x18);
          *(undefined8 *)(local_e0._0_8_ + lVar14 + 0x10) = *(undefined8 *)(pFVar16 + 0x10);
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14 + 0x10) + 8) = uVar8;
          uVar8 = *(undefined8 *)(pFVar16 + 0x28);
          *(undefined8 *)(local_e0._0_8_ + lVar14 + 0x20) = *(undefined8 *)(pFVar16 + 0x20);
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14 + 0x20) + 8) = uVar8;
          uVar8 = *(undefined8 *)(pFVar16 + 0x38);
          *(undefined8 *)(local_e0._0_8_ + lVar14 + 0x30) = *(undefined8 *)(pFVar16 + 0x30);
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14 + 0x30) + 8) = uVar8;
          uVar8 = *(undefined8 *)(pFVar16 + 0x48);
          *(undefined8 *)(local_e0._0_8_ + lVar14 + 0x40) = *(undefined8 *)(pFVar16 + 0x40);
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14 + 0x40) + 8) = uVar8;
          uVar8 = *(undefined8 *)(pFVar16 + 0x58);
          *(undefined8 *)(local_e0._0_8_ + lVar14 + 0x50) = *(undefined8 *)(pFVar16 + 0x50);
          *(undefined8 *)((FScriptContainerElement *)(local_e0._0_8_ + lVar14 + 0x50) + 8) = uVar8;
          uVar19 = local_e4;
          if (local_e4 != local_b0[0]) {
            local_48 = &local_e4;
            local_40 = local_b0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,&local_80,(bool *)&local_48);
            uVar19 = local_e4;
          }
        }
        local_e4 = uVar19 + 1;
        uVar18 = (ulonglong)local_e4;
      } while ((int)local_e4 < (this->Storage).ArrayNum);
    }
    if (this != (FRigReusableElementStorage<UE::Math::TTransform<double>_> *)local_e0) {
      pFVar16 = (this->Storage).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)local_e0._0_8_;
      (this->Storage).ArrayNum = local_e0._8_4_;
      (this->Storage).ArrayMax = local_e0._12_4_;
      local_e0._8_4_ = 0;
      local_e0._12_4_ = 0;
      local_e0._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e0._0_8_);
    }
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
LAB_14a35430b:
  iVar6 = (this->FreeList).ArrayNum;
  if ((this->FreeList).ArrayMax != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,&(this->FreeList).AllocatorInstance,iVar6,&(this->FreeList).ArrayMax);
  }
  iVar6 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,(ForAnyElementType *)this,iVar6,piVar1);
  }
  if (*(longlong *)param_1 != 0) {
    plVar12 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
         (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
         __return_storage_ptr__;
}

// Shrink @ 14a3543b0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
FRigReusableElementStorage<bool>::Shrink
          (FRigReusableElementStorage<bool> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__,TFunction<void___cdecl(int,bool_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FSetElementId> FVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_e8 [4];
  uint local_e4;
  undefined1 local_e0 [24];
  ForAnyElementType local_c8;
  int local_c0 [4];
  uint local_b0 [2];
  uint local_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  TPairInitializer<int_const_&,int_const_&> local_80;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  uint *local_48;
  uint *local_40;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar6 = (this->FreeList).ArrayNum;
  local_e0._16_8_ = param_1;
  local_80.Value = (int *)__return_storage_ptr__;
  if (iVar6 == 0) goto LAB_14a354a47;
  iVar2 = (this->Storage).ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_8_ = 0;
  if ((iVar6 != iVar2) || (*(longlong *)param_1 != 0)) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,&local_c8,local_c0,local_c0 + 1);
    memset(local_c8.Data + iVar6,0,(longlong)iVar2);
    pFVar22 = (this->FreeList).AllocatorInstance.Data;
    iVar6 = (this->FreeList).ArrayNum;
    pFVar15 = pFVar22 + (longlong)iVar6 * 4;
    while( true ) {
      if ((this->FreeList).ArrayNum != iVar6) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (pFVar22 == pFVar15) break;
      uVar16 = *(uint *)pFVar22;
      uVar14 = 0;
      if ((int)uVar16 < local_c0[0]) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      local_c8.Data[(int)uVar16] = (FScriptContainerElement)0x1;
      if (*(longlong *)local_e0._16_8_ == 0) {
        pFVar22 = pFVar22 + 4;
        param_1 = (TFunction<void___cdecl(int,bool_&)> *)local_e0._16_8_;
      }
      else {
        uVar14 = 0;
        if ((int)uVar16 < (this->Storage).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        param_1 = (TFunction<void___cdecl(int,bool_&)> *)local_e0._16_8_;
        local_c0[2] = uVar16;
        UE::Core::Private::Function::CheckCallable(*(void **)local_e0._16_8_);
        pcVar4 = *(code **)param_1;
        pFVar10 = *(FScriptContainerElement **)((longlong)param_1 + 0x28);
        if (*(FScriptContainerElement **)((longlong)param_1 + 0x28) ==
            (FScriptContainerElement *)0x0) {
          pFVar10 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
        }
        uVar8 = (**(code **)(*(longlong *)pFVar10 + 8))();
        (*pcVar4)(uVar8,local_c0 + 2);
        pFVar22 = pFVar22 + 4;
      }
    }
  }
  __return_storage_ptr__ =
       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_80.Value;
  uVar17 = 0;
  iVar6 = (this->Storage).ArrayNum;
  iVar2 = (this->FreeList).ArrayNum;
  if (iVar2 == iVar6) {
    (this->Storage).ArrayNum = 0;
    if ((this->Storage).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this,0,&(this->Storage).ArrayMax);
    }
  }
  else {
    uVar16 = iVar6 - iVar2;
    if ((uint)(*(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_80.Value)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_80.Value)->field_0x34) < uVar16) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_80.Value,uVar16);
      uVar14 = 1;
      if (3 < uVar16) {
        uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_88 = (undefined4)lVar20;
        uVar14 = 1 << ((byte)lVar20 & 0x1f);
      }
      if ((*(int *)((longlong)__return_storage_ptr__ + 0x48) == 0) ||
         (*(int *)((longlong)__return_storage_ptr__ + 0x48) < (int)uVar14)) {
        *(uint *)((longlong)__return_storage_ptr__ + 0x48) = uVar14;
        if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
            SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData,0,0,4);
        }
        if (uVar14 != 0) {
          uVar18 = uVar14;
          if (uVar14 < 2) {
            if (((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                SecondaryData != (ForElementType<FSetElementId>)0x0) {
              uVar18 = 0;
              goto LAB_14a354628;
            }
          }
          else {
LAB_14a354628:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)
                       &((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))
                        ->SecondaryData,0,uVar18,4);
          }
          if (0 < (int)uVar14) {
            uVar19 = (ulonglong)uVar14;
            uVar13 = uVar17;
            do {
              FVar3 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar11 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar11 = FVar3;
              }
              uVar9 = uVar13 & (longlong)(int)uVar14 - 1U;
              uVar13 = uVar13 + 1;
              *(undefined4 *)((longlong)FVar11 + uVar9 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        param_1 = (TFunction<void___cdecl(int,bool_&)> *)local_e0._16_8_;
        if (*(int *)((longlong)__return_storage_ptr__ + 0x48) != 0) {
          uVar14 = *(uint *)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)__return_storage_ptr__)->field_0x28;
          puStack_a0 = &((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)__return_storage_ptr__)->field_0x10;
          uStack_a4 = 1;
          local_a8 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uVar13 = uVar17;
          if (uVar14 != 0) {
            puVar21 = *(uint **)&((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)__return_storage_ptr__)->field_0x20;
            if (puVar21 == (uint *)0x0) {
              puVar21 = (uint *)puStack_a0;
            }
            uVar18 = *puVar21;
            uVar19 = uVar17;
            while (uVar18 == 0) {
              uStack_90 = (int)uVar19 + 0x20;
              uVar19 = (ulonglong)uStack_90;
              iVar6 = (int)uVar13;
              local_a8 = iVar6 + 1;
              uVar13 = (ulonglong)local_a8;
              if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a8)
              goto LAB_14a35472d;
              uVar18 = puVar21[(longlong)iVar6 + 1];
            }
            uStack_a4 = -uVar18 & uVar18;
            uVar13 = (ulonglong)uStack_a4 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_84 = (int)lVar20;
            uStack_94 = local_84 + -1 + uStack_90;
            uVar13 = (ulonglong)uStack_94;
            if ((int)uVar14 < (int)uStack_94) {
LAB_14a35472d:
              uVar13 = (ulonglong)uVar14;
              uStack_94 = uVar14;
            }
          }
          local_98 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_a4,local_a8);
          local_68.CurrentBitIndex = uStack_94;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_8c;
          local_68.BaseBitIndex = uStack_90;
          local_70 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_a0;
          if ((int)uVar13 < (int)uVar14) {
            do {
              puVar21 = (uint *)((longlong)(int)uVar13 * 0x10 + *(longlong *)&local_70->Elements);
              uVar14 = *(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U & *puVar21;
              puVar21[3] = uVar14;
              FVar3 = ((ForElementType<FSetElementId> *)((longlong)__return_storage_ptr__ + 0x38))->
                      SecondaryData;
              FVar11 = (ForElementType<FSetElementId>)((longlong)__return_storage_ptr__ + 0x38);
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar11 = FVar3;
              }
              uVar19 = (longlong)*(int *)((longlong)__return_storage_ptr__ + 0x48) - 1U &
                       (longlong)(int)uVar14;
              puVar21[2] = *(uint *)((longlong)FVar11 + uVar19 * 4);
              *(int *)((longlong)FVar11 + uVar19 * 4) = (int)uVar13;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              uVar13 = (ulonglong)(uint)local_68.CurrentBitIndex;
              param_1 = (TFunction<void___cdecl(int,bool_&)> *)local_e0._16_8_;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
    }
    local_e0._0_8_ = (FScriptContainerElement *)0x0;
    local_e0._8_4_ = 0;
    local_e0._12_4_ = 0;
    uVar13 = uVar17;
    if (0 < (int)uVar16) {
      uVar13 = (ulonglong)uVar16;
    }
    iVar6 = (int)uVar13;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (0 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
    }
    local_e4 = 0;
    if (0 < (this->Storage).ArrayNum) {
      do {
        uVar14 = (uint)uVar17;
        uVar16 = 0;
        if ((int)uVar14 < local_c0[0]) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        uVar18 = uVar14;
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar18 = local_e4, bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        if (local_c8.Data[(int)uVar14] == (FScriptContainerElement)0x0) {
          uVar16 = 0;
          if ((int)uVar18 < (this->Storage).ArrayNum) {
            uVar16 = ~uVar18 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar4)();
            return pTVar7;
          }
          pFVar15 = (this->Storage).AllocatorInstance.Data + (int)uVar18;
          if ((((ulonglong)local_e0._0_8_ <= pFVar15) &&
              (pFVar15 < (FScriptContainerElement *)
                         (local_e0._0_8_ + (longlong)(int)local_e0._12_4_))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar4)();
            return pTVar7;
          }
          if (local_e0._8_4_ == local_e0._12_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,(ForAnyElementType *)local_e0,(int *)(local_e0 + 0xc));
            local_e0._8_4_ = iVar6;
          }
          local_b0[0] = local_e0._8_4_;
          lVar20 = (longlong)(int)local_e0._8_4_;
          local_e0._8_4_ = local_e0._8_4_ + 1;
          *(FScriptContainerElement *)(local_e0._0_8_ + lVar20) = *pFVar15;
          uVar18 = local_e4;
          if (local_e4 != local_b0[0]) {
            local_48 = &local_e4;
            local_40 = local_b0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,&local_80,(bool *)&local_48);
            uVar18 = local_e4;
          }
        }
        local_e4 = uVar18 + 1;
        uVar17 = (ulonglong)local_e4;
      } while ((int)local_e4 < (this->Storage).ArrayNum);
    }
    if (this != (FRigReusableElementStorage<bool> *)local_e0) {
      pFVar15 = (this->Storage).AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)local_e0._0_8_;
      (this->Storage).ArrayNum = local_e0._8_4_;
      (this->Storage).ArrayMax = local_e0._12_4_;
      local_e0._8_4_ = 0;
      local_e0._12_4_ = 0;
      local_e0._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e0._0_8_);
    }
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
LAB_14a354a47:
  iVar6 = (this->FreeList).ArrayNum;
  if ((this->FreeList).ArrayMax != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,&(this->FreeList).AllocatorInstance,iVar6,&(this->FreeList).ArrayMax);
  }
  iVar6 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,(ForAnyElementType *)this,iVar6,piVar1);
  }
  if (*(longlong *)param_1 != 0) {
    plVar12 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
         (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
         __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 16

// AreShapeEqual<UE::NNE::FSymbolicTensorShape> @ 1436e3f40

bool __cdecl
UE::NNE::TypesUtils::AreShapeEqual<UE::NNE::FSymbolicTensorShape>
          (FSymbolicTensorShape *param_1,FSymbolicTensorShape *param_2)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  longlong lVar11;
  
  if (8 < (param_1->Data).ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("lhs.Rank() <= lhs.MaxRank",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                       ,0xc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar8 = (param_1->Data).ArrayNum;
  if (iVar8 == (param_2->Data).ArrayNum) {
    uVar7 = 0;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        FVar2 = (param_1->Data).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int>)param_1;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar9 = FVar2;
        }
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar2 = (param_2->Data).AllocatorInstance.SecondaryData;
        iVar1 = (param_2->Data).ArrayNum;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar8) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(int *)((longlong)FVar9 + lVar11 * 4) != *(int *)((longlong)FVar10 + lVar11 * 4))
        goto LAB_1436e40dc;
        iVar8 = (param_1->Data).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar7 < iVar8);
    }
    bVar4 = true;
  }
  else {
LAB_1436e40dc:
    bVar4 = false;
  }
  return bVar4;
}

// AreShapeEqual<UE::NNE::FTensorShape> @ 1436e4110

bool __cdecl
UE::NNE::TypesUtils::AreShapeEqual<UE::NNE::FTensorShape>
          (FTensorShape *param_1,FTensorShape *param_2)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  
  if (8 < (param_1->Data).ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("lhs.Rank() <= lhs.MaxRank",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                       ,0xc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar8 = (param_1->Data).ArrayNum;
  if (iVar8 == (param_2->Data).ArrayNum) {
    uVar7 = 0;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        FVar2 = (param_1->Data).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)param_1;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar2;
        }
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar2 = (param_2->Data).AllocatorInstance.SecondaryData;
        iVar1 = (param_2->Data).ArrayNum;
        FVar10 = (ForElementType<unsigned_int>)param_2;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar2;
        }
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar8) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(int *)((longlong)FVar9 + lVar11 * 4) != *(int *)((longlong)FVar10 + lVar11 * 4))
        goto LAB_1436e42ac;
        iVar8 = (param_1->Data).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar7 < iVar8);
    }
    bVar4 = true;
  }
  else {
LAB_1436e42ac:
    bVar4 = false;
  }
  return bVar4;
}

// GetRuntime<INNERuntime> @ 1436e5e70

TWeakInterfacePtr<INNERuntime> * __cdecl
UE::NNE::GetRuntime<INNERuntime>
          (TWeakInterfacePtr<INNERuntime> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
  *this;
  TWeakInterfacePtr<INNERuntime> *pTVar5;
  TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *pTVar6;
  UObjectBaseUtility *this_00;
  UClass *pUVar7;
  INNERuntime *pIVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  int iVar11;
  wchar_t *pwVar12;
  FString *local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  longlong *plStack_30;
  FWeakObjectPtr local_28;
  longlong *plStack_20;
  
  this = (TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          *)FRegistry::GetInstance();
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Name.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x35,L"Name is empty"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TWeakInterfacePtr<INNERuntime> *)(*pcVar1)();
    return pTVar5;
  }
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pUVar10 = (UObject *)0x0;
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
  iVar4 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this,uVar3,param_1);
  if (iVar4 == -1) {
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    pTVar6 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
             ::Find(this,param_1);
    if ((pTVar6 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TWeakInterfacePtr<INNERuntime> *)(*pcVar1)();
      return pTVar5;
    }
    local_28.ObjectIndex = *(int *)&pTVar6->field_0x10;
    local_28.ObjectSerialNumber = *(int *)&pTVar6->field_0x14;
    plStack_20 = *(longlong **)&pTVar6->field_0x18;
    if ((plStack_20 == (longlong *)0x0) || (bVar2 = FWeakObjectPtr::IsValid(&local_28), !bVar2)) {
      local_res8 = param_1;
      `UE::NNE::FRegistry::Get'::__l14::<lambda_1>::operator()(&local_res8);
    }
    local_38 = local_28;
    plStack_30 = plStack_20;
    if ((((plStack_20 != (longlong *)0x0) && (bVar2 = FWeakObjectPtr::IsValid(&local_38), bVar2)) &&
        (plStack_30 != (longlong *)0x0)) &&
       (this_00 = (UObjectBaseUtility *)(**(code **)(*plStack_30 + 8))(),
       this_00 != (UObjectBaseUtility *)0x0)) {
      pUVar7 = UNNERuntime::StaticClass();
      pIVar8 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar7);
      (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
      __return_storage_ptr__->InterfaceInstance = (INNERuntime *)0x0;
      if ((pIVar8 != (INNERuntime *)0x0) &&
         (pUVar9 = (UObject *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8), pUVar9 != (UObject *)0x0
         )) {
        pUVar10 = pUVar9;
      }
      goto LAB_1436e5fe8;
    }
  }
  pIVar8 = (INNERuntime *)0x0;
  (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->InterfaceInstance = (INNERuntime *)0x0;
LAB_1436e5fe8:
  local_res10 = pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res10);
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    (&__return_storage_ptr__->ObjectInstance,(void *)0x0);
  if (!bVar2) {
    __return_storage_ptr__->InterfaceInstance = pIVar8;
  }
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1436e6930

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1436e69d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1436e6a70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1436e6b40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1436e6c20

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xb) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1436e6d00

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CreateModelData @ 1436e8540

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::FSharedModelData,1> * __cdecl
UE::NNE::ModelData::CreateModelData
          (TSharedPtr<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,FString *param_1,
          FString *param_2,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_4,FGuid *param_5,ITargetPlatform *param_6)

{
  code *pcVar1;
  INNERuntime *pIVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar6;
  TArrayView<unsigned_char_const_,__int64> *pTVar7;
  FRegistry *this;
  int iVar8;
  uint uVar9;
  TWeakInterfacePtr<INNERuntime> local_c8;
  FString local_b8;
  FString local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  TArrayView<unsigned_char_const_,__int64> local_48;
  TArrayView<unsigned_char_const_,__int64> local_38;
  
  GetRuntime<INNERuntime>(&local_c8,param_1);
  if ((local_c8.InterfaceInstance == (INNERuntime *)0x0) ||
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_c8), !bVar3)) {
    if (1 < (byte)LogNNE._0_1_) {
      Logging::Private::BasicLog<2>
                (&`class_TSharedPtr<UE::NNE::FSharedModelData,1>___cdecl_UE::NNE::ModelData::CreateModelData(FString_const&___ptr64,FString_const&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const&___ptr64,TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>_const&___ptr64,FGuid_const&___ptr64,ITargetPlatform_const*___ptr64)'
                  ::__l53::LOG_Static,(FLogCategoryBase *)&LogNNE);
    }
    this = FRegistry::GetInstance();
    FRegistry::GetAllNames(this,&local_98);
    uVar9 = 0;
    iVar8 = local_98.ArrayNum;
    if (0 < local_98.ArrayNum) {
      do {
        if (1 < (byte)LogNNE._0_1_) {
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar1)();
            return pTVar6;
          }
          Logging::Private::BasicLog<2>
                    (&`class_TSharedPtr<UE::NNE::FSharedModelData,1>___cdecl_UE::NNE::ModelData::CreateModelData(FString_const&___ptr64,FString_const&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const&___ptr64,TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>_const&___ptr64,FGuid_const&___ptr64,ITargetPlatform_const*___ptr64)'
                      ::__l73::LOG_Static,(FLogCategoryBase *)&LogNNE);
          iVar8 = local_98.ArrayNum;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar8);
    }
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,iVar8);
  }
  else {
    if (((local_c8.InterfaceInstance == (INNERuntime *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_c8), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar1)();
      return pTVar6;
    }
    pIVar2 = local_c8.InterfaceInstance;
    pcVar1 = *(code **)((longlong)*local_c8.InterfaceInstance + 0x18);
    pTVar7 = TArrayView<unsigned_char_const_,__int64>::
             TArrayView<unsigned_char_const_,__int64><TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                       (&local_48,param_3);
    local_88 = *(undefined4 *)&pTVar7->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
    uStack_80 = (undefined4)pTVar7->ArrayNum;
    uStack_7c = *(undefined4 *)((longlong)&pTVar7->ArrayNum + 4);
    cVar4 = (*pcVar1)(pIVar2,param_2,&local_88,param_4,param_5,param_6);
    if (cVar4 == '\0') {
      if (((local_c8.InterfaceInstance == (INNERuntime *)0x0) ||
          (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_c8), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar1)();
        return pTVar6;
      }
      pcVar1 = *(code **)((longlong)*local_c8.InterfaceInstance + 0x20);
      pTVar7 = TArrayView<unsigned_char_const_,__int64>::
               TArrayView<unsigned_char_const_,__int64><TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                         (&local_38,param_3);
      local_78 = *(undefined4 *)&pTVar7->DataPtr;
      uStack_74 = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
      uStack_70 = (undefined4)pTVar7->ArrayNum;
      uStack_6c = *(undefined4 *)((longlong)&pTVar7->ArrayNum + 4);
      (*pcVar1)(local_c8.InterfaceInstance,__return_storage_ptr__,param_2,&local_78,param_4,param_5,
                param_6);
      return __return_storage_ptr__;
    }
    if (cVar4 == '\x02') {
      if ((byte)LogNNE._0_1_ < 4) goto LAB_1436e88b6;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      FGuid::AppendString(param_5,&local_b8,Digits);
      ::FString::ToLower(&local_b8,&local_68);
      Logging::Private::BasicLog<4>
                (&`class_TSharedPtr<UE::NNE::FSharedModelData,1>___cdecl_UE::NNE::ModelData::CreateModelData(FString_const&___ptr64,FString_const&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const&___ptr64,TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>_const&___ptr64,FGuid_const&___ptr64,ITargetPlatform_const*___ptr64)'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&LogNNE);
      local_98.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_98.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogNNE._0_1_ < 3) goto LAB_1436e88b6;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      FGuid::AppendString(param_5,&local_a8,Digits);
      ::FString::ToLower(&local_a8,&local_58);
      Logging::Private::BasicLog<3>
                (&`class_TSharedPtr<UE::NNE::FSharedModelData,1>___cdecl_UE::NNE::ModelData::CreateModelData(FString_const&___ptr64,FString_const&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const&___ptr64,TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>_const&___ptr64,FGuid_const&___ptr64,ITargetPlatform_const*___ptr64)'
                  ::__l33::LOG_Static,(FLogCategoryBase *)&LogNNE);
      local_98.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_98.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
LAB_1436e88b6:
  __return_storage_ptr__->Object = (FSharedModelData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAllRuntimeNames @ 1436e9280

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNE::GetAllRuntimeNames(TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FRegistry *this;
  
  this = FRegistry::GetInstance();
  FRegistry::GetAllNames(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRuntime @ 1436e9ff0

TWeakInterfacePtr<INNERuntime> * __cdecl
UE::NNE::GetRuntime(TWeakInterfacePtr<INNERuntime> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
  *this;
  TWeakInterfacePtr<INNERuntime> *pTVar6;
  TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *pTVar7;
  wchar_t *pwVar8;
  FString *local_res8;
  FWeakObjectPtr local_18;
  INNERuntime *pIStack_10;
  
  this = (TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          *)FRegistry::GetInstance();
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Name.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x35,L"Name is empty"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TWeakInterfacePtr<INNERuntime> *)(*pcVar2)();
    return pTVar6;
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar5 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this,uVar4,param_1);
  if (iVar5 == -1) {
    (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
    __return_storage_ptr__->InterfaceInstance = (INNERuntime *)0x0;
  }
  else {
    pTVar7 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
             ::Find(this,param_1);
    if ((pTVar7 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakInterfacePtr<INNERuntime> *)(*pcVar2)();
      return pTVar6;
    }
    local_18.ObjectIndex = *(int *)&pTVar7->field_0x10;
    local_18.ObjectSerialNumber = *(int *)&pTVar7->field_0x14;
    pIStack_10 = *(INNERuntime **)&pTVar7->field_0x18;
    if ((pIStack_10 == (INNERuntime *)0x0) || (bVar3 = FWeakObjectPtr::IsValid(&local_18), !bVar3))
    {
      local_res8 = param_1;
      `UE::NNE::FRegistry::Get'::__l14::<lambda_1>::operator()(&local_res8);
    }
    (__return_storage_ptr__->ObjectInstance).WeakPtr = local_18;
    __return_storage_ptr__->InterfaceInstance = pIStack_10;
  }
  return __return_storage_ptr__;
}

// GetRuntimesAsString @ 1436ea110

FString * __cdecl
UE::NNE::ModelData::GetRuntimesAsString
          (FString *__return_storage_ptr__,TArrayView<FString_const_,int> *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  int iVar5;
  FString local_18;
  
  if (param_1->ArrayNum == 0) {
    ::FString::FString(__return_storage_ptr__,L"All");
    return __return_storage_ptr__;
  }
  pFVar3 = param_1->DataPtr;
  bVar2 = true;
  pFVar4 = pFVar3 + param_1->ArrayNum;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = local_18.Data.ArrayNum;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if (!bVar2) {
      ::FString::AppendChars(&local_18,L", ",2);
    }
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_18,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
    bVar2 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetTensorDataTypeSizeInBytes @ 1436ea260

int __cdecl UE::NNE::GetTensorDataTypeSizeInBytes(ENNETensorDataType param_1)

{
  switch(param_1) {
  case Char:
  case Boolean:
  case Int8:
  case UInt8:
    return 1;
  case Half:
  case Int16:
  case UInt16:
  case BFloat16:
    return 2;
  case Float:
  case Int32:
  case UInt32:
    return 4;
  case Double:
  case Int64:
  case UInt64:
  case Complex64:
    return 8;
  case Complex128:
    return 0x10;
  default:
    return 0;
  }
}

// RegisterRuntime @ 1436eb160

EResultStatus __cdecl UE::NNE::RegisterRuntime(TWeakInterfacePtr<INNERuntime> *param_1)

{
  EResultStatus EVar1;
  FModuleManager *this;
  FName *pFVar2;
  FRegistry *this_00;
  FName local_res8;
  TWeakInterfacePtr<INNERuntime> local_18;
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res8,L"NNEEditor");
  FModuleManager::LoadModule(this,*pFVar2,None);
  this_00 = FRegistry::GetInstance();
  local_18.ObjectInstance.WeakPtr = (param_1->ObjectInstance).WeakPtr;
  local_18.InterfaceInstance = param_1->InterfaceInstance;
  EVar1 = FRegistry::Add(this_00,&local_18);
  return EVar1;
}

// UnregisterRuntime @ 1436ee020

EResultStatus __cdecl UE::NNE::UnregisterRuntime(TWeakInterfacePtr<INNERuntime> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EResultStatus EVar3;
  uint uVar4;
  int iVar5;
  TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
  *this;
  ForAnyElementType FVar6;
  FString local_28;
  FWeakObjectPtr local_18;
  INNERuntime *pIStack_10;
  
  this = (TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          *)FRegistry::GetInstance();
  local_18 = (param_1->ObjectInstance).WeakPtr;
  pIStack_10 = param_1->InterfaceInstance;
  if (((param_1->InterfaceInstance == (INNERuntime *)0x0) ||
      (bVar2 = FWeakObjectPtr::IsValid(&local_18), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Runtime.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x2b,L"Runtime is not valid"), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if (((pIStack_10 == (INNERuntime *)0x0) || (bVar2 = FWeakObjectPtr::IsValid(&local_18), !bVar2))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                            ,0x8d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  (**(code **)((longlong)*pIStack_10 + 0x10))(pIStack_10,&local_28);
  if ((local_28.Data.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RuntimeName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x2e,L"Runtime name is empty"), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
    iVar5 = 0;
  }
  else {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
    iVar5 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(this,uVar4,&local_28);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar5 < 1;
}


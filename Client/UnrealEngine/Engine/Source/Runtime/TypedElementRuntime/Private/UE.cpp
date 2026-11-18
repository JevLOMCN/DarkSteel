// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 26

// Construct<FTypedElementSelectionOptions> @ 14453bd90

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementSelectionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x10100;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementSelectionOptions> @ 14453bdb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSelectionOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x10100;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FTypedElementSelectionOptions> @ 14453bdd0

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementSelectionOptions>(void *param_1)

{
  return;
}

// Copy<FTypedElementSelectionOptions> @ 14453be20

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementSelectionOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementIsSelectedOptions> @ 14453c3a0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementIsSelectedOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementIsSelectedOptions> @ 14453c3b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementIsSelectedOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FTypedElementIsSelectedOptions> @ 14453c3c0

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementIsSelectedOptions>(void *param_1)

{
  return;
}

// Copy<FTypedElementIsSelectedOptions> @ 14453c3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementIsSelectedOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementAssetDataReferencedOptions> @ 14453c800

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementAssetDataReferencedOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementAssetDataReferencedOptions> @ 14453c810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementAssetDataReferencedOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementAssetDataReferencedOptions> @ 14453c820

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementAssetDataReferencedOptions>(void *param_1)

{
  return;
}

// Copy<FTypedElementAssetDataReferencedOptions> @ 14453c830

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementAssetDataReferencedOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementSelectionSetState> @ 14453cb50

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementSelectionSetState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTypedElementSelectionSetState> @ 14453cb70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSelectionSetState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTypedElementSelectionSetState> @ 14453cb90

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementSelectionSetState>(void *param_1)

{
  DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
            (*(TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
               **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FTypedElementSelectionSetState> @ 14453cbd0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementSelectionSetState>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong local_res8;
  undefined1 local_res18 [16];
  
  do {
    if (param_3 == 0) {
      return true;
    }
    if (param_2 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
      ::Reset((TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
               *)((longlong)param_1 + 8),*(int *)((longlong)param_2 + 0x10));
      puVar7 = *(undefined8 **)((longlong)param_2 + 8);
      iVar2 = *(int *)((longlong)param_2 + 0x10);
      puVar1 = puVar7 + iVar2;
      while( true ) {
        if (*(int *)((longlong)param_2 + 0x10) != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (puVar7 == puVar1) break;
        (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,&local_res8);
        if ((local_res8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Cloned",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Public\\Elements\\Interfaces\\TypedElementSelectionInterface.h"
                               ,0x7a,
                               L"ITypedElementTransactedElement derived types must implement a valid Clone function!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = *(int *)((longlong)param_1 + 0x10);
        if (iVar6 == *(int *)((longlong)param_1 + 0x14)) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)((longlong)param_1 + 8),
                             (int *)((longlong)param_1 + 0x14));
        }
        puVar7 = puVar7 + 1;
        *(int *)((longlong)param_1 + 0x10) = iVar6 + 1;
        *(longlong *)(*(longlong *)((longlong)param_1 + 8) + (longlong)iVar6 * 8) = local_res8;
        local_res8 = 0;
      }
    }
    param_3 = param_3 + -1;
    param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    param_2 = (undefined8 *)((longlong)param_2 + 0x18);
  } while( true );
}

// Construct<FTypedElementSelectionNormalizationOptions> @ 14453ce50

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementSelectionNormalizationOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FTypedElementSelectionNormalizationOptions> @ 14453ce60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSelectionNormalizationOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FTypedElementSelectionNormalizationOptions> @ 14453ce90

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementSelectionNormalizationOptions>(void *param_1)

{
  return;
}

// Copy<FTypedElementSelectionNormalizationOptions> @ 14453cea0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementSelectionNormalizationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&> @ 14453dba0

UTypedElementSelectionSet * __cdecl
UE::Core::Private::DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
          (UTypedElementSelectionSet **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_> @ 14453e990

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
          (ushort param_1,ForElementType<FTypedElementHandle> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_> @ 14453ea60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
          (ushort param_1,ForElementType<FTypedElementHandle> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_> @ 14453eb30

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FTypedElementHandle> *param_4,
          int param_5,int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_> @ 14453ebb0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FTypedElementHandle> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CheckForInvalidSelectionSet @ 1445417c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::TypedElementFramework::Private::CheckForInvalidSelectionSet(UTypedElementSelectionSet *param_1)

{
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  return true;
}


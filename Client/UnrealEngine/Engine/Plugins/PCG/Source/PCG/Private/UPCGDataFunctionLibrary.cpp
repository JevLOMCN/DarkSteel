// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 36

// StaticClass @ 149edda60

UClass * __cdecl UPCGDataFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFunctionLibrary",
               &Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUPCGDataFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataFunctionLibrary>,
               InternalVTableHelperCtorCaller<UPCGDataFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton;
}

// UPCGDataFunctionLibrary @ 149eee200

UPCGDataFunctionLibrary * __thiscall
UPCGDataFunctionLibrary::UPCGDataFunctionLibrary
          (UPCGDataFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGDataFunctionLibrary__6B_;
  return this;
}

// UPCGDataFunctionLibrary @ 149eee230

UPCGDataFunctionLibrary * __thiscall
UPCGDataFunctionLibrary::UPCGDataFunctionLibrary
          (UPCGDataFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGDataFunctionLibrary__6B_;
  return this;
}

// ~UPCGDataFunctionLibrary @ 149eefc90

void __thiscall UPCGDataFunctionLibrary::~UPCGDataFunctionLibrary(UPCGDataFunctionLibrary *this)

{
  *(undefined ***)this = &___7UPCGDataFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 149ef1010

bool __thiscall
`UPCGDataFunctionLibrary::GetTypedInputs'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  int iVar1;
  longlong lVar2;
  UPCGData *this_00;
  bool bVar3;
  UClass *pUVar4;
  UObject *local_res10;
  
  if ((param_1->Data).Data.field0_0x0.DebugPtr == (UPCGData *)0x0) {
    return false;
  }
  lVar2 = *(longlong *)this;
  if ((lVar2 != 0) && (pUVar4 = UPCGData::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (local_res10 = *(UObject **)this, local_res10 != (UObject *)0x0)) {
      this_00 = (param_1->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res10);
      }
      bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UPCGData>_>
                        ((UObjectBaseUtility *)this_00,(TSubclassOf<UPCGData>)&local_res10);
      if (!bVar3) {
        return false;
      }
    }
  }
  return true;
}

// operator() @ 149ef10c0

bool __thiscall
`UPCGDataFunctionLibrary::GetTypedInputsByPinLabel'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  int iVar1;
  longlong lVar2;
  UPCGData *this_00;
  bool bVar3;
  UClass *pUVar4;
  UObject *local_res8;
  
  if ((param_1->Pin != **(FName **)this) ||
     ((param_1->Data).Data.field0_0x0.DebugPtr == (UPCGData *)0x0)) {
    return false;
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  if ((lVar2 != 0) && (pUVar4 = UPCGData::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (local_res8 = *(UObject **)((longlong)this + 8), local_res8 != (UObject *)0x0)) {
      this_00 = (param_1->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res8);
      }
      bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UPCGData>_>
                        ((UObjectBaseUtility *)this_00,(TSubclassOf<UPCGData>)&local_res8);
      if (!bVar3) {
        return false;
      }
    }
  }
  return true;
}

// operator() @ 149ef1180

bool __thiscall
`UPCGDataFunctionLibrary::GetTypedInputsByTag'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  FString *pFVar1;
  longlong lVar2;
  UPCGData *this_00;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  wchar_t *pwVar7;
  UObject *local_res8;
  
  pFVar1 = *(FString **)this;
  iVar5 = (pFVar1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar7 = L"";
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->Tags,uVar4,pFVar1);
  if ((iVar5 != -1) && ((param_1->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0)) {
    lVar2 = *(longlong *)((longlong)this + 8);
    if ((lVar2 != 0) && (pUVar6 = UPCGData::StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (local_res8 = *(UObject **)((longlong)this + 8), local_res8 != (UObject *)0x0))
      {
        this_00 = (param_1->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res8);
        }
        bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UPCGData>_>
                          ((UObjectBaseUtility *)this_00,(TSubclassOf<UPCGData>)&local_res8);
        if (!bVar3) {
          return false;
        }
      }
    }
    return true;
  }
  return false;
}

// AddToCollection @ 149ef49a0

void __cdecl
UPCGDataFunctionLibrary::AddToCollection
          (FPCGDataCollection *param_1,UPCGData *param_2,FName param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  UPCGData *pUVar10;
  ulonglong uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FPCGDataPtrWrapper *this_00;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  UPCGData *pUVar18;
  int iVar19;
  FString local_78;
  UPCGData *pUStack_68;
  undefined4 local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  
  if (param_2 == (UPCGData *)0x0) goto LAB_149ef4d1b;
  iVar6 = (param_1->TaggedData).ArrayNum;
  piVar1 = &(param_1->TaggedData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->TaggedData).ArrayNum = iVar6 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->Elements = 0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,param_2);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)param_3;
  iVar6 = param_4->ArrayNum;
  pFVar14 = (param_4->AllocatorInstance).Data;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = this_00[1].WeakData.WeakPtr.ObjectIndex -
          *(int *)((longlong)&this_00[4].Data.field0_0x0 + 4);
  uVar15 = iVar6 + uVar7;
  if (uVar7 < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar15);
    if (uVar15 < 4) {
      uVar7 = 1;
    }
    else {
      uVar11 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar7 = 1 << ((byte)lVar12 & 0x1f);
    }
    iVar9 = this_00[5].WeakData.WeakPtr.ObjectIndex;
    if ((iVar9 == 0) || (iVar9 < (int)uVar7)) {
      this_00[5].WeakData.WeakPtr.ObjectIndex = uVar7;
      if (this_00[5].Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(this_00 + 5),0,0,4);
      }
      if (uVar7 != 0) {
        uVar15 = uVar7;
        if (uVar7 < 2) {
          if (this_00[5].Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
            uVar15 = 0;
            goto LAB_149ef4b2a;
          }
        }
        else {
LAB_149ef4b2a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(this_00 + 5),0,uVar15,4);
        }
        if (0 < (int)uVar7) {
          uVar17 = (ulonglong)uVar7;
          uVar11 = 0;
          do {
            pUVar18 = this_00[5].Data.field0_0x0.DebugPtr;
            pUVar10 = (UPCGData *)&this_00[4].WeakData;
            if (pUVar18 != (UPCGData *)0x0) {
              pUVar10 = pUVar18;
            }
            uVar8 = uVar11 & (longlong)(int)uVar7 - 1U;
            uVar11 = uVar11 + 1;
            *(undefined4 *)((longlong)&pUVar10->_padding_ + uVar8 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (this_00[5].WeakData.WeakPtr.ObjectIndex != 0) {
        iVar9 = this_00[3].WeakData.WeakPtr.ObjectIndex;
        pUStack_68 = (UPCGData *)(this_00 + 2);
        local_78.Data.ArrayMax = 1;
        local_78.Data.ArrayNum = 0;
        iStack_5c = 0;
        iStack_58 = 0;
        if (iVar9 != 0) {
          pUVar18 = this_00[3].Data.field0_0x0.DebugPtr;
          if (pUVar18 == (UPCGData *)0x0) {
            pUVar18 = pUStack_68;
          }
          uVar7 = *(uint *)&((TObjectPtr<UPCGData_const_> *)&pUVar18->_padding_)->field0_0x0;
          iStack_58 = 0;
          local_78.Data.ArrayNum = 0;
          while (uVar7 == 0) {
            iStack_58 = iStack_58 + 0x20;
            lVar12 = (longlong)local_78.Data.ArrayNum;
            local_78.Data.ArrayNum = local_78.Data.ArrayNum + 1;
            if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Data.ArrayNum)
            goto LAB_149ef4c2a;
            uVar7 = *(uint *)((longlong)
                              &((TObjectPtr<UPCGData_const_> *)&pUVar18->_padding_)->field0_0x0 +
                             lVar12 * 4 + 4);
          }
          local_78.Data.ArrayMax = -uVar7 & uVar7;
          uVar11 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iStack_5c = iStack_58 + -1 + (int)lVar12;
          if (iVar9 < iStack_5c) {
LAB_149ef4c2a:
            iStack_5c = iVar9;
          }
        }
        local_60 = 0xffffffff;
        local_48._padding_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
        local_48.CurrentBitIndex = iStack_5c;
        local_48.UnvisitedBitMask = 0xffffffff;
        local_48._28_4_ = uStack_54;
        local_48.BaseBitIndex = iStack_58;
        iVar19 = iStack_5c;
        local_50 = this;
        local_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUStack_68;
        if (iStack_5c < iVar9) {
          do {
            puVar2 = (undefined8 *)(*(longlong *)&local_50->Elements + (longlong)iVar19 * 0x18);
            iVar3 = *(int *)(*(longlong *)&local_50->Elements + 8 + (longlong)iVar19 * 0x18);
            iVar9 = iVar3 + -1;
            if (iVar3 == 0) {
              pwVar13 = L"";
              iVar9 = 0;
            }
            else {
              pwVar13 = (wchar_t *)*puVar2;
            }
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
            uVar7 = this_00[5].WeakData.WeakPtr.ObjectIndex - 1U & uVar7;
            *(uint *)((longlong)puVar2 + 0x14) = uVar7;
            pUVar18 = this_00[5].Data.field0_0x0.DebugPtr;
            pUVar10 = (UPCGData *)&this_00[4].WeakData;
            if (pUVar18 != (UPCGData *)0x0) {
              pUVar10 = pUVar18;
            }
            uVar11 = (longlong)this_00[5].WeakData.WeakPtr.ObjectIndex - 1U & (longlong)(int)uVar7;
            *(int *)(puVar2 + 2) = (&((FWeakObjectPtr *)&pUVar10->_padding_)->ObjectIndex)[uVar11];
            (&((FWeakObjectPtr *)&pUVar10->_padding_)->ObjectIndex)[uVar11] = iVar19;
            local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
            iVar19 = local_48.CurrentBitIndex;
          } while (local_48.CurrentBitIndex < (int)*(longlong *)&(local_48.Array)->NumBits);
        }
      }
    }
  }
  pFVar16 = pFVar14 + (longlong)iVar6 * 0x10;
  for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this,&local_78,(bool *)pFVar14);
  }
LAB_149ef4d1b:
  DestructItems<FString,int>((FString *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  pFVar14 = (param_4->AllocatorInstance).Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// GetAllSettings @ 149efeb60

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetAllSettings
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = (FObjectPtr_u_0 *)(param_1->TaggedData).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(param_1->TaggedData).ArrayNum * 0xf;
  do {
    if (pFVar7 == pFVar8) {
      return __return_storage_ptr__;
    }
    local_res8 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149efebc7:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if ((bVar3) && (local_res8.Handle != (UObject *)0x0)) {
          pFVar1 = (FObjectPtr_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= pFVar7) &&
             ((pFVar7 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0xf &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)))) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar6;
          }
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),
                     (FPCGTaggedData *)pFVar7);
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149efebc7;
    }
    pFVar7 = pFVar7 + 0xf;
  } while( true );
}

// GetInputs @ 149f01540

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetInputs
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1)

{
  FPCGDataCollection::GetAllSpatialInputs(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputsByPinLabel @ 149f016c0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetInputsByPinLabel
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FName param_2)

{
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  FPCGDataCollection::GetInputsByPin(param_1,__return_storage_ptr__,local_res18);
  return __return_storage_ptr__;
}

// GetInputsByPredicate @ 149f016f0

TArray<UPCGData_*,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetInputsByPredicate
          (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *param_3)

{
  int *piVar1;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar2;
  FPCGTaggedData *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  FPCGTaggedData *pFVar10;
  FPCGTaggedData *pFVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  TObjectPtr<UPCGData_const_>_u_0 local_48 [2];
  
  piVar1 = &param_2->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (FPCGTaggedData *)(param_2->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar10,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar10,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  local_res10 = (param_1->TaggedData).ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar10 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  pFVar11 = pFVar10 + uVar9;
  while( true ) {
    if ((param_1->TaggedData).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    cVar5 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pFVar10);
    if (cVar5 != '\0') {
      local_48[0] = (pFVar10->Data).Data.field0_0x0;
      pTVar2 = (TObjectPtr<UPCGData_const_>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pTVar2 <= local_48) && (local_48 < pTVar2 + __return_storage_ptr__->ArrayMax)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(TObjectPtr<UPCGData_const_>_u_0 *)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48[0];
      pFVar3 = (FPCGTaggedData *)(param_2->AllocatorInstance).Data;
      if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + *piVar1)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x78),
                 pFVar10);
    }
    uVar9 = (ulonglong)local_res10;
    pFVar10 = pFVar10 + 1;
  }
  return __return_storage_ptr__;
}

// GetInputsByTag @ 149f01910

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetInputsByTag
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FString *param_2)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (param_1->TaggedData).ArrayNum;
  local_res8 = param_2;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>'::__l2::<lambda_1>::
            operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetParams @ 149f03400

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetParams
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1)

{
  UPCGData *pUVar1;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGTaggedData *pFVar8;
  FPCGTaggedData *pFVar9;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (param_1->TaggedData).ArrayNum;
  do {
    if (pFVar8 == pFVar9) {
      return __return_storage_ptr__;
    }
    local_res8.Handle = (UObject *)(pFVar8->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f03463:
      if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) goto LAB_149f03486;
      pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if ((!bVar4) || ((UPCGData *)local_res8.Handle == (UPCGData *)0x0)) goto LAB_149f03486;
LAB_149f034a6:
      pFVar2 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x78),pFVar8)
      ;
    }
    else {
      if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_res8.Handle);
        goto LAB_149f03463;
      }
LAB_149f03486:
      pUVar1 = (pFVar8->Data).Data.field0_0x0.DebugPtr;
      if ((pUVar1 != (UPCGData *)0x0) &&
         (iVar5 = (**(code **)(pUVar1->_padding_ + 0x2e8))(), iVar5 == 0x8000000))
      goto LAB_149f034a6;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// GetParamsByPinLabel @ 149f036d0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetParamsByPinLabel
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FName param_2)

{
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  FPCGDataCollection::GetParamsByPin(param_1,__return_storage_ptr__,local_res18);
  return __return_storage_ptr__;
}

// GetParamsByTag @ 149f03700

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetParamsByTag
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FString *param_2)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (param_1->TaggedData).ArrayNum;
  local_res8 = param_2;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedParams'::__l2::<lambda_1>::operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 149f040f0

UClass * __cdecl UPCGDataFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFunctionLibrary",
               &Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUPCGDataFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataFunctionLibrary>,
               InternalVTableHelperCtorCaller<UPCGDataFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton;
}

// GetTypedInputs @ 149f06450

TArray<UPCGData_*,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetTypedInputs
          (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,
          TSubclassOf<UPCGData> param_3)

{
  UObject *local_res8;
  code *local_18;
  UObject **local_10;
  
  local_res8 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputs'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (__return_storage_ptr__,param_1,param_2,
             (TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetTypedInputsByPin @ 149f064d0

TArray<UPCGData_*,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetTypedInputsByPin
          (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FPCGPinProperties *param_2,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_3,TSubclassOf<UPCGData> param_4)

{
  param_4.Class.field0_0x0 = *(TObjectPtr<UClass> *)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_4.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4.Class.field0_0x0);
  }
  GetTypedInputsByPinLabel
            (__return_storage_ptr__,param_1,param_2->Label,param_3,(TSubclassOf<UPCGData>)&param_4);
  return __return_storage_ptr__;
}

// GetTypedInputsByPinLabel @ 149f06550

TArray<UPCGData_*,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetTypedInputsByPinLabel
          (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FName param_2,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_3,TSubclassOf<UPCGData> param_4)

{
  FName local_res18 [2];
  FName *local_28;
  UObject *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = local_res18;
  local_20 = *(UObject **)param_4.Class.field0_0x0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputsByPinLabel'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (__return_storage_ptr__,param_1,param_3,
             (TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetTypedInputsByTag @ 149f065e0

TArray<UPCGData_*,TSizedDefaultAllocator<32>_> * __cdecl
UPCGDataFunctionLibrary::GetTypedInputsByTag
          (TArray<UPCGData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataCollection *param_1,FString *param_2,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_3,TSubclassOf<UPCGData> param_4)

{
  FString *local_28;
  UObject *local_20;
  code *local_18;
  FString **local_10;
  
  local_20 = *(UObject **)param_4.Class.field0_0x0;
  local_28 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputsByTag'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (__return_storage_ptr__,param_1,param_3,
             (TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGDataFunctionLibrary @ 149f13f60

void __cdecl UPCGDataFunctionLibrary::StaticRegisterNativesUPCGDataFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddToCollection @ 149f16df0

void __cdecl
UPCGDataFunctionLibrary::execAddToCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  FField **ppFVar2;
  undefined8 *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  TObjectPtr<UPCGData_const_>_u_0 TVar7;
  FString *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  UPCGData *pUVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FPCGDataPtrWrapper *this_00;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  UPCGData *pUVar21;
  longlong lVar22;
  int iVar23;
  ForAnyElementType *pFVar24;
  FString local_res10;
  TObjectPtr<UPCGData_const_>_u_0 local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FString *local_c8;
  undefined8 local_c0;
  UPCGData *local_b8;
  uint local_b0;
  uint uStack_ac;
  UPCGData *pUStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined2 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  uVar14 = 0;
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_b8 = (UPCGData *)0x0;
  pFVar24 = &local_90;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar24 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20.DebugPtr = (UPCGData *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_c8 = (FString *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar8 = local_c8;
  local_d8.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar10 = (int)local_c0;
  local_d0 = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_c0,0,&local_d8,(int)local_c0,&local_cc);
    ConstructItems<FString,FString,int>(local_d8.Data,pFVar8,iVar10);
  }
  pUVar21 = local_b8;
  TVar7 = local_res20;
  if (local_b8 == (UPCGData *)0x0) goto LAB_149f172bb;
  iVar10 = *(int *)&pFVar24[1].Data;
  piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,pFVar24,piVar1);
  }
  *(int *)&pFVar24[1].Data = iVar10 + 1;
  this_00 = (FPCGDataPtrWrapper *)(pFVar24->Data + (longlong)iVar10 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1);
  this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->Elements = 0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,pUVar21);
  iVar10 = local_d0;
  FVar17.Data = local_d8.Data;
  this_00[6].Data.field0_0x0 = TVar7;
  lVar22 = (longlong)local_d0;
  if ((local_d0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = this_00[1].WeakData.WeakPtr.ObjectIndex -
           *(int *)((longlong)&this_00[4].Data.field0_0x0 + 4);
  uVar18 = iVar10 + uVar11;
  if (uVar11 < uVar18) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar18);
    if (uVar18 < 4) {
      uVar11 = 1;
    }
    else {
      uVar15 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar5 & 0x1f);
    }
    iVar10 = this_00[5].WeakData.WeakPtr.ObjectIndex;
    if ((iVar10 == 0) || (iVar10 < (int)uVar11)) {
      this_00[5].WeakData.WeakPtr.ObjectIndex = uVar11;
      if (this_00[5].Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(this_00 + 5),0,0,4);
      }
      if (uVar11 != 0) {
        uVar18 = uVar11;
        if (uVar11 < 2) {
          if (this_00[5].Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
            uVar18 = 0;
            goto LAB_149f170e2;
          }
        }
        else {
LAB_149f170e2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(this_00 + 5),0,uVar18,4);
        }
        if (0 < (int)uVar11) {
          uVar20 = (ulonglong)uVar11;
          uVar15 = uVar14;
          do {
            pUVar21 = this_00[5].Data.field0_0x0.DebugPtr;
            pUVar13 = (UPCGData *)&this_00[4].WeakData;
            if (pUVar21 != (UPCGData *)0x0) {
              pUVar13 = pUVar21;
            }
            uVar12 = uVar15 & (longlong)(int)uVar11 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)((longlong)&pUVar13->_padding_ + uVar12 * 4) = 0xffffffff;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      if (this_00[5].WeakData.WeakPtr.ObjectIndex != 0) {
        uVar11 = this_00[3].WeakData.WeakPtr.ObjectIndex;
        pUStack_a8 = (UPCGData *)(this_00 + 2);
        uStack_ac = 1;
        local_b0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        if (uVar11 != 0) {
          pUVar21 = this_00[3].Data.field0_0x0.DebugPtr;
          if (pUVar21 == (UPCGData *)0x0) {
            pUVar21 = pUStack_a8;
          }
          uVar18 = *(uint *)&((TObjectPtr<UPCGData_const_> *)&pUVar21->_padding_)->field0_0x0;
          uVar15 = uVar14;
          while (uVar18 == 0) {
            uStack_98 = (int)uVar15 + 0x20;
            uVar15 = (ulonglong)uStack_98;
            iVar10 = (int)uVar14;
            local_b0 = iVar10 + 1;
            uVar14 = (ulonglong)local_b0;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_b0)
            goto LAB_149f171d9;
            uVar18 = *(uint *)((longlong)
                               &((TObjectPtr<UPCGData_const_> *)&pUVar21->_padding_)->field0_0x0 +
                              (longlong)iVar10 * 4 + 4);
          }
          uStack_ac = -uVar18 & uVar18;
          uVar14 = (ulonglong)uStack_ac * 2 + 1;
          lVar5 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uStack_9c = (int)lVar5 + -1 + uStack_98;
          uVar14 = (ulonglong)uStack_9c;
          if ((int)uVar11 < (int)uStack_9c) {
LAB_149f171d9:
            uVar14 = (ulonglong)uVar11;
            uStack_9c = uVar11;
          }
        }
        local_a0 = 0xffffffff;
        local_58._padding_ = CONCAT44(uStack_ac,local_b0);
        local_58.CurrentBitIndex = uStack_9c;
        local_58.UnvisitedBitMask = 0xffffffff;
        local_58._28_4_ = uStack_94;
        local_58.BaseBitIndex = uStack_98;
        local_60 = this;
        local_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUStack_a8;
        if ((int)uVar14 < (int)uVar11) {
          do {
            iVar23 = (int)uVar14;
            puVar3 = (undefined8 *)(*(longlong *)&local_60->Elements + (longlong)iVar23 * 0x18);
            iVar10 = *(int *)(*(longlong *)&local_60->Elements + 8 + (longlong)iVar23 * 0x18);
            if (iVar10 == 0) {
              pwVar16 = L"";
              iVar10 = 0;
            }
            else {
              pwVar16 = (wchar_t *)*puVar3;
              iVar10 = iVar10 + -1;
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar16);
            uVar11 = this_00[5].WeakData.WeakPtr.ObjectIndex - 1U & uVar11;
            *(uint *)((longlong)puVar3 + 0x14) = uVar11;
            pUVar21 = this_00[5].Data.field0_0x0.DebugPtr;
            pUVar13 = (UPCGData *)&this_00[4].WeakData;
            if (pUVar21 != (UPCGData *)0x0) {
              pUVar13 = pUVar21;
            }
            uVar14 = (longlong)this_00[5].WeakData.WeakPtr.ObjectIndex - 1U & (longlong)(int)uVar11;
            *(int *)(puVar3 + 2) = (&((FWeakObjectPtr *)&pUVar13->_padding_)->ObjectIndex)[uVar14];
            (&((FWeakObjectPtr *)&pUVar13->_padding_)->ObjectIndex)[uVar14] = iVar23;
            local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
            uVar14 = (ulonglong)(uint)local_58.CurrentBitIndex;
          } while (local_58.CurrentBitIndex < (int)*(longlong *)&(local_58.Array)->NumBits);
        }
      }
    }
  }
  pFVar19 = FVar17.Data + lVar22 * 0x10;
  for (; FVar17.Data != pFVar19; FVar17.Data = FVar17.Data + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this,&local_res10,(bool *)FVar17.Data);
  }
LAB_149f172bb:
  DestructItems<FString,int>((FString *)local_d8.Data,local_d0);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  DestructItems<FString,int>(local_c8,(int)local_c0);
  if (local_c8 != (FString *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_90.Data,(int)local_88);
  if ((FPCGTaggedData *)local_90.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// execBreakTaggedData @ 149f176d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGDataFunctionLibrary::execBreakTaggedData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar2;
  FProperty *pFVar3;
  int iVar4;
  uchar *puVar5;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar6;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar7;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  undefined1 auStackY_158 [32];
  uchar local_128 [8];
  TObjectPtr<UPCGData_const_>_u_0 local_120;
  TObjectPtr<UPCGData_const_>_u_0 local_118 [2];
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TObjectPtr<UPCGData_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_7c = 0x80;
  local_b8.DebugPtr = (UPCGData *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x100;
  local_4c = 0;
  local_44 = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pTVar6 = (TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  local_118[0].DebugPtr = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar7 = &local_b8;
  if (pTVar6 != (TObjectPtr<UPCGData_const_>_u_0 *)0x0) {
    pTVar7 = pTVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  pTVar6 = local_118;
  if ((TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGData_const_>_u_0 *)0x0) {
    pTVar6 = (TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  pTVar1 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
           param_2->MostRecentPropertyAddress;
  local_120.DebugPtr = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108;
  if (pTVar1 != (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  pTVar2 = (TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  local_128[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar8 = &local_120;
  if (pTVar2 != (TObjectPtr<UPCGData_const_>_u_0 *)0x0) {
    pTVar8 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  puVar5 = local_128;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pTVar6 = *pTVar7;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                  &pTVar7[2].ObjectPtr);
  *pTVar8 = pTVar7[0xc];
  *puVar5 = *(uchar *)((longlong)pTVar7 + 0x69);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pTVar6->DebugPtr != (UPCGData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pTVar6->DebugPtr);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,0,local_108._8_4_);
  iVar4 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar4 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_b8.ObjectPtr);
  return;
}

// execGetAllSettings @ 149f18040

void __cdecl
UPCGDataFunctionLibrary::execGetAllSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FPCGTaggedData **ppFVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FPCGTaggedData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = (FPCGTaggedData *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  ppFVar6 = &local_48;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar6 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = (FObjectPtr_u_0 *)*ppFVar6;
  pFVar8 = pFVar7 + (longlong)*(int *)(ppFVar6 + 1) * 0xf;
  do {
    if (pFVar7 == pFVar8) {
      if (param_3 != &local_58) {
        DestructItems<FPCGTaggedData,int>
                  (*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
        if (*(void **)param_3 != (void *)0x0) {
          FMemory::Free(*(void **)param_3);
        }
        *(FScriptContainerElement **)param_3 = local_58.Data;
        *(int *)((longlong)param_3 + 8) = (int)local_50;
        *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
        local_50 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_58.Data,(int)local_50);
      if ((FObjectPtr_u_0 *)local_58.Data != (FObjectPtr_u_0 *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      DestructItems<FPCGTaggedData,int>(local_48,(int)local_40);
      if (local_48 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    local_res10 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f18125:
      if (local_res10.Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
        if ((bVar3) && (local_res10.Handle != (UObject *)0x0)) {
          if ((local_58.Data <= pFVar7) &&
             ((pFVar7 < (FObjectPtr_u_0 *)(local_58.Data + (longlong)local_50._4_4_ * 0x78) &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = (int)local_50;
          if ((int)local_50 == local_50._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&local_58,(int *)((longlong)&local_50 + 4));
          }
          local_50 = CONCAT44(local_50._4_4_,iVar4 + 1);
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)(local_58.Data + (longlong)iVar4 * 0x78),
                     (FPCGTaggedData *)pFVar7);
        }
      }
    }
    else if (local_res10.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10.Handle);
      goto LAB_149f18125;
    }
    pFVar7 = pFVar7 + 0xf;
  } while( true );
}

// execGetInputs @ 149f18370

void __cdecl UPCGDataFunctionLibrary::execGetInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGDataCollection *this;
  int iVar2;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  FPCGDataCollection local_38;
  
  local_38.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TaggedData.ArrayNum = 0;
  local_38.TaggedData.ArrayMax = 0;
  local_38.bCancelExecutionOnEmpty = false;
  local_38.bCancelExecution = false;
  local_38.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DataCrcs.ArrayNum = 0;
  local_38.DataCrcs.ArrayMax = 0;
  local_38.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    this = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPCGDataCollection::GetAllSpatialInputs(this,&local_48);
  if (param_3 == &local_48) {
    iVar2 = local_48.ArrayNum;
  }
  else {
    DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_48.AllocatorInstance.Data,iVar2);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data,
             local_38.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetInputsByPinLabel @ 149f184c0

void __cdecl
UPCGDataFunctionLibrary::execGetInputsByPinLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FPCGDataCollection *this;
  FName local_res10;
  FName local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_58;
  FPCGDataCollection local_48;
  
  local_48.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TaggedData.ArrayNum = 0;
  local_48.TaggedData.ArrayMax = 0;
  local_48.bCancelExecutionOnEmpty = false;
  local_48.bCancelExecution = false;
  local_48.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DataCrcs.ArrayNum = 0;
  local_48.DataCrcs.ArrayMax = 0;
  local_48.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = &local_48;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    this = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  FPCGDataCollection::GetInputsByPin(this,&local_58,&local_res18);
  if (param_3 == &local_58) {
    iVar2 = local_58.ArrayNum;
  }
  else {
    DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_58.AllocatorInstance.Data,iVar2);
  if ((FPCGTaggedData *)local_58.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
             local_48.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetInputsByTag @ 149f18650

void __cdecl
UPCGDataFunctionLibrary::execGetInputsByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FPCGTaggedData *pFVar5;
  FPCGTaggedData **ppFVar6;
  FPCGTaggedData *pFVar7;
  void **local_res10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  FPCGTaggedData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = (FPCGTaggedData *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  ppFVar6 = &local_48;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar6 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_5c = 0;
  local_60 = 0;
  local_res10 = &local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = *ppFVar6;
  local_68.Data = (FScriptContainerElement *)0x0;
  pFVar7 = pFVar5 + *(int *)(ppFVar6 + 1);
  do {
    if (pFVar5 == pFVar7) {
      if (param_3 != &local_68) {
        DestructItems<FPCGTaggedData,int>
                  (*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
        if (*(void **)param_3 != (void *)0x0) {
          FMemory::Free(*(void **)param_3);
        }
        *(FScriptContainerElement **)param_3 = local_68.Data;
        *(int *)((longlong)param_3 + 8) = local_60;
        *(int *)((longlong)param_3 + 0xc) = local_5c;
        local_5c = 0;
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = 0;
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_68.Data,local_60);
      if ((FPCGTaggedData *)local_68.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      DestructItems<FPCGTaggedData,int>(local_48,(int)local_40);
      if (local_48 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>'::__l2::<lambda_1>::
            operator()(&local_res10,pFVar5);
    if (bVar3) {
      if (((local_68.Data <= pFVar5) &&
          (pFVar5 < (FPCGTaggedData *)(local_68.Data + (longlong)local_5c * 0x78))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&local_68,&local_5c);
      }
      lVar4 = (longlong)local_60;
      local_60 = local_60 + 1;
      FPCGTaggedData::FPCGTaggedData((FPCGTaggedData *)(local_68.Data + lVar4 * 0x78),pFVar5);
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// execGetParams @ 149f18940

void __cdecl UPCGDataFunctionLibrary::execGetParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGData *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FPCGTaggedData **ppFVar7;
  FPCGTaggedData *pFVar8;
  FPCGTaggedData *pFVar9;
  FObjectPtr_u_0 local_res10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FPCGTaggedData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = (FPCGTaggedData *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  ppFVar7 = &local_48;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar7 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = *ppFVar7;
  pFVar9 = pFVar8 + *(int *)(ppFVar7 + 1);
  do {
    if (pFVar8 == pFVar9) {
      if (param_3 != &local_58) {
        DestructItems<FPCGTaggedData,int>
                  (*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
        if (*(void **)param_3 != (void *)0x0) {
          FMemory::Free(*(void **)param_3);
        }
        *(FScriptContainerElement **)param_3 = local_58.Data;
        *(int *)((longlong)param_3 + 8) = (int)local_50;
        *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
        local_50 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_58.Data,(int)local_50);
      if ((FPCGTaggedData *)local_58.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      DestructItems<FPCGTaggedData,int>(local_48,(int)local_40);
      if (local_48 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    local_res10.Handle = (UObject *)(pFVar8->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f18a21:
      if ((UPCGData *)local_res10.Handle == (UPCGData *)0x0) goto LAB_149f18a41;
      pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
      if ((!bVar4) || ((UPCGData *)local_res10.Handle == (UPCGData *)0x0)) goto LAB_149f18a41;
LAB_149f18a61:
      if (((local_58.Data <= pFVar8) &&
          (pFVar8 < (FPCGTaggedData *)(local_58.Data + (longlong)local_50._4_4_ * 0x78))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)(local_58.Data + (longlong)iVar5 * 0x78),pFVar8);
    }
    else {
      if ((UPCGData *)local_res10.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_res10.Handle);
        goto LAB_149f18a21;
      }
LAB_149f18a41:
      pUVar2 = (pFVar8->Data).Data.field0_0x0.DebugPtr;
      if ((pUVar2 != (UPCGData *)0x0) &&
         (iVar5 = (**(code **)(pUVar2->_padding_ + 0x2e8))(), iVar5 == 0x8000000))
      goto LAB_149f18a61;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// execGetParamsByPinLabel @ 149f18bb0

void __cdecl
UPCGDataFunctionLibrary::execGetParamsByPinLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FPCGDataCollection *this;
  FName local_res10;
  FName local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_58;
  FPCGDataCollection local_48;
  
  local_48.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TaggedData.ArrayNum = 0;
  local_48.TaggedData.ArrayMax = 0;
  local_48.bCancelExecutionOnEmpty = false;
  local_48.bCancelExecution = false;
  local_48.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DataCrcs.ArrayNum = 0;
  local_48.DataCrcs.ArrayMax = 0;
  local_48.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = &local_48;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    this = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  FPCGDataCollection::GetParamsByPin(this,&local_58,&local_res18);
  if (param_3 == &local_58) {
    iVar2 = local_58.ArrayNum;
  }
  else {
    DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_58.AllocatorInstance.Data,iVar2);
  if ((FPCGTaggedData *)local_58.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
             local_48.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetParamsByTag @ 149f18d40

void __cdecl
UPCGDataFunctionLibrary::execGetParamsByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FPCGTaggedData *pFVar5;
  FPCGTaggedData **ppFVar6;
  FPCGTaggedData *pFVar7;
  void **local_res10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  FPCGTaggedData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = (FPCGTaggedData *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  ppFVar6 = &local_48;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar6 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_5c = 0;
  local_60 = 0;
  local_res10 = &local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = *ppFVar6;
  local_68.Data = (FScriptContainerElement *)0x0;
  pFVar7 = pFVar5 + *(int *)(ppFVar6 + 1);
  do {
    if (pFVar5 == pFVar7) {
      if (param_3 != &local_68) {
        DestructItems<FPCGTaggedData,int>
                  (*(FPCGTaggedData **)param_3,*(int *)((longlong)param_3 + 8));
        if (*(void **)param_3 != (void *)0x0) {
          FMemory::Free(*(void **)param_3);
        }
        *(FScriptContainerElement **)param_3 = local_68.Data;
        *(int *)((longlong)param_3 + 8) = local_60;
        *(int *)((longlong)param_3 + 0xc) = local_5c;
        local_5c = 0;
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = 0;
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_68.Data,local_60);
      if ((FPCGTaggedData *)local_68.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      DestructItems<FPCGTaggedData,int>(local_48,(int)local_40);
      if (local_48 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    bVar3 = `FPCGDataCollection::GetTaggedParams'::__l2::<lambda_1>::operator()(&local_res10,pFVar5)
    ;
    if (bVar3) {
      if (((local_68.Data <= pFVar5) &&
          (pFVar5 < (FPCGTaggedData *)(local_68.Data + (longlong)local_5c * 0x78))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&local_68,&local_5c);
      }
      lVar4 = (longlong)local_60;
      local_60 = local_60 + 1;
      FPCGTaggedData::FPCGTaggedData((FPCGTaggedData *)(local_68.Data + lVar4 * 0x78),pFVar5);
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// execGetTypedInputs @ 149f18ff0

void __cdecl
UPCGDataFunctionLibrary::execGetTypedInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGDataCollection *pFVar4;
  UObject *local_res10;
  UObject *local_res18 [2];
  TArray<UPCGData_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  UObject **local_60;
  FPCGDataCollection local_58;
  
  local_58.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.TaggedData.ArrayNum = 0;
  local_58.TaggedData.ArrayMax = 0;
  local_58.bCancelExecutionOnEmpty = false;
  local_58.bCancelExecution = false;
  local_58.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.DataCrcs.ArrayNum = 0;
  local_58.DataCrcs.ArrayMax = 0;
  local_58.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar4 = &local_58;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    pFVar4 = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10 = (UObject *)0x0;
  pTVar3 = &local_78;
  if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res18[0] = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_60 = local_res18;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputs'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (&local_88,pFVar4,pTVar3,(TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_68
            );
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_58.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data,
             local_58.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetTypedInputsByPin @ 149f19220

void __cdecl
UPCGDataFunctionLibrary::execGetTypedInputsByPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FPCGDataCollection *pFVar3;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar4;
  FPCGPinProperties *pFVar5;
  UObject *local_res10;
  FName local_res18;
  TArray<UPCGData_*,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  FPCGDataCollection local_a8;
  undefined8 *local_78;
  UObject *local_70;
  code *local_68;
  undefined8 **local_60;
  FPCGPinProperties local_58;
  
  local_a8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TaggedData.ArrayNum = 0;
  local_a8.TaggedData.ArrayMax = 0;
  local_a8.bCancelExecutionOnEmpty = false;
  local_a8.bCancelExecution = false;
  local_a8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.DataCrcs.ArrayNum = 0;
  local_a8.DataCrcs.ArrayMax = 0;
  local_a8.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar3 = &local_a8;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    pFVar3 = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  FPCGPinProperties::FPCGPinProperties(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pFVar5 = &local_58;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar5 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10 = (UObject *)0x0;
  pTVar4 = &local_b8;
  if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res18 = pFVar5->Label;
  local_78 = &local_res18;
  local_70 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_60 = &local_78;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputsByPinLabel'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (&local_c8,pFVar3,pTVar4,(TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_68
            );
  if (param_3 != &local_c8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_c8.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_c8.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_c8.ArrayMax;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FPCGTaggedData *)local_b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_58.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (local_a8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_a8.TaggedData.AllocatorInstance.Data,
             local_a8.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_a8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_a8.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetTypedInputsByPinLabel @ 149f194e0

void __cdecl
UPCGDataFunctionLibrary::execGetTypedInputsByPinLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGDataCollection *pFVar4;
  undefined8 local_res10;
  UObject *local_res18;
  undefined8 local_res20;
  TArray<UPCGData_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  undefined8 *local_78;
  UObject *local_70;
  code *local_68;
  undefined8 **local_60;
  FPCGDataCollection local_58;
  
  local_58.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.TaggedData.ArrayNum = 0;
  local_58.TaggedData.ArrayMax = 0;
  local_58.bCancelExecutionOnEmpty = false;
  local_58.bCancelExecution = false;
  local_58.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.DataCrcs.ArrayNum = 0;
  local_58.DataCrcs.ArrayMax = 0;
  local_58.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = 0;
  pFVar4 = &local_58;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    pFVar4 = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res18 = (UObject *)0x0;
  pTVar3 = &local_88;
  if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_res20 = local_res10;
  local_78 = &local_res20;
  local_70 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_60 = &local_78;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputsByPinLabel'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (&local_98,pFVar4,pTVar3,(TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_68
            );
  if (param_3 != &local_98) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_98.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_98.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_98.ArrayMax;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_58.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data,
             local_58.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execGetTypedInputsByTag @ 149f19760

void __cdecl
UPCGDataFunctionLibrary::execGetTypedInputsByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGDataCollection *pFVar4;
  UObject *local_res10;
  TArray<UPCGData_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  void *local_78;
  undefined8 local_70;
  void **local_68;
  UObject *local_60;
  code *local_58;
  void ***local_50;
  FPCGDataCollection local_48;
  
  local_48.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TaggedData.ArrayNum = 0;
  local_48.TaggedData.ArrayMax = 0;
  local_48.bCancelExecutionOnEmpty = false;
  local_48.bCancelExecution = false;
  local_48.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DataCrcs.ArrayNum = 0;
  local_48.DataCrcs.ArrayMax = 0;
  local_48.InactiveOutputPinBitmask = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  pFVar4 = &local_48;
  if ((FPCGDataCollection *)param_2->MostRecentPropertyAddress != (FPCGDataCollection *)0x0) {
    pFVar4 = (FPCGDataCollection *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UObject *)0x0;
  pTVar3 = &local_88;
  if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_60 = pUVar2;
  local_68 = &local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGDataFunctionLibrary::GetTypedInputsByTag'::__l2::<lambda_1>,bool,FPCGTaggedData_const_&>
             ::Call;
  GetInputsByPredicate
            (&local_98,pFVar4,pTVar3,(TFunctionRef<bool___cdecl(FPCGTaggedData_const_&)> *)&local_58
            );
  if (param_3 != &local_98) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_98.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_98.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_98.ArrayMax;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
             local_48.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
  }
  return;
}

// execMakeTaggedData @ 149f19af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGDataFunctionLibrary::execMakeTaggedData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined8 uVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar4;
  undefined1 auStackY_138 [32];
  undefined8 local_108;
  UPCGData *local_100;
  TObjectPtr<UPCGData_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_100 = (UPCGData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_108 = 0;
  pTVar4 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78;
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    pTVar4 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  uVar3 = local_108;
  local_f8.DebugPtr = (UPCGData *)0x0;
  local_f0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0x100;
  local_8c = 0;
  local_84 = 0xffffffff;
  FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)&local_f8.ObjectPtr,local_100);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,pTVar4);
  local_98 = uVar3;
  FPCGDataPtrWrapper::operator=(param_3,(FPCGDataPtrWrapper *)&local_f8.ObjectPtr);
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)((longlong)param_3 + 0x10) !=
      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)param_3 + 0x10),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8);
  }
  *(undefined8 *)((longlong)param_3 + 0x60) = local_98;
  *(undefined1 *)((longlong)param_3 + 0x68) = (undefined1)local_90;
  *(undefined1 *)((longlong)param_3 + 0x69) = local_90._1_1_;
  *(undefined8 *)((longlong)param_3 + 0x6c) = local_8c;
  *(undefined4 *)((longlong)param_3 + 0x74) = local_84;
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar2 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_f8.ObjectPtr);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}


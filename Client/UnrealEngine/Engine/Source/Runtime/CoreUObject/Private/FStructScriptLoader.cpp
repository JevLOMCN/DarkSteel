// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FStructScriptLoader @ 142200180

FStructScriptLoader * __thiscall
FStructScriptLoader::FStructScriptLoader
          (FStructScriptLoader *this,UStruct *param_1,FArchive *param_2)

{
  uint uVar1;
  int *piVar2;
  long64 lVar3;
  
  this->ScriptSerializationOffset = -1;
  this->BytecodeBufferSize = 0;
  this->SerializedScriptSize = 0;
  if ((param_2->field_0x28 & 1) != 0) {
    piVar2 = (int *)**(undefined8 **)&param_2->field_0x8;
    if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,this,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,(uint *)this);
      }
    }
    else {
      this->BytecodeBufferSize = *piVar2;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    }
    piVar2 = (int *)**(undefined8 **)&param_2->field_0x8;
    if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->SerializedScriptSize,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->SerializedScriptSize);
      }
    }
    else {
      this->SerializedScriptSize = *piVar2;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    }
    if (0 < this->SerializedScriptSize) {
      lVar3 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
      this->ScriptSerializationOffset = lVar3;
    }
    uVar1 = this->BytecodeBufferSize;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    piVar2 = &(param_1->Script).ArrayMax;
    (param_1->Script).ArrayNum = 0;
    if (*piVar2 != uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,&(param_1->Script).AllocatorInstance,0,piVar2);
    }
    piVar2 = &(param_1->ScriptAndPropertyObjectReferences).ArrayMax;
    (param_1->ScriptAndPropertyObjectReferences).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_1->ScriptAndPropertyObjectReferences).AllocatorInstance,0,piVar2);
    }
  }
  return this;
}

// ClearScriptCode @ 142206da0

void __thiscall FStructScriptLoader::ClearScriptCode(FStructScriptLoader *this,UStruct *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = this->BytecodeBufferSize;
  if (-1 < (int)uVar2) {
    piVar1 = &(param_1->Script).ArrayMax;
    (param_1->Script).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&(param_1->Script).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(param_1->ScriptAndPropertyObjectReferences).ArrayMax;
    (param_1->ScriptAndPropertyObjectReferences).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_1->ScriptAndPropertyObjectReferences).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// IsPrimed @ 142212610

bool __thiscall FStructScriptLoader::IsPrimed(FStructScriptLoader *this)

{
  if ((0 < this->SerializedScriptSize) && (this->ScriptSerializationOffset != -1)) {
    return true;
  }
  return false;
}

// LoadStructWithScript @ 142213e60

bool __thiscall
FStructScriptLoader::LoadStructWithScript
          (FStructScriptLoader *this,UStruct *param_1,FArchive *param_2,bool param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  longlong lVar8;
  FTlsAutoCleanup *pFVar9;
  FLinker *pFVar10;
  longlong lVar11;
  FLinker *pFVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FLinker *pFVar16;
  FScriptContainerElement *pFVar17;
  int local_168;
  undefined1 local_164 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_160;
  TPairInitializer<FLinkerLoad_*_const_&,FDeferredScriptLoader_&&> local_150;
  longlong local_140;
  FName local_138;
  FString local_130;
  undefined8 local_120;
  long64 lStack_118;
  FWeakObjectPtr local_110;
  code *local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  FArchiveProxy local_e8;
  TTuple<TFieldPath<FField>,int> *local_50;
  int local_48;
  int iStack_44;
  int *local_40;
  UStruct *local_38;
  
  if (((((param_2->field_0x28 & 1) == 0) || (this->SerializedScriptSize < 1)) ||
      (this->ScriptSerializationOffset == -1)) ||
     (bVar5 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing)
     , bVar5)) {
    return false;
  }
  if (((param_2->field_0x29 & 1) == 0) ||
     (lVar8 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2), lVar8 == 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  lVar8 = (longlong)this->SerializedScriptSize + this->ScriptSerializationOffset;
  if ((*(int *)&param_2->field_0x40 < 400) || (*(int *)&param_2->field_0x48 < 0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  if ((bVar13 & bVar6) == 0) {
    if (((param_3 & bVar13) == 0) || (bVar5 = ShouldDeferScriptSerialization(param_2), !bVar5)) {
      (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,this->ScriptSerializationOffset);
      pFVar16 = (FLinker *)0x0;
      if (bVar13 != 0) {
        pFVar10 = (FLinker *)(**(code **)(*(longlong *)param_2 + 0x20))(param_2);
        if (((pFVar10 == (FLinker *)0x0) || (pFVar10->LinkerType != Load)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkerCastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x265,L""), pFVar10 = pFVar16, bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.ArrayNum = 0;
        local_160.ArrayMax = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,this->SerializedScriptSize,&local_160.AllocatorInstance,&local_160.ArrayNum,
                   &local_160.ArrayMax);
        (**(code **)(*(longlong *)param_2 + 0x188))
                  (param_2,local_160.AllocatorInstance.Data,(longlong)this->SerializedScriptSize);
        lVar11 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
        if ((lVar8 != lVar11) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3636788722101387524>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\StructScriptLoader.cpp"
                               ,0x104,"ScriptEndOffset == Ar.Tell()"), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FLinker::UpdateScriptSHAKey(pFVar10,&local_160);
        (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,this->ScriptSerializationOffset);
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
        }
      }
      uVar15 = this->BytecodeBufferSize;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      piVar1 = &(param_1->Script).ArrayMax;
      (param_1->Script).ArrayNum = 0;
      if (*piVar1 != uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar15,&(param_1->Script).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,this->BytecodeBufferSize,&(param_1->Script).AllocatorInstance,
                 &(param_1->Script).ArrayNum,piVar1);
      local_168 = 0;
      FArchiveProxy::FArchiveProxy(&local_e8,param_2);
      local_50 = (TTuple<TFieldPath<FField>,int> *)0x0;
      local_e8._padding_ = (longlong)&___7FPropertyProxyArchive__6B_;
      local_40 = &local_168;
      _local_48 = 0;
      local_e8._padding_._3_1_ =
           (local_e8.InnerArchive)->field_0x2b & 0x10 | local_e8._padding_._3_1_ & 0xef;
      local_38 = param_1;
      if (local_168 < this->BytecodeBufferSize) {
        do {
          (**(code **)(param_1->_padding_ + 0x310))(param_1,&local_168);
        } while (local_168 < this->BytecodeBufferSize);
      }
      pFVar10 = (FLinker *)param_1->UnresolvedScriptProperties;
      if (local_48 == 0) {
        if (pFVar10 != (FLinker *)0x0) {
          DestructItems<TTuple<TFieldPath<FField>,int>,int>
                    ((TTuple<TFieldPath<FField>,int> *)
                     ((ForAnyElementType *)&pFVar10->_padding_)->Data,(int)pFVar10->_padding_);
          pFVar14 = ((ForAnyElementType *)&pFVar10->_padding_)->Data;
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar14);
          }
          ::operator_delete(pFVar10,0x10);
          param_1->UnresolvedScriptProperties =
               (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
        }
      }
      else {
        if (pFVar10 == (FLinker *)0x0) {
          pFVar12 = ::operator_new(0x10);
          pFVar10 = pFVar16;
          if (pFVar12 != (FLinker *)0x0) {
            ((ForAnyElementType *)&pFVar12->_padding_)->Data = (FScriptContainerElement *)0x0;
            pFVar12->_padding_ = 0;
            pFVar10 = pFVar12;
          }
          param_1->UnresolvedScriptProperties =
               (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)pFVar10;
        }
        if (pFVar10 != (FLinker *)&stack0xffffffffffffffb0) {
          DestructItems<TTuple<TFieldPath<FField>,int>,int>
                    ((TTuple<TFieldPath<FField>,int> *)
                     ((ForAnyElementType *)&pFVar10->_padding_)->Data,(int)pFVar10->_padding_);
          pFVar14 = ((ForAnyElementType *)&pFVar10->_padding_)->Data;
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar14);
          }
          ((ForAnyElementType *)&pFVar10->_padding_)->Data = (FScriptContainerElement *)local_50;
          local_50 = (TTuple<TFieldPath<FField>,int> *)0x0;
          *(int *)&pFVar10->_padding_ = local_48;
          *(int *)((longlong)&pFVar10->_padding_ + 4) = iStack_44;
          _local_48 = 0;
        }
      }
      DestructItems<TTuple<TFieldPath<FField>,int>,int>(local_50,local_48);
      if (local_50 != (TTuple<TFieldPath<FField>,int> *)0x0) {
        FMemory::Free(local_50);
      }
      FArchiveProxy::~FArchiveProxy(&local_e8);
      lVar11 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
      if ((lVar8 != lVar11) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3636788722101387552>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\StructScriptLoader.cpp"
                             ,0x120,"ScriptEndOffset == Ar.Tell()"), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (local_168 != this->BytecodeBufferSize) {
        local_138 = (FName)param_1->_padding_;
        ::FName::ToString(&local_138,&local_130);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytecodeIndex == BytecodeBufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\StructScriptLoader.cpp"
                           ,0x121,L"\'%s\' script expression-count mismatch; Expected: %i, Got: %i")
        ;
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&param_1->_padding_ + 4)) {
        pTVar2 = &param_1->ScriptAndPropertyObjectReferences;
        piVar1 = &(param_1->ScriptAndPropertyObjectReferences).ArrayMax;
        (param_1->ScriptAndPropertyObjectReferences).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        pFVar17 = (pTVar2->AllocatorInstance).Data;
        iVar3 = (param_1->ScriptAndPropertyObjectReferences).ArrayNum;
        pFVar14 = pFVar17 + (longlong)iVar3 * 8;
        while( true ) {
          if ((param_1->ScriptAndPropertyObjectReferences).ArrayNum != iVar3) {
            `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_164);
          }
          if (pFVar17 == pFVar14) break;
          pFVar17 = pFVar17 + 8;
        }
        UStruct::CollectBytecodeReferencedObjects
                  (param_1,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)pTVar2);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pFVar14 = (pTVar2->AllocatorInstance).Data,
           0 < (param_1->ScriptAndPropertyObjectReferences).ArrayNum)) {
          do {
            if (*(UObject **)pFVar14 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(*(UObject **)pFVar14);
            }
            uVar15 = (int)pFVar16 + 1;
            pFVar16 = (FLinker *)(ulonglong)uVar15;
            pFVar14 = pFVar14 + 8;
          } while ((int)uVar15 < (param_1->ScriptAndPropertyObjectReferences).ArrayNum);
        }
      }
      bVar5 = true;
    }
    else {
      local_140 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
      if (((local_140 == 0) || (*(int *)(local_140 + 0xb8) != 1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LinkerCastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x265,L""), local_140 = 0, bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_100 = &stack0x00000018;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FDeferredScriptTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar9 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,
                          &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredScriptTracker>::GetTlsSlot(void)'
                           ::__l2::TlsSlot);
      local_120._0_4_ = this->BytecodeBufferSize;
      local_120._4_4_ = this->SerializedScriptSize;
      lStack_118 = this->ScriptSerializationOffset;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_110.ObjectIndex = 0;
      local_110.ObjectSerialNumber = 0;
      local_150.Value = (FDeferredScriptLoader *)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_150.Value);
      local_f8 = &local_140;
      local_f0 = &local_120;
      TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FLinkerLoad_*_const_&,FDeferredScriptLoader_&&>_>
                ((TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
                  *)(pFVar9 + 2),&local_150,(bool *)&local_f8);
      (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,lVar8);
      bVar5 = false;
    }
  }
  else {
    iVar3 = this->BytecodeBufferSize;
    this->BytecodeBufferSize = 0;
    ClearScriptCode(this,param_1);
    this->BytecodeBufferSize = iVar3;
    (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,lVar8);
    bVar5 = false;
  }
  return bVar5;
}

// ResolveDeferredScriptLoads @ 14221b930

int __cdecl FStructScriptLoader::ResolveDeferredScriptLoads(FLinkerLoad *param_1)

{
  int iVar1;
  FDeferredScriptTracker *this;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredScriptTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FDeferredScriptTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredScriptTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  iVar1 = FDeferredScriptTracker::ResolveDeferredScripts(this,param_1);
  return iVar1;
}

// ShouldDeferScriptSerialization @ 14222bfa0

bool __cdecl FStructScriptLoader::ShouldDeferScriptSerialization(FArchive *param_1)

{
  longlong lVar1;
  
  if (((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) {
    lVar1 = (**(code **)(*(longlong *)param_1 + 0x20))();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0xb8) == 1)) {
      return (bool)((byte)(*(uint *)(lVar1 + 0x350) >> 0x14) & 1);
    }
  }
  return false;
}


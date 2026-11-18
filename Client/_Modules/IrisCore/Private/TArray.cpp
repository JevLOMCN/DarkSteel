// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 53

// AddUniqueImpl<UE::Net::FNetToken_const_&> @ 1441f5210

int __thiscall
TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::Net::FNetToken_const_&>
          (TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetToken *param_1)

{
  ForElementType<UE::Net::FNetToken> FVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Net::FNetToken> FVar6;
  ForElementType<UE::Net::FNetToken> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetToken>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(uint *)FVar6 == (param_1->field0_0x0).Value) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<UE::Net::FNetToken>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UE::Net::FNetToken>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FNetToken *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    this = (TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  ((FNetToken_u_0 *)((longlong)this + (longlong)iVar5 * 4))->_s_0 =
       (FNetToken_u_0_s_0)param_1->field0_0x0;
  return iVar5;
}

// AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_> @ 1441f5330

int __thiscall
TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
          (TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
           *this,TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *param_1)

{
  FScriptContainerElement *pFVar1;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar7;
  
  pTVar2 = (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
           (this->AllocatorInstance).Data;
  if (pTVar2 != pTVar2 + this->ArrayNum) {
    pTVar7 = pTVar2;
    do {
      if ((*(longlong *)pTVar7 == *(longlong *)param_1) &&
         (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&param_1->field_0x8)) {
        iVar6 = (int)((longlong)pTVar7 - (longlong)pTVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pTVar7 = pTVar7 + 1;
    } while (pTVar7 != pTVar2 + this->ArrayNum);
  }
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar4;
  return iVar6;
}

// RemoveAtImpl @ 144218110

void __thiscall
TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FMemberCacheEntry *_Dst;
  int iVar1;
  
  _Dst = (FMemberCacheEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144218190

void __thiscall
TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  FMemberFunctionCacheEntry *_Dst;
  
  _Dst = (FMemberFunctionCacheEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144218210

void __thiscall
TArray<UDataStreamManager::FImpl::FRecord,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UDataStreamManager::FImpl::FRecord,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FRecord *_Dst;
  
  _Dst = (FRecord *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<UDataStreamManager::FImpl::FRecord,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14421af40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<unsigned_int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
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
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14421b0a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,0,
           (longlong)(param_1 - iVar5) * 0x18);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14421b200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::Net::FNetToken> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UE::Net::FNetToken> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
      this = (TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *
             )FVar2;
    }
    DefaultConstructItems<UE::Net::FNetToken,int>
              ((void *)((longlong)this + (longlong)iVar5 * 4),param_1 - iVar6);
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
        FVar7 = (ForElementType<UE::Net::FNetToken>)this;
        if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14421b360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 2,0,(longlong)(param_1 - iVar5) * 2);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 2;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 2,(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14421b4a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
SetNumZeroed(TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FDataStreamRecord_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FDataStreamRecord_const_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FDataStreamRecord_const_*>)0x0) {
      this = (TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
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
        FVar7 = (ForElementType<FDataStreamRecord_const_*>)this;
        if (FVar2 != (ForElementType<FDataStreamRecord_const_*>)0x0) {
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
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<unsigned_int_const_&> @ 144220140

int __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(uint *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(uint *)(pFVar1 + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UNetObjectGridFilter::FCellAndTimestamp_const_&> @ 144220240

int __thiscall
TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::AddUniqueImpl<UNetObjectGridFilter::FCellAndTimestamp_const_&>
          (TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FCellAndTimestamp *param_1)

{
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)this;
    if (FVar1 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)this;
      if (FVar1 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FCellAndTimestamp *)((longlong)FVar5 + (longlong)this->ArrayMax * 0xc)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
                        (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      this = (TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)FVar1;
    }
    *(FCellCoord *)((longlong)this + (longlong)iVar4 * 0xc) = param_1->Cell;
    *(uint *)((uchar *)((longlong)this + 8) + (longlong)iVar4 * 0xc) = param_1->Timestamp;
  }
  return iVar4;
}

// AddZeroed @ 14422f460

int __thiscall
TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 2,0,(longlong)param_1 * 2);
  return iVar1;
}

// Find @ 144239ef0

int __thiscall
TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::Find(TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
       *this,FCellAndTimestamp *param_1)

{
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar1;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar2;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)this;
  if (FVar1 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
    FVar2 = FVar1;
  }
  FVar1 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
          ((longlong)FVar2 + (longlong)this->ArrayNum * 0xc);
  if (FVar2 != FVar1) {
    FVar3 = FVar2;
    do {
      if (*(uint *)((longlong)FVar3 + 8) == param_1->Timestamp &&
          (*(int *)((longlong)FVar3 + 4) == (param_1->Cell).Y && *(int *)FVar3 == (param_1->Cell).X)
         ) {
        return (int)(((longlong)FVar3 - (longlong)FVar2) / 0xc);
      }
      FVar3 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)((longlong)FVar3 + 0xc);
    } while (FVar3 != FVar1);
  }
  return -1;
}

// RemoveAtImpl @ 14424d310

void __thiscall
TArray<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  DestructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int>
            ((FNetObjectGroupMembership *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x18,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14424d390

void __thiscall
TArray<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14424d410

void __thiscall
TArray<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FPerConnectionInfo *_Dst;
  
  _Dst = (FPerConnectionInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x160);
  DestructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x160);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14424d490

void __thiscall
TArray<UNetObjectGridFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UNetObjectGridFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FPerConnectionInfo *_Dst;
  
  _Dst = (FPerConnectionInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x1e0);
  DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x1e0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 144252e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,TSizedDefaultAllocator<32>_>::
SetNum(TArray<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,TSizedDefaultAllocator<32>_>
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
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x18,param_1 - iVar2);
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
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumZeroed @ 144252f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = this->ArrayNum;
  if (iVar3 < param_1) {
    AddZeroed(this,param_1 - iVar3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar3) {
    uVar4 = iVar3 - param_1;
    if (((int)(uVar4 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar4 != 0) {
      _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
      iVar3 = (this->ArrayNum - uVar4) - param_1;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar4 * 4,(longlong)iVar3 << 2);
      }
      iVar3 = this->ArrayNum - uVar4;
      this->ArrayNum = iVar3;
      if (param_2 == Default) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&this->AllocatorInstance,iVar3,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumZeroed @ 144253070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FReplicationConditionals::FConditionalsMask,TSizedDefaultAllocator<32>_>::
SetNumZeroed(TArray<UE::Net::Private::FReplicationConditionals::FConditionalsMask,TSizedDefaultAllocator<32>_>
             *this,int param_1,EAllowShrinking param_2)

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
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 2,0,(longlong)(param_1 - iVar5) * 2);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 2;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 2,(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1442531b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FReplicationConditionals::FPerObjectInfo,TSizedDefaultAllocator<32>_>::
SetNumZeroed(TArray<UE::Net::Private::FReplicationConditionals::FPerObjectInfo,TSizedDefaultAllocator<32>_>
             *this,int param_1,EAllowShrinking param_2)

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
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 2,0,(longlong)(param_1 - iVar5) * 2);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 2;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 2,(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<unsigned_int_const_,int> @ 14425e6d0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=<unsigned_int_const_,int>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  uint *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 14425e760

TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
operator=<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this
          ,TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int iVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  int *piVar3;
  ForElementType<UE::Net::FNetToken> _Dst;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  iVar1 = param_1->ArrayNum;
  piVar3 = &this->ArrayMax;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    param_1 = (TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  this->ArrayNum = iVar1;
  if ((iVar1 == 0) && (*piVar3 == 0)) {
    *piVar3 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
            (4,4,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<UE::Net::FNetToken>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    _Dst = FVar2;
  }
  if (iVar1 != 0) {
    memcpy((void *)_Dst,param_1,(longlong)iVar1 << 2);
  }
  return this;
}

// AddUniqueImpl<UE::Net::FNetObjectReference_const_&> @ 14425f000

int __thiscall
TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
          (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetObjectReference *param_1)

{
  FNetRefHandle_u_0 *pFVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  code *pcVar3;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetObjectReference> FVar7;
  ForElementType<UE::Net::FNetObjectReference> FVar8;
  ForElementType<UE::Net::FNetObjectReference> FVar9;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar7 = FVar2;
  }
  FVar8 = (ForElementType<UE::Net::FNetObjectReference>)
          ((longlong)this->ArrayNum * 0x10 + (longlong)FVar7);
  if (FVar7 != FVar8) {
    FVar9 = FVar7;
    do {
      if (((*(ulonglong *)FVar9 & 0x3fffffffffffff) ==
           ((param_1->RefHandle).field0_0x0.Value & 0x3fffffffffffff)) &&
         (*(uint *)((longlong)FVar9 + 8) == (param_1->PathToken).field0_0x0.Value)) {
        iVar6 = (int)((longlong)FVar9 - (longlong)FVar7 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      FVar9 = (ForElementType<UE::Net::FNetObjectReference>)((longlong)FVar9 + 0x10);
    } while (FVar9 != FVar8);
  }
  FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FNetObjectReference *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar7)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar4 = *(FNetRefHandle_u_0 *)&param_1->PathToken;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    this = (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  pFVar1 = (FNetRefHandle_u_0 *)((longlong)this + (longlong)iVar6 * 0x10);
  *pFVar1 = (param_1->RefHandle).field0_0x0;
  pFVar1[1] = FVar4;
  return iVar6;
}

// AddUniqueImpl<UE::Net::FNetObjectReference_const_&> @ 14425f160

int __thiscall
TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
          (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetObjectReference *param_1)

{
  FNetRefHandle_u_0 *pFVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  code *pcVar3;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetObjectReference> FVar7;
  ForElementType<UE::Net::FNetObjectReference> FVar8;
  ForElementType<UE::Net::FNetObjectReference> FVar9;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar7 = FVar2;
  }
  FVar8 = (ForElementType<UE::Net::FNetObjectReference>)
          ((longlong)this->ArrayNum * 0x10 + (longlong)FVar7);
  if (FVar7 != FVar8) {
    FVar9 = FVar7;
    do {
      if (((*(ulonglong *)FVar9 & 0x3fffffffffffff) ==
           ((param_1->RefHandle).field0_0x0.Value & 0x3fffffffffffff)) &&
         (*(uint *)((longlong)FVar9 + 8) == (param_1->PathToken).field0_0x0.Value)) {
        iVar6 = (int)((longlong)FVar9 - (longlong)FVar7 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      FVar9 = (ForElementType<UE::Net::FNetObjectReference>)((longlong)FVar9 + 0x10);
    } while (FVar9 != FVar8);
  }
  FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FNetObjectReference *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar7)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar4 = *(FNetRefHandle_u_0 *)&param_1->PathToken;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    this = (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  pFVar1 = (FNetRefHandle_u_0 *)((longlong)this + (longlong)iVar6 * 0x10);
  *pFVar1 = (param_1->RefHandle).field0_0x0;
  pFVar1[1] = FVar4;
  return iVar6;
}

// AddUniqueImpl<UE::Net::FNetObjectReference_const_&> @ 14425f2c0

int __thiscall
TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
          (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetObjectReference *param_1)

{
  FNetRefHandle_u_0 *pFVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  code *pcVar3;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetObjectReference> FVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= param_1) {
      FVar7 = (ForElementType<UE::Net::FNetObjectReference>)this;
      if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
        FVar7 = FVar2;
      }
      if ((param_1 < (FNetObjectReference *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar4 = *(FNetRefHandle_u_0 *)&param_1->PathToken;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      this = (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    pFVar1 = (FNetRefHandle_u_0 *)((longlong)this + (longlong)iVar6 * 0x10);
    *pFVar1 = (param_1->RefHandle).field0_0x0;
    pFVar1[1] = FVar4;
  }
  return iVar6;
}

// AddUniqueImpl<UE::Net::FNetRefHandle_const_&> @ 14425f3c0

int __thiscall
TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
          (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetRefHandle *param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Net::FNetRefHandle> FVar6;
  ForElementType<UE::Net::FNetRefHandle> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::Net::FNetRefHandle>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar6 = FVar2;
  }
  FVar1 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar6 + (longlong)this->ArrayNum * 8);
  if (FVar6 != FVar1) {
    FVar7 = FVar6;
    do {
      if ((*(ulonglong *)FVar7 & 0x3fffffffffffff) ==
          ((param_1->field0_0x0).Value & 0x3fffffffffffff)) {
        iVar5 = (int)((longlong)FVar7 - (longlong)FVar6 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar7 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar7 + 8);
    } while (FVar7 != FVar1);
  }
  FVar6 = (ForElementType<UE::Net::FNetRefHandle>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar6 = FVar2;
  }
  if ((ulonglong)FVar6 <= param_1) {
    FVar6 = (ForElementType<UE::Net::FNetRefHandle>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar6 = FVar2;
    }
    if ((param_1 < (FNetRefHandle *)((longlong)FVar6 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    this = (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  ((FNetRefHandle_u_0 *)((longlong)this + (longlong)iVar5 * 8))->_s_0 =
       (FNetRefHandle_u_0_s_0)param_1->field0_0x0;
  return iVar5;
}

// AddUniqueImpl<unsigned_int> @ 14425f510

int __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(uint *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(uint *)(pFVar1 + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> @ 144265910

TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>::
TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>
          (TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> @ 1442689a0

void __thiscall
TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>::
~TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>
          (TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Find @ 144277bf0

int __thiscall
TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FNetObjectReference *param_1)

{
  ForElementType<UE::Net::FNetObjectReference> FVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  ForElementType<UE::Net::FNetObjectReference> FVar3;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Net::FNetObjectReference>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar3 = FVar2;
  }
  FVar2 = (ForElementType<UE::Net::FNetObjectReference>)
          ((longlong)this->ArrayNum * 0x10 + (longlong)FVar3);
  if (FVar3 != FVar2) {
    FVar1 = FVar3;
    do {
      if (((*(ulonglong *)FVar1 & 0x3fffffffffffff) ==
           ((param_1->RefHandle).field0_0x0.Value & 0x3fffffffffffff)) &&
         (*(uint *)((longlong)FVar1 + 8) == (param_1->PathToken).field0_0x0.Value)) {
        return (int)((longlong)FVar1 - (longlong)FVar3 >> 4);
      }
      FVar1 = (ForElementType<UE::Net::FNetObjectReference>)((longlong)FVar1 + 0x10);
    } while (FVar1 != FVar2);
  }
  return -1;
}

// Insert @ 14427ec30

int __thiscall
TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
          (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          uint *param_1,int param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  void *_Src;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<unsigned_int>)this;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (uint *)((longlong)FVar5 + (longlong)this->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar4 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  _Src = (void *)((longlong)FVar5 + (longlong)param_2 * 4);
  memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar4 - param_2) << 2);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  *(uint *)((longlong)param_2 * 4 + (longlong)this) = *param_1;
  return param_2;
}

// InsertUninitializedImpl @ 14427ed40

void __thiscall
TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// Remove @ 14428dca0

int __thiscall
TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Remove
          (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          uint *param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<unsigned_int>)this;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (uint *)((longlong)FVar5 + (longlong)this->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  iVar10 = 0;
  bVar3 = *(uint *)FVar5 != *param_1;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar3 != (*(uint *)((longlong)FVar5 + lVar7 * 4) != *param_1)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove((int *)((longlong)FVar5 + (longlong)iVar10 * 4),
                (int *)((longlong)FVar5 + (longlong)iVar8 * 4),(longlong)(iVar9 - iVar8) << 2);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

// Remove @ 14428de40

int __thiscall
TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Remove
          (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          uint *param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<unsigned_int>)this;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (uint *)((longlong)FVar5 + (longlong)this->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  iVar10 = 0;
  bVar3 = *(uint *)FVar5 != *param_1;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar3 != (*(uint *)((longlong)FVar5 + lVar7 * 4) != *param_1)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove((int *)((longlong)FVar5 + (longlong)iVar10 * 4),
                (int *)((longlong)FVar5 + (longlong)iVar8 * 4),(longlong)(iVar9 - iVar8) << 2);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

// RemoveAtImpl @ 14428e220

void __thiscall
TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>
  *_Dst;
  
  _Dst = (TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14428e2a0

void __thiscall
TArray<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,int>
            ((TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// AddUniqueImpl<UObject_const_*_const_&> @ 1442a1750

int __thiscall
TArray<UObject_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UObject_const_*_const_&>
          (TArray<UObject_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          UObject **param_1)

{
  ForElementType<UObject_const_*> FVar1;
  ForElementType<UObject_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UObject_const_*> FVar6;
  ForElementType<UObject_const_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UObject_const_*>)this;
  if (FVar2 != (ForElementType<UObject_const_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<UObject_const_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(UObject **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<UObject_const_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<UObject_const_*>)this;
  if (FVar2 != (ForElementType<UObject_const_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UObject_const_*>)this;
    if (FVar2 != (ForElementType<UObject_const_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (UObject **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<UObject_const_*>)0x0) {
    this = (TArray<UObject_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  *(UObject **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UE::Net::FNetRefHandle_const_&> @ 1442a1870

int __thiscall
TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
          (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,FNetRefHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if ((*(ulonglong *)pFVar5 & 0x3fffffffffffff) ==
          ((param_1->field0_0x0).Value & 0x3fffffffffffff)) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  ((FNetRefHandle_u_0 *)(pFVar1 + (longlong)iVar4 * 8))->_s_0 =
       (FNetRefHandle_u_0_s_0)param_1->field0_0x0;
  return iVar4;
}

// RemoveAtImpl @ 1442de1f0

void __thiscall
TArray<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FPerConnectionInfo *_Dst;
  int iVar1;
  
  _Dst = (FPerConnectionInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1442de270

void __thiscall
TArray<UNetObjectConnectionFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UNetObjectConnectionFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  DestructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x18,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1442de2f0

void __thiscall
TArray<UNetObjectCountLimiter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UNetObjectCountLimiter::FPerConnectionInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>((FPerConnectionInfo *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 1442df6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(uint *)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 4
                  ,(longlong)iVar10 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 1442df8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,FNetRefHandle *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
    bVar3 = false;
    iVar9 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar9) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar8;
      if (((*(ulonglong *)((this->AllocatorInstance).Data + lVar10) ^ (param_1->field0_0x0).Value) &
          0x3fffffffffffff) == 0) {
        uVar7 = uVar8 - 1;
        lVar10 = lVar10 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = ~uVar8 + this->ArrayNum;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar9 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 1442e4aa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
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
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// RemoveAtImpl @ 14430e550

void __thiscall
TArray<UE::Net::FReplicationView,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Net::FReplicationView,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x130;
  DestructItems<UE::Net::FReplicationView,int>((FReplicationView *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x130,(longlong)iVar1 * 0x130);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1443138b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<unsigned_int,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
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
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 144313a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UReplicationSystem_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UReplicationSystem_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UReplicationSystem_*>)0x0) {
      this = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
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
        FVar7 = (ForElementType<UReplicationSystem_*>)this;
        if (FVar2 != (ForElementType<UReplicationSystem_*>)0x0) {
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
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 144313b60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_>::
SetNumZeroed(TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_>
             *this,int param_1,EAllowShrinking param_2)

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
                      (4,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)(param_1 - iVar5) << 2);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 144313cb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_>::
SetNumZeroed(TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_>
             *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_1 - iVar5) << 4);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14433eba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Net::Private::FNetTypeStatsData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Net::Private::FNetTypeStatsData,TSizedDefaultAllocator<32>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Net::Private::FNetTypeStatsData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x80,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x80;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x80,(longlong)iVar5 << 7);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14433ecf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_char> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
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
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<unsigned_char>)this;
        if (FVar2 != (ForElementType<unsigned_char>)0x0) {
          FVar6 = FVar2;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}


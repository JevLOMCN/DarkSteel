// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 6

// ClearCounterImpl @ 142ca76e0

void __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::ClearCounterImpl
          (TCounterCategory<unsigned_char> *this,void *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res18[0] = param_2;
  if (this->KeyTypeName != param_2) {
    ::FName::ToString(local_res18,&local_28);
    ::FName::ToString(&this->KeyTypeName,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyTypeName == InKeyTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                       ,0x10a,
                       L"Invalid counter access! Counter is keyed against \'%s\' but \'%s\' was given."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
            *)&this->Counters,*(uchar *)param_1);
  return;
}

// ClearCountersImpl @ 142ca7930

void __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::ClearCountersImpl
          (TCounterCategory<unsigned_char> *this)

{
  TMap<unsigned_char,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->Counters;
  bVar3 = 1 < *(int *)&(this->Counters).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->Counters).field_0xc;
  *(undefined4 *)&(this->Counters).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Counters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Counters).field_0x34 = 0;
  iVar2 = *(int *)&(this->Counters).field_0x2c;
  *(undefined4 *)&(this->Counters).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Counters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Counters).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Counters).field_0x48 = 1;
    TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// DecrementCounterImpl @ 142caa590

void __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::DecrementCounterImpl
          (TCounterCategory<unsigned_char> *this,void *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  local_res18 = param_2;
  if (this->KeyTypeName != param_2) {
    ::FName::ToString(&local_res18,&local_28);
    ::FName::ToString(&this->KeyTypeName,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyTypeName == InKeyTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                       ,0xfb,
                       L"Invalid counter access! Counter is keyed against \'%s\' but \'%s\' was given."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&(this->Counters).field_0x8 != *(int *)&(this->Counters).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Counters).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Counters).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->Counters).field_0x48 - 1) &
                              (ulonglong)*(byte *)param_1) * 4);
    if (iVar3 != -1) {
      while (pbVar4 = (byte *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Counters).field_0x0),
            *pbVar4 != *(byte *)param_1) {
        iVar3 = *(int *)(pbVar4 + 8);
        if (iVar3 == -1) {
          return;
        }
      }
      pbVar6 = pbVar4 + 4;
      if (pbVar4 == (byte *)0x0) {
        pbVar6 = (byte *)0x0;
      }
      if (pbVar6 != (byte *)0x0) {
        if ((*(int *)pbVar6 < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("*CounterValue > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                               ,0x100,L"Counter value unflow!"), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        if (*(int *)pbVar6 == 0) {
          TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
                    *)&this->Counters,*(uchar *)param_1);
        }
      }
    }
  }
  return;
}

// ForEachCounterValueImpl @ 142cac470

void __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::ForEachCounterValueImpl
          (TCounterCategory<unsigned_char> *this,void *param_1,FName param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  FName local_res18;
  int local_res20;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  local_res18 = param_2;
  if (this->KeyTypeName != param_2) {
    ::FName::ToString(&local_res18,local_78);
    ::FName::ToString(&this->KeyTypeName,&local_88);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyTypeName == InKeyTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                       ,0xe4,
                       L"Invalid counter access! Counter is keyed against \'%s\' but \'%s\' was given."
                      );
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = *(int *)&(this->Counters).field_0x28;
  puVar1 = &(this->Counters).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Counters).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142cac5ad;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_142cac5ad:
  uVar11 = *(uint *)&(this->Counters).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar7,iVar12);
  TStack_b0.CurrentBitIndex = iVar8;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = iVar14;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->Counters).field_0x8 - *(int *)&(this->Counters).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->Counters).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Counters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142cac6b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_142cac6b0:
  while( true ) {
    if (*(int *)&(this->Counters).field_0x8 - *(int *)&(this->Counters).field_0x34 != (int)uStack_90
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_char,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar11) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_b0.CurrentBitIndex * 0x10 + *(longlong *)&this->Counters;
    local_res10[0] = *(undefined4 *)(lVar9 + 4);
    cVar6 = (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),lVar9,local_res10);
    if (cVar6 == '\0') {
      return;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// GetCounterValueImpl @ 142caceb0

int __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::GetCounterValueImpl
          (TCounterCategory<unsigned_char> *this,void *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (this->KeyTypeName != param_2) {
    local_res18[0] = param_2;
    ::FName::ToString(local_res18,&local_28);
    ::FName::ToString(&this->KeyTypeName,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyTypeName == InKeyTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                       ,0xdc,
                       L"Invalid counter access! Counter is keyed against \'%s\' but \'%s\' was given."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (*(int *)&(this->Counters).field_0x8 != *(int *)&(this->Counters).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Counters).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Counters).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->Counters).field_0x48 - 1) &
                              (ulonglong)*(byte *)param_1) * 4);
    if (iVar3 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar3 * 0x10 + *(longlong *)&this->Counters);
        if (*pbVar4 == *(byte *)param_1) {
          if (pbVar4 == (byte *)0x0) {
            return 0;
          }
          return *(int *)(pbVar4 + 4);
        }
        iVar3 = *(int *)(pbVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0;
}

// IncrementCounterImpl @ 142caf200

void __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::IncrementCounterImpl
          (TCounterCategory<unsigned_char> *this,void *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res18[0] = param_2;
  if (this->KeyTypeName != param_2) {
    ::FName::ToString(local_res18,&local_28);
    ::FName::ToString(&this->KeyTypeName,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyTypeName == InKeyTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementCounter.h"
                       ,0xf2,
                       L"Invalid counter access! Counter is keyed against \'%s\' but \'%s\' was given."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  piVar3 = TMapBase<unsigned_char,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>_>
           ::FindOrAddImpl<unsigned_char_const_&>
                     ((TMapBase<unsigned_char,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>_>
                       *)&this->Counters,(uint)*(byte *)param_1,param_1);
  *piVar3 = *piVar3 + 1;
  return;
}


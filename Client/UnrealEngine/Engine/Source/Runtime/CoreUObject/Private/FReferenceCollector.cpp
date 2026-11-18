// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 33

// AllowEliminatingReferences @ 141e90590

void __thiscall
FReferenceCollector::AllowEliminatingReferences(FReferenceCollector *this,bool param_1)

{
  return;
}

// GetSerializedProperty @ 141ea2780

FProperty * __thiscall FReferenceCollector::GetSerializedProperty(FReferenceCollector *this)

{
  return (FProperty *)0x0;
}

// HandleObjectReferences @ 141ea43f0

void __thiscall
FReferenceCollector::HandleObjectReferences
          (FReferenceCollector *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3,param_4);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// IsProcessingNativeReferences @ 141ea9d30

bool __thiscall FReferenceCollector::IsProcessingNativeReferences(FReferenceCollector *this)

{
  return true;
}

// MarkWeakObjectReferenceForClearing @ 141eadb10

bool __thiscall
FReferenceCollector::MarkWeakObjectReferenceForClearing
          (FReferenceCollector *this,UObject **param_1,UObject *param_2)

{
  return false;
}

// NeedsInitialReferences @ 141eadd90

bool __thiscall FReferenceCollector::NeedsInitialReferences(FReferenceCollector *this)

{
  return true;
}

// NeedsPropertyReferencer @ 141eadda0

bool __thiscall FReferenceCollector::NeedsPropertyReferencer(FReferenceCollector *this)

{
  return true;
}

// SetIsProcessingNativeReferences @ 141ebc270

void __thiscall
FReferenceCollector::SetIsProcessingNativeReferences(FReferenceCollector *this,bool param_1)

{
  return;
}

// SetSerializedProperty @ 141ebc3e0

void __thiscall
FReferenceCollector::SetSerializedProperty(FReferenceCollector *this,FProperty *param_1)

{
  return;
}

// AddReferencedObjects<UObject> @ 141ec5970

void __thiscall
FReferenceCollector::AddReferencedObjects<UObject>
          (FReferenceCollector *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141ec5a1d;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_141ec5a1d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141ec5b21;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_141ec5b21:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,(longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements,
               pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<UPackage> @ 141ec5ba0

void __thiscall
FReferenceCollector::AddReferencedObjects<UPackage>
          (FReferenceCollector *this,
          TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141ec5c4d;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_141ec5c4d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141ec5d51;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_141ec5d51:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,(longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements,
               pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<UObject,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_> @ 142124ed0

void __thiscall
FReferenceCollector::
AddReferencedObjects<UObject,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
          (FReferenceCollector *this,
          TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Pairs).Elements.field_0x28;
  puVar1 = &(param_1->Pairs).Elements.field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142124f7d;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_142124f7d:
  uVar12 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Pairs).Elements.field_0x8 -
                       *(int *)&(param_1->Pairs).Elements.field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142125081;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_142125081:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)&(param_1->Pairs).Elements + (longlong)TStack_68.CurrentBitIndex * 0x18;
    (**(code **)(this->_padding_ + 0x88))(this,lVar10,pUVar5,pFVar6);
    (**(code **)(this->_padding_ + 0x88))(this,lVar10 + 8,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// ~FReferenceCollector @ 142259900

void __thiscall FReferenceCollector::~FReferenceCollector(FReferenceCollector *this)

{
  FReferenceCollectorArchive *pFVar1;
  
  this->_padding_ = (longlong)&___7FReferenceCollector__6B_;
  pFVar1 = (this->DefaultReferenceCollectorArchive).Ptr;
  if (pFVar1 != (FReferenceCollectorArchive *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014225991b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// AddPropertyReferences @ 14225ee00

void __thiscall
FReferenceCollector::AddPropertyReferences
          (FReferenceCollector *this,UStruct *param_1,void *param_2,UObject *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225ee7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<0,UStruct>(FReferenceCollector&___ptr64,UStruct_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar2 != '\0') | (ulonglong)(-(uint)(cVar1 != '\0') & 2)])
            (this,param_1,param_2,param_3);
  return;
}

// AddPropertyReferencesLimitedToObjectProperties @ 14225ee90

void __thiscall
FReferenceCollector::AddPropertyReferencesLimitedToObjectProperties
          (FReferenceCollector *this,UStruct *param_1,void *param_2,UObject *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225ef0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<8,UStruct>(FReferenceCollector&___ptr64,UStruct_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar2 != '\0') | (ulonglong)(-(uint)(cVar1 != '\0') & 2)])
            (this,param_1,param_2,param_3);
  return;
}

// AddPropertyReferencesWithStructARO @ 14225ef20

void __thiscall
FReferenceCollector::AddPropertyReferencesWithStructARO
          (FReferenceCollector *this,UClass *param_1,void *param_2,UObject *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225ef9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<4,UClass>(FReferenceCollector&___ptr64,UClass_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar2 != '\0') | (ulonglong)(-(uint)(cVar1 != '\0') & 2)])
            (this,param_1,param_2,param_3);
  return;
}

// AddPropertyReferencesWithStructARO @ 14225efb0

void __thiscall
FReferenceCollector::AddPropertyReferencesWithStructARO
          (FReferenceCollector *this,UScriptStruct *param_1,void *param_2,UObject *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225f02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<4,UScriptStruct>(FReferenceCollector&___ptr64,UScriptStruct_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar2 != '\0') | (ulonglong)(-(uint)(cVar1 != '\0') & 2)])
            (this,param_1,param_2,param_3);
  return;
}

// AddReferencedObject @ 14225f0d0

void __thiscall
FReferenceCollector::AddReferencedObject
          (FReferenceCollector *this,FWeakObjectPtr *param_1,UObject *param_2,FProperty *param_3)

{
  UObject *local_res8;
  UObject *local_18 [2];
  
  local_res8 = FWeakObjectPtr::GetEvenIfUnreachable(param_1);
  (**(code **)(this->_padding_ + 0x88))(this,&local_res8,param_2,param_3);
  local_18[0] = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_18);
  return;
}

// AddReferencedObjects @ 14225f280

void __thiscall
FReferenceCollector::AddReferencedObjects
          (FReferenceCollector *this,UScriptStruct **param_1,void *param_2,UObject *param_3,
          FProperty *param_4)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ICppStructOps *this_00;
  _func___cdecl_void_void_ptr_FReferenceCollector_ptr *p_Var6;
  
  if (*param_1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1485,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1486,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3,param_4);
  if (((*param_1)->StructFlags & STRUCT_AddStructReferencedObjects) != STRUCT_NoFlags) {
    this_00 = UScriptStruct::GetCppStructOps(*param_1);
    p_Var6 = UScriptStruct::ICppStructOps::AddStructReferencedObjects(this_00);
    (*p_Var6)(param_2,this);
  }
  pUVar1 = *param_1;
  cVar4 = (**(code **)(this->_padding_ + 0x38))(this);
  cVar5 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225f273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<0,UStruct>(FReferenceCollector&___ptr64,UStruct_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar5 != '\0') | (ulonglong)(-(uint)(cVar4 != '\0') & 2)])
            (this,pUVar1,param_2,param_3);
  return;
}

// AddReferencedObjects @ 14225f290

void __thiscall
FReferenceCollector::AddReferencedObjects
          (FReferenceCollector *this,TObjectPtr<UScriptStruct_const_> *param_1,void *param_2,
          UObject *param_3,FProperty *param_4)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ICppStructOps *this_00;
  _func___cdecl_void_void_ptr_FReferenceCollector_ptr *p_Var6;
  
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1485,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1486,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3,param_4);
  if ((((param_1->field0_0x0).DebugPtr)->StructFlags & STRUCT_AddStructReferencedObjects) !=
      STRUCT_NoFlags) {
    this_00 = UScriptStruct::GetCppStructOps((param_1->field0_0x0).DebugPtr);
    p_Var6 = UScriptStruct::ICppStructOps::AddStructReferencedObjects(this_00);
    (*p_Var6)(param_2,this);
  }
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  cVar4 = (**(code **)(this->_padding_ + 0x38))(this);
  cVar5 = (**(code **)(this->_padding_ + 0x48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014225f273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&`void___cdecl_CallCollectStructReferences<0,UStruct>(FReferenceCollector&___ptr64,UStruct_const*___ptr64,void*___ptr64,UObject_const*___ptr64)'
              ::__l2::Funcs)[(ulonglong)(cVar5 != '\0') | (ulonglong)(-(uint)(cVar4 != '\0') & 2)])
            (this,pUVar1,param_2,param_3);
  return;
}

// AddReferencedObjects @ 14225f2a0

void __thiscall
FReferenceCollector::AddReferencedObjects
          (FReferenceCollector *this,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_1,
          void *param_2,UObject *param_3,FProperty *param_4)

{
  UScriptStruct *local_res10;
  UScriptStruct *local_18 [2];
  
  local_res10 = (UScriptStruct *)FWeakObjectPtr::GetEvenIfUnreachable(&param_1->WeakPtr);
  AROPrivate::AddReferencedObjects(this,&local_res10,param_2,param_3,param_4);
  local_18[0] = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&param_1->WeakPtr,(FObjectPtr)local_18);
  return;
}

// AddStableReference @ 14225fe60

void __thiscall FReferenceCollector::AddStableReference(FReferenceCollector *this,UObject **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014225fe69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x88))(this,param_1,0,0);
  return;
}

// AddStableReference @ 14225fe80

void __thiscall
FReferenceCollector::AddStableReference(FReferenceCollector *this,TObjectPtr<UObject> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014225fe89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x88))(this,param_1,0,0);
  return;
}

// AddStableReferenceArray @ 14225fea0

void __thiscall
FReferenceCollector::AddStableReferenceArray
          (FReferenceCollector *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)(this->_padding_ + 0x98))
            (this,(param_1->AllocatorInstance).Data,param_1->ArrayNum,0,0);
  return;
}

// AddStableReferenceArray @ 14225fed0

void __thiscall
FReferenceCollector::AddStableReferenceArray
          (FReferenceCollector *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)(this->_padding_ + 0x90))
            (this,(param_1->AllocatorInstance).Data,param_1->ArrayNum,0,0);
  return;
}

// AddStableReferenceArrayFwd @ 14225ff00

void __thiscall
FReferenceCollector::AddStableReferenceArrayFwd
          (FReferenceCollector *this,TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014225ff03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// AddStableReferenceFwd @ 14225ff10

void __thiscall
FReferenceCollector::AddStableReferenceFwd(FReferenceCollector *this,FObjectPtr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014225ff13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// AddStableReferenceSet @ 14225ff20

void __thiscall
FReferenceCollector::AddStableReferenceSet
          (FReferenceCollector *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  AROPrivate::AddReferencedObjects<UObject>(this,param_1,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// AddStableReferenceSet @ 14225ff40

void __thiscall
FReferenceCollector::AddStableReferenceSet
          (FReferenceCollector *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  AddReferencedObjects<UObject>(this,param_1,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// AddStableReferenceSetFwd @ 14225ff60

void __thiscall
FReferenceCollector::AddStableReferenceSetFwd
          (FReferenceCollector *this,
          TSet<FObjectPtr,DefaultKeyFuncs<FObjectPtr,0>,FDefaultSetAllocator> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014225ff63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))();
  return;
}

// CreateVerySlowReferenceCollectorArchive @ 142268d00

void __thiscall
FReferenceCollector::CreateVerySlowReferenceCollectorArchive(FReferenceCollector *this)

{
  FReferenceCollectorArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReferenceCollectorArchive *pFVar5;
  
  if ((this->DefaultReferenceCollectorArchive).Ptr != (FReferenceCollectorArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultReferenceCollectorArchive == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x161c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(this->_padding_ + 0x38))(this);
  if (cVar4 == '\0') {
    pFVar5 = ::operator_new(0xa8);
    if (pFVar5 != (FReferenceCollectorArchive *)0x0) {
      pFVar5 = FReferenceCollectorArchive::FReferenceCollectorArchive(pFVar5,(UObject *)0x0,this);
      goto LAB_142268d91;
    }
  }
  else {
    pFVar5 = ::operator_new(0xa8);
    if (pFVar5 != (FReferenceCollectorArchive *)0x0) {
      FReferenceCollectorArchive::FReferenceCollectorArchive(pFVar5,(UObject *)0x0,this);
      pFVar5->_padding_ = (longlong)&___7FPropertyTrackingReferenceCollectorArchive__6B_;
      goto LAB_142268d91;
    }
  }
  pFVar5 = (FReferenceCollectorArchive *)0x0;
LAB_142268d91:
  pFVar1 = (this->DefaultReferenceCollectorArchive).Ptr;
  if ((pFVar1 != pFVar5) &&
     ((this->DefaultReferenceCollectorArchive).Ptr = pFVar5,
     pFVar1 != (FReferenceCollectorArchive *)0x0)) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  return;
}

// GetVerySlowReferenceCollectorArchive @ 1422717d0

FReferenceCollectorArchive * __thiscall
FReferenceCollector::GetVerySlowReferenceCollectorArchive(FReferenceCollector *this)

{
  FReferenceCollectorArchive *pFVar1;
  char cVar2;
  FReferenceCollectorArchive *pFVar3;
  
  if ((this->DefaultReferenceCollectorArchive).Ptr != (FReferenceCollectorArchive *)0x0) {
    return (this->DefaultReferenceCollectorArchive).Ptr;
  }
  cVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar2 == '\0') {
    pFVar3 = ::operator_new(0xa8);
    if (pFVar3 != (FReferenceCollectorArchive *)0x0) {
      pFVar3 = FReferenceCollectorArchive::FReferenceCollectorArchive(pFVar3,(UObject *)0x0,this);
      goto LAB_14227183c;
    }
  }
  else {
    pFVar3 = ::operator_new(0xa8);
    if (pFVar3 != (FReferenceCollectorArchive *)0x0) {
      FReferenceCollectorArchive::FReferenceCollectorArchive(pFVar3,(UObject *)0x0,this);
      pFVar3->_padding_ = (longlong)&___7FPropertyTrackingReferenceCollectorArchive__6B_;
      goto LAB_14227183c;
    }
  }
  pFVar3 = (FReferenceCollectorArchive *)0x0;
LAB_14227183c:
  pFVar1 = (this->DefaultReferenceCollectorArchive).Ptr;
  if (pFVar1 == pFVar3) {
    return pFVar1;
  }
  (this->DefaultReferenceCollectorArchive).Ptr = pFVar3;
  if (pFVar1 != (FReferenceCollectorArchive *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return (this->DefaultReferenceCollectorArchive).Ptr;
  }
  return pFVar3;
}

// HandleObjectReferences @ 1422726f0

void __thiscall
FReferenceCollector::HandleObjectReferences
          (FReferenceCollector *this,FObjectPtr *param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3,param_4);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


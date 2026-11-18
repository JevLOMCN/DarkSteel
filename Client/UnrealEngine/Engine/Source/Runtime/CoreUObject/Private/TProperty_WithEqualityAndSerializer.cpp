// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 30

// Identical @ 141f8bd50

bool __thiscall
TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(char *)param_1 == *(char *)param_2;
  }
  return *(char *)param_1 == '\0';
}

// Identical @ 141f8bd70

bool __thiscall
TProperty_WithEqualityAndSerializer<int,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<int,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(int *)param_1 == *(int *)param_2;
  }
  return *(int *)param_1 == 0;
}

// Identical @ 141f8bd90

bool __thiscall
TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(int *)param_1 == *(int *)param_2;
  }
  return *(int *)param_1 == 0;
}

// Identical @ 141f8bdb0

bool __thiscall
TProperty_WithEqualityAndSerializer<float,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<float,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_2 == (void *)0x0) {
    bVar1 = *(float *)param_1 == 0.0;
  }
  else {
    bVar1 = *(float *)param_1 == *(float *)param_2;
  }
  if (bVar1) {
    return true;
  }
  return false;
}

// Identical @ 141f8bde0

bool __thiscall
TProperty_WithEqualityAndSerializer<double,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<double,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_2 == (void *)0x0) {
    bVar1 = *(double *)param_1 == 0.0;
  }
  else {
    bVar1 = *(double *)param_1 == *(double *)param_2;
  }
  if (bVar1) {
    return true;
  }
  return false;
}

// Identical @ 141f8be10

bool __thiscall
TProperty_WithEqualityAndSerializer<FAnsiString,FProperty>::Identical
          (TProperty_WithEqualityAndSerializer<FAnsiString,FProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (param_2 == (void *)0x0) {
    if (iVar1 == 0) {
      return true;
    }
  }
  else {
    if (iVar1 == *(int *)((longlong)param_2 + 8)) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(*(char **)param_1,*(char **)param_2);
      return iVar1 == 0;
    }
    iVar1 = iVar1 + *(int *)((longlong)param_2 + 8);
  }
  return iVar1 == 1;
}

// Identical @ 141f8be60

bool __thiscall
TProperty_WithEqualityAndSerializer<FName,FProperty>::Identical
          (TProperty_WithEqualityAndSerializer<FName,FProperty> *this,void *param_1,void *param_2,
          uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(longlong *)param_1 == *(longlong *)param_2;
  }
  return *(longlong *)param_1 == 0;
}

// Identical @ 141f8be80

bool __thiscall
TProperty_WithEqualityAndSerializer<FString,FProperty>::Identical
          (TProperty_WithEqualityAndSerializer<FString,FProperty> *this,void *param_1,void *param_2,
          uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (param_2 == (void *)0x0) {
    if (iVar1 == 0) {
      return true;
    }
  }
  else {
    if (iVar1 == *(int *)((longlong)param_2 + 8)) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)param_1,*(wchar_t **)param_2);
      return iVar1 == 0;
    }
    iVar1 = iVar1 + *(int *)((longlong)param_2 + 8);
  }
  return iVar1 == 1;
}

// Identical @ 141f8bed0

bool __thiscall
TProperty_WithEqualityAndSerializer<__int64,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<__int64,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(longlong *)param_1 == *(longlong *)param_2;
  }
  return *(longlong *)param_1 == 0;
}

// Identical @ 141f8bef0

bool __thiscall
TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty> *this,
          void *param_1,void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(longlong *)param_1 == *(longlong *)param_2;
  }
  return *(longlong *)param_1 == 0;
}

// SerializeItem @ 141fa5fe0

void __thiscall
TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 8);
  puVar2 = *(undefined1 **)plVar1[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)plVar1[1])[1]) {
    *(undefined1 *)param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141fa6018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x188))(plVar1,param_2,1);
  return;
}

// SerializeItem @ 141fa6030

void __thiscall
TProperty_WithEqualityAndSerializer<int,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<int,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined4 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined4 *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa606f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 141fa6090

void __thiscall
TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined4 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined4 *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa60cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 141fa60f0

void __thiscall
TProperty_WithEqualityAndSerializer<float,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<float,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined4 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined4 *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa612f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 141fa6150

void __thiscall
TProperty_WithEqualityAndSerializer<double,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<double,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined8 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined8 *)**(longlong **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&this_00->field_0x8)[1]) {
    *(undefined8 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa6190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 141fa61b0

void __thiscall
TProperty_WithEqualityAndSerializer<FAnsiString,FProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<FAnsiString,FProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ::operator<<(pFVar1,param_2);
  return;
}

// SerializeItem @ 141fa61e0

void __thiscall
TProperty_WithEqualityAndSerializer<FName,FProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<FName,FProperty> *this,FStructuredArchiveSlot param_1
          ,void *param_2,void *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141fa61ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// SerializeItem @ 141fa6200

void __thiscall
TProperty_WithEqualityAndSerializer<FString,FProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<FString,FProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  ::operator<<(*(FArchive **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// SerializeItem @ 141fa6220

void __thiscall
TProperty_WithEqualityAndSerializer<__int64,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<__int64,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined8 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined8 *)**(longlong **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&this_00->field_0x8)[1]) {
    *(undefined8 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa6260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 141fa6280

void __thiscall
TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined8 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined8 *)**(longlong **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&this_00->field_0x8)[1]) {
    *(undefined8 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141fa62c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// Identical @ 14217e060

bool __thiscall
TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(char *)param_1 == *(char *)param_2;
  }
  return *(char *)param_1 == '\0';
}

// Identical @ 14217e080

bool __thiscall
TProperty_WithEqualityAndSerializer<short,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<short,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(short *)param_1 == *(short *)param_2;
  }
  return *(short *)param_1 == 0;
}

// Identical @ 14217e0a0

bool __thiscall
TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty>::Identical
          (TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  if (param_2 != (void *)0x0) {
    return *(short *)param_1 == *(short *)param_2;
  }
  return *(short *)param_1 == 0;
}

// SerializeItem @ 14218b390

void __thiscall
TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 8);
  puVar2 = *(undefined1 **)plVar1[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)plVar1[1])[1]) {
    *(undefined1 *)param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014218b3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x188))(plVar1,param_2,1);
  return;
}

// SerializeItem @ 14218b3e0

void __thiscall
TProperty_WithEqualityAndSerializer<short,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<short,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined2 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined2 *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined2 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *(undefined2 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014218b421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// SerializeItem @ 14218b440

void __thiscall
TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *this_00;
  undefined2 *puVar1;
  
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined2 *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (undefined2 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *(undefined2 *)param_2 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014218b481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_2);
  return;
}

// Identical @ 1422732d0

bool __thiscall
TProperty_WithEqualityAndSerializer<Verse::FNativeString,FProperty>::Identical
          (TProperty_WithEqualityAndSerializer<Verse::FNativeString,FProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FCopyOnWriteContents *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FCopyOnWrite local_18;
  
  if (param_2 == (void *)0x0) {
    local_18.Payload.Object = (FCopyOnWriteContents *)0x0;
    local_18.Payload.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    Verse::FNativeString::FCopyOnWrite::SetIfNull(param_1);
    if (*(longlong *)param_1 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    puVar2 = *(undefined8 **)param_1;
    Verse::FNativeString::FCopyOnWrite::SetIfNull(&local_18);
    pFVar4 = local_18.Payload.Object;
    if (local_18.Payload.Object == (FCopyOnWriteContents *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar7 = *(int *)(puVar2 + 1);
    iVar1 = (pFVar4->String).Data.ArrayNum;
    if (iVar7 == iVar1) {
      if (iVar7 < 2) {
        bVar5 = true;
      }
      else {
        iVar7 = strcmp((char *)*puVar2,(char *)(pFVar4->String).Data.AllocatorInstance.Data);
        bVar5 = iVar7 == 0;
      }
    }
    else {
      bVar5 = iVar7 + iVar1 == 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.Payload.SharedReferenceCount.ReferenceController);
    return bVar5;
  }
  Verse::FNativeString::FCopyOnWrite::SetIfNull(param_1);
  if (*(longlong *)param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  puVar2 = *(undefined8 **)param_1;
  Verse::FNativeString::FCopyOnWrite::SetIfNull(param_2);
  if (*(longlong *)param_2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)(puVar2 + 1);
  iVar1 = *(int *)(*(undefined8 **)param_2 + 1);
  if (iVar7 != iVar1) {
    return iVar7 + iVar1 == 1;
  }
  if (1 < iVar7) {
    iVar7 = strcmp((char *)*puVar2,(char *)**(undefined8 **)param_2);
    return iVar7 == 0;
  }
  return true;
}

// Identical @ 142273470

bool __thiscall
TProperty_WithEqualityAndSerializer<FUtf8String,FProperty>::Identical
          (TProperty_WithEqualityAndSerializer<FUtf8String,FProperty> *this,void *param_1,
          void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (param_2 == (void *)0x0) {
    if (iVar1 == 0) {
      return true;
    }
  }
  else {
    if (iVar1 == *(int *)((longlong)param_2 + 8)) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(*(uchar **)param_1,*(uchar **)param_2);
      return iVar1 == 0;
    }
    iVar1 = iVar1 + *(int *)((longlong)param_2 + 8);
  }
  return iVar1 == 1;
}

// SerializeItem @ 142285420

void __thiscall
TProperty_WithEqualityAndSerializer<Verse::FNativeString,FProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<Verse::FNativeString,FProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FUtf8String *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  pFVar2 = Verse::FNativeString::FCopyOnWrite::Write(param_2);
  ::operator<<(pFVar1,pFVar2);
  return;
}

// SerializeItem @ 142285470

void __thiscall
TProperty_WithEqualityAndSerializer<FUtf8String,FProperty>::SerializeItem
          (TProperty_WithEqualityAndSerializer<FUtf8String,FProperty> *this,
          FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ::operator<<(pFVar1,param_2);
  return;
}


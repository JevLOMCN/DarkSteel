// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 319

// ClearIntrusiveOptionalValue @ 141f722c0

void __thiscall
TProperty<unsigned_char,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f722e0

void __thiscall
TProperty<int,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 4) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72300

void __thiscall
TProperty<unsigned_int,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 4) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72320

void __thiscall
TProperty<float,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 4) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72340

void __thiscall
TProperty<double,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72360

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::ClearIntrusiveOptionalValue
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72380

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::ClearIntrusiveOptionalValue
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x28) != '\0') {
    if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    }
    *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f723b0

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  TOptional<TScriptSparseSet<FDefaultSetAllocator>_>::Reset(param_1);
  return;
}

// ClearIntrusiveOptionalValue @ 141f723c0

void __thiscall
TProperty<FAnsiString,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72400

void __thiscall
TProperty<FName,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FName,FProperty> *this,void *param_1)

{
  if (*(int *)param_1 != -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72420

void __thiscall
TProperty<FScriptArray,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f72460

void __thiscall
TProperty<FString,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FString,FProperty> *this,void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f724a0

void __thiscall
TProperty<FText,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FText,FProperty> *this,void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)param_1 + 0x10))();
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f724d0

void __thiscall
TProperty<__int64,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 141f724f0

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearValueInternal @ 141f72920

void __thiscall
TProperty<unsigned_char,FNumericProperty>::ClearValueInternal
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72930

void __thiscall
TProperty<int,FNumericProperty>::ClearValueInternal
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72940

void __thiscall
TProperty<unsigned_int,FNumericProperty>::ClearValueInternal
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72950

void __thiscall
TProperty<float,FNumericProperty>::ClearValueInternal
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72960

void __thiscall
TProperty<double,FNumericProperty>::ClearValueInternal
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72970

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::ClearValueInternal
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72980

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::ClearValueInternal
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  FSoftObjectPath local_30;
  
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  *(undefined8 *)param_1 = 0;
  FSoftObjectPath::operator=((FSoftObjectPath *)((longlong)param_1 + 8),&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearValueInternal @ 141f729f0

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::ClearValueInternal
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptSparseSet.h"
                     ,400,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearValueInternal @ 141f72a30

void __thiscall
TProperty<FAnsiString,FProperty>::ClearValueInternal
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  undefined1 local_18 [24];
  
  if (param_1 != local_18) {
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      *(int *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,*(int *)((longlong)param_1 + 0xc),param_1,0,(int *)((longlong)param_1 + 0xc));
  }
  return;
}

// ClearValueInternal @ 141f72a80

void __thiscall
TProperty<FName,FProperty>::ClearValueInternal(TProperty<FName,FProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72aa0

void __thiscall
TProperty<FScriptArray,FProperty>::ClearValueInternal
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                     ,0x169,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearValueInternal @ 141f72ae0

void __thiscall
TProperty<FString,FProperty>::ClearValueInternal(TProperty<FString,FProperty> *this,void *param_1)

{
  undefined1 local_18 [24];
  
  if (param_1 != local_18) {
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      *(int *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,*(int *)((longlong)param_1 + 0xc),param_1,0,(int *)((longlong)param_1 + 0xc));
  }
  return;
}

// ClearValueInternal @ 141f72b30

void __thiscall
TProperty<FText,FProperty>::ClearValueInternal(TProperty<FText,FProperty> *this,void *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  FText::FText(&local_18);
  pIVar1 = *(ITextData **)param_1;
  if (pIVar1 != local_18.TextData.Reference) {
    *(ITextData **)param_1 = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)((longlong)param_1 + 8) = local_18.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// ClearValueInternal @ 141f72bb0

void __thiscall
TProperty<__int64,FNumericProperty>::ClearValueInternal
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 141f72bc0

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::ClearValueInternal
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// CopyValuesInternal @ 141f763d0

void __thiscall
TProperty<unsigned_char,FNumericProperty>::CopyValuesInternal
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  
  iVar3 = 0;
  _Size = (size_t)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 0xf < (uint)param_3)) &&
     (((void *)((_Size - 1) + (longlong)param_2) < param_1 ||
      ((void *)((longlong)param_1 + (_Size - 1)) < param_2)))) {
    memcpy(param_1,param_2,_Size);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < (longlong)_Size) {
    puVar1 = (undefined1 *)(lVar2 + (longlong)param_1);
    lVar2 = _Size - lVar2;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76470

void __thiscall
TProperty<int,FNumericProperty>::CopyValuesInternal
          (TProperty<int,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 3 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 4 + -4) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 4 + -4) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 4);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar2 * 4);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76520

void __thiscall
TProperty<unsigned_int,FNumericProperty>::CopyValuesInternal
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 3 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 4 + -4) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 4 + -4) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 4);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar2 * 4);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f765d0

void __thiscall
TProperty<float,FNumericProperty>::CopyValuesInternal
          (TProperty<float,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  lVar3 = (longlong)param_3;
  iVar5 = iVar4;
  if (((0 < param_3) && (iVar5 = 0, 3 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar3 * 4 + -4) < param_1 ||
      ((void *)((longlong)param_1 + lVar3 * 4 + -4) < param_2)))) {
    memcpy(param_1,param_2,lVar3 * 4);
    do {
      iVar4 = iVar4 + 1;
      iVar5 = iVar4;
    } while (iVar4 < param_3);
  }
  lVar7 = (longlong)iVar5;
  if (lVar7 < lVar3) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    if (3 < lVar3 - lVar7) {
      puVar1 = (undefined4 *)((longlong)param_1 + lVar7 * 4 + 4);
      lVar6 = ((lVar3 - lVar7) - 4U >> 2) + 1;
      lVar7 = lVar7 + lVar6 * 4;
      do {
        puVar1[-1] = *(undefined4 *)(lVar2 + -4 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(lVar2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(lVar2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(lVar2 + 8 + (longlong)puVar1);
        puVar1 = puVar1 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (lVar3 <= lVar7) {
        return;
      }
    }
    puVar1 = (undefined4 *)((longlong)param_1 + lVar7 * 4);
    lVar3 = lVar3 - lVar7;
    do {
      *puVar1 = *(undefined4 *)(lVar2 + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f766d0

void __thiscall
TProperty<double,FNumericProperty>::CopyValuesInternal
          (TProperty<double,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  lVar3 = (longlong)param_3;
  iVar5 = iVar4;
  if (((0 < param_3) && (iVar5 = 0, 1 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar3 * 8 + -8) < param_1 ||
      ((void *)((longlong)param_1 + lVar3 * 8 + -8) < param_2)))) {
    memcpy(param_1,param_2,lVar3 * 8);
    do {
      iVar4 = iVar4 + 1;
      iVar5 = iVar4;
    } while (iVar4 < param_3);
  }
  lVar7 = (longlong)iVar5;
  if (lVar7 < lVar3) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    if (3 < lVar3 - lVar7) {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar7 * 8 + 8);
      lVar6 = ((lVar3 - lVar7) - 4U >> 2) + 1;
      lVar7 = lVar7 + lVar6 * 4;
      do {
        puVar1[-1] = *(undefined8 *)(lVar2 + -8 + (longlong)puVar1);
        *puVar1 = *(undefined8 *)(lVar2 + (longlong)puVar1);
        puVar1[1] = *(undefined8 *)(lVar2 + 8 + (longlong)puVar1);
        puVar1[2] = *(undefined8 *)(lVar2 + 0x10 + (longlong)puVar1);
        puVar1 = puVar1 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (lVar3 <= lVar7) {
        return;
      }
    }
    puVar1 = (undefined8 *)((longlong)param_1 + lVar7 * 8);
    lVar3 = lVar3 - lVar7;
    do {
      *puVar1 = *(undefined8 *)(lVar2 + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f767e0

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::CopyValuesInternal
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1,void *param_2,
          int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_3;
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_2);
      }
      *(undefined8 *)((longlong)param_2 + lVar1) = *(undefined8 *)param_2;
      param_2 = (void *)((longlong)param_2 + 8);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76840

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::CopyValuesInternal
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1,void *param_2,
          int param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    uVar2 = (ulonglong)(uint)param_3;
    pvVar1 = param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar3);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)pvVar1 + 8),
                 (FSoftObjectPath *)(lVar3 + (longlong)pvVar1 + 8));
      pvVar1 = (void *)((longlong)pvVar1 + 0x28);
      param_1 = (void *)((longlong)param_1 + 0x28);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f768b0

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::CopyValuesInternal
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1,
          void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (0 < param_3) {
    uVar3 = (ulonglong)(uint)param_3;
    do {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptSparseSet.h"
                         ,400,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76900

void __thiscall
TProperty<FAnsiString,FProperty>::CopyValuesInternal
          (TProperty<FAnsiString,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  int *piVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    lVar5 = (longlong)param_3;
    do {
      pFVar3 = (ForAnyElementType *)
               ((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar4);
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      if (pFVar1 != pFVar3) {
        iVar2 = *(int *)((longlong)piVar4 + (longlong)param_2 + (-4 - (longlong)param_1));
        _Src = pFVar3->Data;
        piVar4[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar4 == 0)) {
          *piVar4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar4,pFVar1,iVar2,piVar4);
          if (iVar2 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar2);
          }
        }
      }
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f769d0

void __thiscall
TProperty<FName,FProperty>::CopyValuesInternal
          (TProperty<FName,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 1 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 8 + -8) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 8 + -8) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 8);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 * 8);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76a80

void __thiscall
TProperty<FScriptArray,FProperty>::CopyValuesInternal
          (TProperty<FScriptArray,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (0 < param_3) {
    uVar3 = (ulonglong)(uint)param_3;
    do {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                         ,0x169,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76ad0

void __thiscall
TProperty<FString,FProperty>::CopyValuesInternal
          (TProperty<FString,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  int *piVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    lVar5 = (longlong)param_3;
    do {
      pFVar3 = (ForAnyElementType *)
               ((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar4);
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      if (pFVar1 != pFVar3) {
        iVar2 = *(int *)((longlong)piVar4 + (longlong)param_2 + (-4 - (longlong)param_1));
        _Src = pFVar3->Data;
        piVar4[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar4 == 0)) {
          *piVar4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*piVar4,pFVar1,iVar2,piVar4);
          if (iVar2 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76ba0

void __thiscall
TProperty<FText,FProperty>::CopyValuesInternal
          (TProperty<FText,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 local_res20 [8];
  
  if (0 < param_3) {
    lVar4 = (longlong)param_3;
    puVar3 = (undefined4 *)((longlong)param_1 + 8);
    do {
      plVar1 = *(longlong **)(((longlong)param_2 - (longlong)param_1) + -8 + (longlong)puVar3);
      plVar2 = *(longlong **)(puVar3 + -2);
      if (plVar2 != plVar1) {
        *(longlong **)(puVar3 + -2) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res20);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76c30

void __thiscall
TProperty<__int64,FNumericProperty>::CopyValuesInternal
          (TProperty<__int64,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 1 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 8 + -8) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 8 + -8) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 8);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 * 8);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 141f76ce0

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::CopyValuesInternal
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 1 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 8 + -8) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 8 + -8) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 8);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 * 8);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// DestroyValueInternal @ 141f79140

void __thiscall
TProperty<unsigned_char,FNumericProperty>::DestroyValueInternal
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79150

void __thiscall
TProperty<int,FNumericProperty>::DestroyValueInternal
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79160

void __thiscall
TProperty<unsigned_int,FNumericProperty>::DestroyValueInternal
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79170

void __thiscall
TProperty<float,FNumericProperty>::DestroyValueInternal
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79180

void __thiscall
TProperty<double,FNumericProperty>::DestroyValueInternal
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79190

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::DestroyValueInternal
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f791a0

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::DestroyValueInternal
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + 0x18 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f79210

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::DestroyValueInternal
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar4 = 0;
    do {
      lVar3 = *(int *)&this->field_0x34 * lVar4;
      pvVar1 = *(void **)(lVar3 + 0x40 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      pvVar1 = *(void **)(lVar3 + 0x20 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      if (*(void **)(lVar3 + (longlong)param_1) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar3 + (longlong)param_1));
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f792a0

void __thiscall
TProperty<FAnsiString,FProperty>::DestroyValueInternal
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f79310

void __thiscall
TProperty<FName,FProperty>::DestroyValueInternal(TProperty<FName,FProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79320

void __thiscall
TProperty<FScriptArray,FProperty>::DestroyValueInternal
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f79390

void __thiscall
TProperty<FString,FProperty>::DestroyValueInternal(TProperty<FString,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f79400

void __thiscall
TProperty<FText,FProperty>::DestroyValueInternal(TProperty<FText,FProperty> *this,void *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 141f79470

void __thiscall
TProperty<__int64,FNumericProperty>::DestroyValueInternal
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 141f79480

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::DestroyValueInternal
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  return;
}

// GetCPPType @ 141f80f30

FString * __thiscall
TProperty<unsigned_char,FNumericProperty>::GetCPPType
          (TProperty<unsigned_char,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"uint8");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f80f60

FString * __thiscall
TProperty<int,FNumericProperty>::GetCPPType
          (TProperty<int,FNumericProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"int32");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f80f90

FString * __thiscall
TProperty<unsigned_int,FNumericProperty>::GetCPPType
          (TProperty<unsigned_int,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"uint32");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f80fc0

FString * __thiscall
TProperty<float,FNumericProperty>::GetCPPType
          (TProperty<float,FNumericProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"float");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f80ff0

FString * __thiscall
TProperty<double,FNumericProperty>::GetCPPType
          (TProperty<double,FNumericProperty> *this,FString *__return_storage_ptr__,FString *param_1
          ,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"double");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81020

FString * __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::GetCPPType
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81070

FString * __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::GetCPPType
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f810c0

FString * __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::GetCPPType
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,
          FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81110

FString * __thiscall
TProperty<FAnsiString,FProperty>::GetCPPType
          (TProperty<FAnsiString,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"FAnsiString");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81140

FString * __thiscall
TProperty<FName,FProperty>::GetCPPType
          (TProperty<FName,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"FName");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81170

FString * __thiscall
TProperty<FScriptArray,FProperty>::GetCPPType
          (TProperty<FScriptArray,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f811c0

FString * __thiscall
TProperty<FString,FProperty>::GetCPPType
          (TProperty<FString,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"FString");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f811f0

FString * __thiscall
TProperty<FText,FProperty>::GetCPPType
          (TProperty<FText,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"FText");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81220

FString * __thiscall
TProperty<__int64,FNumericProperty>::GetCPPType
          (TProperty<__int64,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"int64");
  return __return_storage_ptr__;
}

// GetCPPType @ 141f81250

FString * __thiscall
TProperty<unsigned___int64,FNumericProperty>::GetCPPType
          (TProperty<unsigned___int64,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"uint64");
  return __return_storage_ptr__;
}

// GetMinAlignment @ 141f82010

int __thiscall
TProperty<unsigned_char,FNumericProperty>::GetMinAlignment
          (TProperty<unsigned_char,FNumericProperty> *this)

{
  return 1;
}

// GetMinAlignment @ 141f82020

int __thiscall
TProperty<int,FNumericProperty>::GetMinAlignment(TProperty<int,FNumericProperty> *this)

{
  return 4;
}

// GetMinAlignment @ 141f82030

int __thiscall
TProperty<unsigned_int,FNumericProperty>::GetMinAlignment
          (TProperty<unsigned_int,FNumericProperty> *this)

{
  return 4;
}

// GetMinAlignment @ 141f82040

int __thiscall
TProperty<float,FNumericProperty>::GetMinAlignment(TProperty<float,FNumericProperty> *this)

{
  return 4;
}

// GetMinAlignment @ 141f82050

int __thiscall
TProperty<double,FNumericProperty>::GetMinAlignment(TProperty<double,FNumericProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f82060

int __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::GetMinAlignment
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this)

{
  return 8;
}

// GetMinAlignment @ 141f82070

int __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::GetMinAlignment
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this)

{
  return 8;
}

// GetMinAlignment @ 141f82080

int __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::GetMinAlignment
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f82090

int __thiscall
TProperty<FAnsiString,FProperty>::GetMinAlignment(TProperty<FAnsiString,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f820a0

int __thiscall TProperty<FName,FProperty>::GetMinAlignment(TProperty<FName,FProperty> *this)

{
  return 4;
}

// GetMinAlignment @ 141f820b0

int __thiscall
TProperty<FScriptArray,FProperty>::GetMinAlignment(TProperty<FScriptArray,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f820c0

int __thiscall TProperty<FString,FProperty>::GetMinAlignment(TProperty<FString,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f820d0

int __thiscall TProperty<FText,FProperty>::GetMinAlignment(TProperty<FText,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f820e0

int __thiscall
TProperty<__int64,FNumericProperty>::GetMinAlignment(TProperty<__int64,FNumericProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 141f820f0

int __thiscall
TProperty<unsigned___int64,FNumericProperty>::GetMinAlignment
          (TProperty<unsigned___int64,FNumericProperty> *this)

{
  return 8;
}

// HasIntrusiveUnsetOptionalState @ 141f8b4e0

bool __thiscall
TProperty<unsigned_char,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<unsigned_char,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b4f0

bool __thiscall
TProperty<int,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<int,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b500

bool __thiscall
TProperty<unsigned_int,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<unsigned_int,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b510

bool __thiscall
TProperty<float,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<float,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b520

bool __thiscall
TProperty<double,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<double,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b530

bool __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::HasIntrusiveUnsetOptionalState
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b540

bool __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::HasIntrusiveUnsetOptionalState
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b550

bool __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b560

bool __thiscall
TProperty<FAnsiString,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FAnsiString,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b570

bool __thiscall
TProperty<FName,FProperty>::HasIntrusiveUnsetOptionalState(TProperty<FName,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b580

bool __thiscall
TProperty<FScriptArray,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FScriptArray,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b590

bool __thiscall
TProperty<FString,FProperty>::HasIntrusiveUnsetOptionalState(TProperty<FString,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5a0

bool __thiscall
TProperty<FText,FProperty>::HasIntrusiveUnsetOptionalState(TProperty<FText,FProperty> *this)

{
  return true;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5b0

bool __thiscall
TProperty<__int64,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<__int64,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5c0

bool __thiscall
TProperty<unsigned___int64,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<unsigned___int64,FNumericProperty> *this)

{
  return false;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8dee0

void __thiscall
TProperty<unsigned_char,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8def0

void __thiscall
TProperty<int,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df00

void __thiscall
TProperty<unsigned_int,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df10

void __thiscall
TProperty<float,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df20

void __thiscall
TProperty<double,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df30

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df40

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df50

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8df80

void __thiscall
TProperty<FAnsiString,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8dfa0

void __thiscall
TProperty<FName,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FName,FProperty> *this,void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8dfc0

void __thiscall
TProperty<FScriptArray,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8dfe0

void __thiscall
TProperty<FString,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FString,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8e000

void __thiscall
TProperty<FText,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FText,FProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8e010

void __thiscall
TProperty<__int64,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8e020

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeValueInternal @ 141f8e8e0

void __thiscall
TProperty<unsigned_char,FNumericProperty>::InitializeValueInternal
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8e910

void __thiscall
TProperty<int,FNumericProperty>::InitializeValueInternal
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8e940

void __thiscall
TProperty<unsigned_int,FNumericProperty>::InitializeValueInternal
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8e970

void __thiscall
TProperty<float,FNumericProperty>::InitializeValueInternal
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8e9a0

void __thiscall
TProperty<double,FNumericProperty>::InitializeValueInternal
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined8 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8e9d0

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::InitializeValueInternal
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar4 = uVar1;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar2 = (longlong)*(int *)&this->field_0x34 * uVar1;
      uVar1 = uVar1 + 1;
      *(undefined8 *)(lVar2 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8ea10

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::InitializeValueInternal
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  longlong lVar1;
  FUtf8String *this_00;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar4;
      this_00 = (FUtf8String *)((longlong)param_1 + lVar1 + 0x18);
      *(undefined8 *)(lVar1 + 0x20 + (longlong)param_1) = 0;
      (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      FUtf8String::Reset(this_00,0);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 1;
    } while ((int)uVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8eab0

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::InitializeValueInternal
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x20 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x28 + (longlong)param_1) = 0;
      *(undefined4 *)(lVar1 + 0x30 + (longlong)param_1) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x34 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x40 + (longlong)param_1) = 0;
      *(undefined4 *)(lVar1 + 0x48 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8eb10

void __thiscall
TProperty<FAnsiString,FProperty>::InitializeValueInternal
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8eb50

void __thiscall
TProperty<FName,FProperty>::InitializeValueInternal(TProperty<FName,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8eb80

void __thiscall
TProperty<FScriptArray,FProperty>::InitializeValueInternal
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8ebc0

void __thiscall
TProperty<FString,FProperty>::InitializeValueInternal
          (TProperty<FString,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8ec00

void __thiscall
TProperty<FText,FProperty>::InitializeValueInternal(TProperty<FText,FProperty> *this,void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      FText::FText((FText *)((longlong)iVar1 * (longlong)*(int *)&this->field_0x34 +
                            (longlong)param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8ec50

void __thiscall
TProperty<__int64,FNumericProperty>::InitializeValueInternal
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined8 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 141f8ec80

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::InitializeValueInternal
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined8 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 141f90160

bool __thiscall
TProperty<unsigned_char,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<unsigned_char,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 1);
}

// IsIntrusiveOptionalValueSet @ 141f90170

bool __thiscall
TProperty<int,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<int,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 4);
}

// IsIntrusiveOptionalValueSet @ 141f90180

bool __thiscall
TProperty<unsigned_int,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<unsigned_int,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 4);
}

// IsIntrusiveOptionalValueSet @ 141f90190

bool __thiscall
TProperty<float,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<float,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 4);
}

// IsIntrusiveOptionalValueSet @ 141f901a0

bool __thiscall
TProperty<double,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<double,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 8);
}

// IsIntrusiveOptionalValueSet @ 141f901b0

bool __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::IsIntrusiveOptionalValueSet
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 8);
}

// IsIntrusiveOptionalValueSet @ 141f901c0

bool __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::IsIntrusiveOptionalValueSet
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x28);
}

// IsIntrusiveOptionalValueSet @ 141f901d0

bool __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// IsIntrusiveOptionalValueSet @ 141f901e0

bool __thiscall
TProperty<FAnsiString,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FAnsiString,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// IsIntrusiveOptionalValueSet @ 141f901f0

bool __thiscall
TProperty<FName,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FName,FProperty> *this,void *param_1)

{
  return *(int *)param_1 != -1;
}

// IsIntrusiveOptionalValueSet @ 141f90200

bool __thiscall
TProperty<FScriptArray,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FScriptArray,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// IsIntrusiveOptionalValueSet @ 141f90210

bool __thiscall
TProperty<FString,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FString,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// IsIntrusiveOptionalValueSet @ 141f90220

bool __thiscall
TProperty<FText,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FText,FProperty> *this,void *param_1)

{
  return *(longlong *)param_1 != 0;
}

// IsIntrusiveOptionalValueSet @ 141f90230

bool __thiscall
TProperty<__int64,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<__int64,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 8);
}

// IsIntrusiveOptionalValueSet @ 141f90240

bool __thiscall
TProperty<unsigned___int64,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<unsigned___int64,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 8);
}

// LinkInternal @ 141f91af0

void __thiscall
TProperty<unsigned_char,FNumericProperty>::LinkInternal
          (TProperty<unsigned_char,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,1);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91b20

void __thiscall
TProperty<int,FNumericProperty>::LinkInternal
          (TProperty<int,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,4);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91b50

void __thiscall
TProperty<unsigned_int,FNumericProperty>::LinkInternal
          (TProperty<unsigned_int,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,4);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91b80

void __thiscall
TProperty<float,FNumericProperty>::LinkInternal
          (TProperty<float,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,4);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91bb0

void __thiscall
TProperty<double,FNumericProperty>::LinkInternal
          (TProperty<double,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91be0

void __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::LinkInternal
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001000000200;
  return;
}

// LinkInternal @ 141f91c10

void __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::LinkInternal
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x28);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return;
}

// LinkInternal @ 141f91c40

void __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::LinkInternal
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x50);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x200;
  return;
}

// LinkInternal @ 141f91c70

void __thiscall
TProperty<FAnsiString,FProperty>::LinkInternal
          (TProperty<FAnsiString,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000200;
  return;
}

// LinkInternal @ 141f91ca0

void __thiscall
TProperty<FName,FProperty>::LinkInternal(TProperty<FName,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91cd0

void __thiscall
TProperty<FScriptArray,FProperty>::LinkInternal
          (TProperty<FScriptArray,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x200;
  return;
}

// LinkInternal @ 141f91d00

void __thiscall
TProperty<FString,FProperty>::LinkInternal(TProperty<FString,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000200;
  return;
}

// LinkInternal @ 141f91d30

void __thiscall
TProperty<FText,FProperty>::LinkInternal(TProperty<FText,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  return;
}

// LinkInternal @ 141f91d40

void __thiscall
TProperty<__int64,FNumericProperty>::LinkInternal
          (TProperty<__int64,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 141f91d70

void __thiscall
TProperty<unsigned___int64,FNumericProperty>::LinkInternal
          (TProperty<unsigned___int64,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// ClearIntrusiveOptionalValue @ 141fc6c70

void __thiscall
TProperty<FFieldPath,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x20) != '\0') {
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    }
    *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  }
  return;
}

// ClearValueInternal @ 141fc6e90

void __thiscall
TProperty<FFieldPath,FProperty>::ClearValueInternal
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  ForAnyElementType local_18 [3];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  if ((ForAnyElementType *)((longlong)param_1 + 0x10) != local_18) {
    *(undefined4 *)((longlong)param_1 + 0x18) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) == 0) {
      *(int *)((longlong)param_1 + 0x1c) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,*(int *)((longlong)param_1 + 0x1c),
               (ForAnyElementType *)((longlong)param_1 + 0x10),0,(int *)((longlong)param_1 + 0x1c));
  }
  return;
}

// CopyValuesInternal @ 141fc8e60

void __thiscall
TProperty<FFieldPath,FProperty>::CopyValuesInternal
          (TProperty<FFieldPath,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    lVar3 = (longlong)param_2 - (longlong)param_1;
    this_00 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10);
    uVar2 = (ulonglong)(uint)param_3;
    do {
      puVar1[-1] = *(undefined8 *)(lVar3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(lVar3 + (longlong)puVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this_00,(TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar3 + (longlong)this_00));
      this_00 = this_00 + 2;
      puVar1 = puVar1 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// DestroyValueInternal @ 141fc9be0

void __thiscall
TProperty<FFieldPath,FProperty>::DestroyValueInternal
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + 0x10 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// GetCPPType @ 141fcddf0

FString * __thiscall
TProperty<FFieldPath,FProperty>::GetCPPType
          (TProperty<FFieldPath,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetMinAlignment @ 141fd16f0

int __thiscall
TProperty<FFieldPath,FProperty>::GetMinAlignment(TProperty<FFieldPath,FProperty> *this)

{
  return 8;
}

// HasIntrusiveUnsetOptionalState @ 141fd3e20

bool __thiscall
TProperty<FFieldPath,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FFieldPath,FProperty> *this)

{
  return false;
}

// InitializeIntrusiveUnsetOptionalValue @ 141fd5330

void __thiscall
TProperty<FFieldPath,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// InitializeValueInternal @ 141fd5390

void __thiscall
TProperty<FFieldPath,FProperty>::InitializeValueInternal
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x18 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 141fd5b70

bool __thiscall
TProperty<FFieldPath,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FFieldPath,FProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x20);
}

// LinkInternal @ 141fd6620

void __thiscall
TProperty<FFieldPath,FProperty>::LinkInternal
          (TProperty<FFieldPath,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x20);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return;
}

// ClearIntrusiveOptionalValue @ 1421698a0

void __thiscall
TProperty<signed_char,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1421698c0

void __thiscall
TProperty<short,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 2) != '\0') {
    *(undefined1 *)((longlong)param_1 + 2) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1421698e0

void __thiscall
TProperty<unsigned_short,FNumericProperty>::ClearIntrusiveOptionalValue
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 2) != '\0') {
    *(undefined1 *)((longlong)param_1 + 2) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 142169900

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::ClearIntrusiveOptionalValue
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 142169920

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::ClearIntrusiveOptionalValue
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 142169940

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
ClearIntrusiveOptionalValue
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 8));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
    *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 142169980

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
    *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1421699b0

void __thiscall
TProperty<FScriptInterface,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1421699d0

void __thiscall
TProperty<FScriptMap,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  TOptional<FScriptMap>::Reset(param_1);
  return;
}

// ClearValueInternal @ 142169c90

void __thiscall
TProperty<signed_char,FNumericProperty>::ClearValueInternal
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 142169ca0

void __thiscall
TProperty<short,FNumericProperty>::ClearValueInternal
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 142169cb0

void __thiscall
TProperty<unsigned_short,FNumericProperty>::ClearValueInternal
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 142169cc0

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::ClearValueInternal
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ClearValueInternal @ 142169d00

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::ClearValueInternal
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ClearValueInternal @ 142169d10

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
ClearValueInternal(TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
                   *this,void *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList.ArrayNum = 0;
  local_28.InvocationList.ArrayMax = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=(param_1,&local_28);
  if (local_28.InvocationList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return;
}

// ClearValueInternal @ 142169d60

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::ClearValueInternal
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  undefined8 local_30;
  undefined8 local_28;
  FDestructionSentinel local_20;
  
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30 = 0;
  local_28 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_38,(FReadAccessScope *)&local_20);
  uVar2 = local_28;
  uVar1 = local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_1,(FWriteAccessScope *)&local_20);
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  return;
}

// ClearValueInternal @ 142169df0

void __thiscall
TProperty<FScriptInterface,FProperty>::ClearValueInternal
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ClearValueInternal @ 142169e00

/* WARNING: Removing unreachable block (ram,0x000142169e8b) */
/* WARNING: Removing unreachable block (ram,0x000142169e7e) */
/* WARNING: Removing unreachable block (ram,0x000142169e98) */

void __thiscall
TProperty<FScriptMap,FProperty>::ClearValueInternal
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h"
                     ,0x19a,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CopyValuesInternal @ 142174080

void __thiscall
TProperty<signed_char,FNumericProperty>::CopyValuesInternal
          (TProperty<signed_char,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  
  iVar3 = 0;
  _Size = (size_t)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 0xf < (uint)param_3)) &&
     (((void *)((_Size - 1) + (longlong)param_2) < param_1 ||
      ((void *)((longlong)param_1 + (_Size - 1)) < param_2)))) {
    memcpy(param_1,param_2,_Size);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < (longlong)_Size) {
    puVar1 = (undefined1 *)(lVar2 + (longlong)param_1);
    lVar2 = _Size - lVar2;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// CopyValuesInternal @ 142174120

void __thiscall
TProperty<short,FNumericProperty>::CopyValuesInternal
          (TProperty<short,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 7 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 2 + -2) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 2 + -2) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 2);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined2 *)((longlong)param_1 + lVar2 * 2);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined2 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 1421741c0

void __thiscall
TProperty<unsigned_short,FNumericProperty>::CopyValuesInternal
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 7 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 2 + -2) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 2 + -2) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 2);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined2 *)((longlong)param_1 + lVar2 * 2);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined2 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 142174260

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::CopyValuesInternal
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar5 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar5);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      puVar5[2] = uVar2;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  return;
}

// CopyValuesInternal @ 1421742a0

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::CopyValuesInternal
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  
  iVar3 = 0;
  _Size = (size_t)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 0xf < (uint)param_3)) &&
     (((void *)((_Size - 1) + (longlong)param_2) < param_1 ||
      ((void *)((longlong)param_1 + (_Size - 1)) < param_2)))) {
    memcpy(param_1,param_2,_Size);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < (longlong)_Size) {
    puVar1 = (undefined1 *)(lVar2 + (longlong)param_1);
    lVar2 = _Size - lVar2;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// CopyValuesInternal @ 142174340

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
CopyValuesInternal(TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
                   *this,void *param_1,void *param_2,int param_3)

{
  int iVar1;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar2;
  ForAnyElementType *pFVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ForAnyElementType local_48;
  undefined8 local_40;
  FDestructionSentinel local_38;
  
  if (0 < param_3) {
    puVar4 = (undefined4 *)((longlong)param_1 + 0x10);
    lVar6 = (longlong)param_2 - (longlong)param_1;
    lVar5 = (longlong)param_3;
    do {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 (lVar6 + -0x10 + (longlong)puVar4),(FReadAccessScope *)&local_38);
      pFVar3 = (ForAnyElementType *)(lVar6 + -8 + (longlong)puVar4);
      if (&local_48 != pFVar3) {
        iVar1 = *(int *)(lVar6 + (longlong)puVar4);
        pTVar2 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)pFVar3->Data;
        local_40 = CONCAT44(local_40._4_4_,iVar1);
        if ((iVar1 == 0) && (local_40._4_4_ == 0)) {
          local_40 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar1,local_40._4_4_,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
          ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
                    (local_48.Data,pTVar2,iVar1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar4 + -4),
                 (FWriteAccessScope *)&local_38);
      pFVar3 = (ForAnyElementType *)(puVar4 + -2);
      if (pFVar3 != &local_48) {
        if (pFVar3->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3->Data);
        }
        pFVar3->Data = local_48.Data;
        *puVar4 = (undefined4)local_40;
        puVar4[1] = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      puVar4 = puVar4 + 6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// CopyValuesInternal @ 1421744b0

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::CopyValuesInternal
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1,
          void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  FDestructionSentinel local_28;
  
  if (0 < param_3) {
    lVar5 = (longlong)param_1 - (longlong)param_2;
    puVar4 = (undefined8 *)((longlong)param_2 + 0x10);
    lVar3 = (longlong)param_3;
    do {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar4 + -2),
                 (FReadAccessScope *)&local_28);
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 (lVar5 + -0x10 + (longlong)puVar4),(FWriteAccessScope *)&local_28);
      *(undefined8 *)((longlong)puVar4 + lVar5 + -8) = uVar1;
      *(undefined8 *)((longlong)puVar4 + lVar5) = uVar2;
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 142174560

void __thiscall
TProperty<FScriptInterface,FProperty>::CopyValuesInternal
          (TProperty<FScriptInterface,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_3;
    lVar2 = (longlong)param_1 - (longlong)param_2;
    puVar1 = param_2;
    do {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)*puVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(lVar2 + (longlong)puVar1) = *puVar1;
      *(undefined8 *)((longlong)puVar1 + lVar2 + 8) =
           *(undefined8 *)((longlong)puVar1 + (longlong)param_2 + lVar2 + (8 - (longlong)param_1));
      lVar3 = lVar3 + -1;
      puVar1 = puVar1 + 2;
    } while (lVar3 != 0);
  }
  return;
}

// CopyValuesInternal @ 1421745e0

void __thiscall
TProperty<FScriptMap,FProperty>::CopyValuesInternal
          (TProperty<FScriptMap,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (0 < param_3) {
    uVar3 = (ulonglong)(uint)param_3;
    do {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h"
                         ,0x19a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// DestroyValueInternal @ 1421753e0

void __thiscall
TProperty<signed_char,FNumericProperty>::DestroyValueInternal
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 1421753f0

void __thiscall
TProperty<short,FNumericProperty>::DestroyValueInternal
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 142175400

void __thiscall
TProperty<unsigned_short,FNumericProperty>::DestroyValueInternal
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 142175410

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::DestroyValueInternal
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 142175420

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::DestroyValueInternal
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 142175430

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
DestroyValueInternal
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,void *param_1)

{
  FMRSWRecursiveAccessDetector FVar1;
  int iVar2;
  FMRSWRecursiveAccessDetector *this_00;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      this_00 = (FMRSWRecursiveAccessDetector *)
                (*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      FVar1.State = this_00[1].State;
      if (FVar1.State != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1.State);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 1421754b0

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::DestroyValueInternal
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 ((longlong)iVar1 * (longlong)*(int *)&this->field_0x34 + (longlong)param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 142175500

void __thiscall
TProperty<FScriptInterface,FProperty>::DestroyValueInternal
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  return;
}

// DestroyValueInternal @ 142175510

void __thiscall
TProperty<FScriptMap,FProperty>::DestroyValueInternal
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar4 = 0;
    do {
      lVar3 = *(int *)&this->field_0x34 * lVar4;
      pvVar1 = *(void **)(lVar3 + 0x40 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      pvVar1 = *(void **)(lVar3 + 0x20 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      if (*(void **)(lVar3 + (longlong)param_1) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar3 + (longlong)param_1));
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// GetCPPType @ 142179d50

FString * __thiscall
TProperty<signed_char,FNumericProperty>::GetCPPType
          (TProperty<signed_char,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"int8");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179d80

FString * __thiscall
TProperty<short,FNumericProperty>::GetCPPType
          (TProperty<short,FNumericProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"int16");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179db0

FString * __thiscall
TProperty<unsigned_short,FNumericProperty>::GetCPPType
          (TProperty<unsigned_short,FNumericProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"uint16");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179de0

FString * __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::GetCPPType
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179e30

FString * __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::GetCPPType
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,
          FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179e80

FString * __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
GetCPPType(TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179ed0

FString * __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::GetCPPType
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,
          FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179f20

FString * __thiscall
TProperty<FScriptInterface,FProperty>::GetCPPType
          (TProperty<FScriptInterface,FProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPPType @ 142179f70

FString * __thiscall
TProperty<FScriptMap,FProperty>::GetCPPType
          (TProperty<FScriptMap,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetMinAlignment @ 14217c410

int __thiscall
TProperty<signed_char,FNumericProperty>::GetMinAlignment
          (TProperty<signed_char,FNumericProperty> *this)

{
  return 1;
}

// GetMinAlignment @ 14217c420

int __thiscall
TProperty<short,FNumericProperty>::GetMinAlignment(TProperty<short,FNumericProperty> *this)

{
  return 2;
}

// GetMinAlignment @ 14217c430

int __thiscall
TProperty<unsigned_short,FNumericProperty>::GetMinAlignment
          (TProperty<unsigned_short,FNumericProperty> *this)

{
  return 2;
}

// GetMinAlignment @ 14217c440

int __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::GetMinAlignment
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this)

{
  return 4;
}

// GetMinAlignment @ 14217c450

int __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::GetMinAlignment
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this)

{
  return 1;
}

// GetMinAlignment @ 14217c460

int __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
GetMinAlignment(TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
                *this)

{
  return 8;
}

// GetMinAlignment @ 14217c470

int __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::GetMinAlignment
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 14217c480

int __thiscall
TProperty<FScriptInterface,FProperty>::GetMinAlignment(TProperty<FScriptInterface,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 14217c490

int __thiscall
TProperty<FScriptMap,FProperty>::GetMinAlignment(TProperty<FScriptMap,FProperty> *this)

{
  return 8;
}

// HasIntrusiveUnsetOptionalState @ 14217df70

bool __thiscall
TProperty<signed_char,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<signed_char,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217df80

bool __thiscall
TProperty<short,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<short,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217df90

bool __thiscall
TProperty<unsigned_short,FNumericProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<unsigned_short,FNumericProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dfa0

bool __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::HasIntrusiveUnsetOptionalState
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dfb0

bool __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dfc0

bool __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
HasIntrusiveUnsetOptionalState
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dfd0

bool __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dfe0

bool __thiscall
TProperty<FScriptInterface,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FScriptInterface,FProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 14217dff0

bool __thiscall
TProperty<FScriptMap,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FScriptMap,FProperty> *this)

{
  return true;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182650

void __thiscall
TProperty<signed_char,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182660

void __thiscall
TProperty<short,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182670

void __thiscall
TProperty<unsigned_short,FNumericProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182680

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182690

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 1421826a0

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
InitializeIntrusiveUnsetOptionalValue
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 1421826b0

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::
InitializeIntrusiveUnsetOptionalValue
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 1421826c0

void __thiscall
TProperty<FScriptInterface,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 1421826d0

void __thiscall
TProperty<FScriptMap,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// InitializeValueInternal @ 142182820

void __thiscall
TProperty<signed_char,FNumericProperty>::InitializeValueInternal
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182850

void __thiscall
TProperty<short,FNumericProperty>::InitializeValueInternal
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182890

void __thiscall
TProperty<unsigned_short,FNumericProperty>::InitializeValueInternal
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      lVar2 = (longlong)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(lVar2 * *(int *)&this->field_0x34 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 1421828d0

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::InitializeValueInternal
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182910

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::InitializeValueInternal
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      lVar2 = *(int *)&this->field_0x34 * lVar3;
      lVar3 = lVar3 + 1;
      *(undefined1 *)(lVar2 + (longlong)param_1) = 0;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182940

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
InitializeValueInternal
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182980

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::InitializeValueInternal
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 1421829c0

void __thiscall
TProperty<FScriptInterface,FProperty>::InitializeValueInternal
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142182a00

void __thiscall
TProperty<FScriptMap,FProperty>::InitializeValueInternal
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + 0x10 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x18 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x38 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x48 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x20 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x28 + (longlong)param_1) = 0;
      *(undefined4 *)(lVar1 + 0x30 + (longlong)param_1) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x34 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 0x40 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 142183fc0

bool __thiscall
TProperty<signed_char,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<signed_char,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 1);
}

// IsIntrusiveOptionalValueSet @ 142183fd0

bool __thiscall
TProperty<short,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<short,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 2);
}

// IsIntrusiveOptionalValueSet @ 142183fe0

bool __thiscall
TProperty<unsigned_short,FNumericProperty>::IsIntrusiveOptionalValueSet
          (TProperty<unsigned_short,FNumericProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 2);
}

// IsIntrusiveOptionalValueSet @ 142183ff0

bool __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::IsIntrusiveOptionalValueSet
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x18);
}

// IsIntrusiveOptionalValueSet @ 142184000

bool __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 1);
}

// IsIntrusiveOptionalValueSet @ 142184010

bool __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
IsIntrusiveOptionalValueSet
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x18);
}

// IsIntrusiveOptionalValueSet @ 142184020

bool __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x18);
}

// IsIntrusiveOptionalValueSet @ 142184030

bool __thiscall
TProperty<FScriptInterface,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FScriptInterface,FProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x10);
}

// IsIntrusiveOptionalValueSet @ 142184040

bool __thiscall
TProperty<FScriptMap,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FScriptMap,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// LinkInternal @ 142184d40

void __thiscall
TProperty<signed_char,FNumericProperty>::LinkInternal
          (TProperty<signed_char,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,1);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 142184d70

void __thiscall
TProperty<short,FNumericProperty>::LinkInternal
          (TProperty<short,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,2);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 142184da0

void __thiscall
TProperty<unsigned_short,FNumericProperty>::LinkInternal
          (TProperty<unsigned_short,FNumericProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,2);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 142184dd0

void __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::LinkInternal
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000000;
  return;
}

// LinkInternal @ 142184e00

void __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::LinkInternal
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,1);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x1000000000;
  return;
}

// LinkInternal @ 142184e30

void __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
LinkInternal(TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
             *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x200;
  return;
}

// LinkInternal @ 142184e60

void __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::LinkInternal
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000200;
  return;
}

// LinkInternal @ 142184e90

void __thiscall
TProperty<FScriptInterface,FProperty>::LinkInternal
          (TProperty<FScriptInterface,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// LinkInternal @ 142184ec0

void __thiscall
TProperty<FScriptMap,FProperty>::LinkInternal
          (TProperty<FScriptMap,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x50);
  return;
}

// ClearIntrusiveOptionalValue @ 1421c1ec0

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::ClearIntrusiveOptionalValue
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearValueInternal @ 1421c1ee0

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::ClearValueInternal
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// CopyValuesInternal @ 1421c3410

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::CopyValuesInternal
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = (longlong)param_3;
  iVar4 = iVar3;
  if (((0 < param_3) && (iVar4 = 0, 1 < (uint)param_3)) &&
     (((void *)((longlong)param_2 + lVar5 * 8 + -8) < param_1 ||
      ((void *)((longlong)param_1 + lVar5 * 8 + -8) < param_2)))) {
    memcpy(param_1,param_2,lVar5 * 8);
    do {
      iVar3 = iVar3 + 1;
      iVar4 = iVar3;
    } while (iVar3 < param_3);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < lVar5) {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 * 8);
    lVar5 = lVar5 - lVar2;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// DestroyValueInternal @ 1421c6490

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::DestroyValueInternal
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  return;
}

// GetCPPType @ 1421cf220

FString * __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::GetCPPType
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTypeTraits.h"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetMinAlignment @ 1421cfd10

int __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::GetMinAlignment
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this)

{
  return 4;
}

// HasIntrusiveUnsetOptionalState @ 1421d2c00

bool __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::HasIntrusiveUnsetOptionalState
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this)

{
  return false;
}

// InitializeIntrusiveUnsetOptionalValue @ 1421d30b0

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeValueInternal @ 1421d30c0

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::InitializeValueInternal
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 1421d3840

bool __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::IsIntrusiveOptionalValueSet
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 8);
}

// LinkInternal @ 1421d39c0

void __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::LinkInternal
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// ClearIntrusiveOptionalValue @ 142265290

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    UE::FDynamicallyTypedValue::Deinit(param_1);
    *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1422652c0

void __thiscall
TProperty<Verse::FNativeString,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
    *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// ClearIntrusiveOptionalValue @ 1422652f0

void __thiscall
TProperty<FUtf8String,FProperty>::ClearIntrusiveOptionalValue
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// ClearValueInternal @ 142265330

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::ClearValueInternal
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  FDynamicallyTypedValue_u_8 FVar1;
  FDynamicallyTypedValue local_28;
  undefined **local_18;
  undefined8 *local_10;
  
  local_28.Type = UE::FDynamicallyTypedValue::NullType();
  local_28.field1_0x8.InlineData = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.Type != (FDynamicallyTypedValueType *)0x0)) {
    local_10 = (undefined8 *)0x0;
    local_18 = &
               ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
    ;
    (**(code **)(local_28.Type)->_padding_)(local_28.Type,&local_18);
    local_18 = &___7FReferenceCollector__6B_;
    if (local_10 != (undefined8 *)0x0) {
      (**(code **)*local_10)(local_10,1);
    }
  }
  UE::FDynamicallyTypedValue::operator=(param_1,&local_28);
  if ((8 < (local_28.Type)->NumBytes) ||
     (FVar1 = (FDynamicallyTypedValue_u_8)&local_28.field1_0x8,
     3 < (local_28.Type)->MinAlignmentLogTwo)) {
    FVar1 = local_28.field1_0x8;
  }
  (**(code **)((local_28.Type)->_padding_ + 0x20))(local_28.Type,FVar1.InlineData);
  if ((8 < (local_28.Type)->NumBytes) || (3 < (local_28.Type)->MinAlignmentLogTwo)) {
    FMemory::Free(local_28.field1_0x8.HeapData);
  }
  return;
}

// ClearValueInternal @ 1422653f0

void __thiscall
TProperty<Verse::FNativeString,FProperty>::ClearValueInternal
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ClearValueInternal @ 142265420

void __thiscall
TProperty<FUtf8String,FProperty>::ClearValueInternal
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  undefined1 local_18 [24];
  
  if (param_1 != local_18) {
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      *(int *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,*(int *)((longlong)param_1 + 0xc),param_1,0,(int *)((longlong)param_1 + 0xc));
  }
  return;
}

// CopyValuesInternal @ 1422669a0

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::CopyValuesInternal
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1,void *param_2,
          int param_3)

{
  FDynamicallyTypedValue *this_00;
  FDynamicallyTypedValueType *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FDynamicallyTypedValue *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined **local_38;
  undefined8 *local_30;
  
  if (0 < param_3) {
    puVar3 = (undefined8 *)((longlong)param_1 + 8);
    lVar7 = (longlong)param_2 - (longlong)param_1;
    lVar4 = (longlong)param_3;
    do {
      pFVar5 = (FDynamicallyTypedValue *)(lVar7 + -8 + (longlong)puVar3);
      this_00 = (FDynamicallyTypedValue *)(puVar3 + -1);
      if (this_00 != pFVar5) {
        UE::FDynamicallyTypedValue::Deinit(this_00);
        pFVar1 = pFVar5->Type;
        this_00->Type = pFVar1;
        if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
          *puVar3 = 0;
          puVar2 = (undefined8 *)0x0;
        }
        else {
          puVar2 = FMemory::Malloc(pFVar1->NumBytes,1 << (pFVar1->MinAlignmentLogTwo & 0x1f));
          *puVar3 = puVar2;
        }
        pFVar1 = this_00->Type;
        if ((8 < pFVar5->Type->NumBytes) ||
           (lVar6 = lVar7 + (longlong)puVar3, 3 < pFVar5->Type->MinAlignmentLogTwo)) {
          lVar6 = *(longlong *)(lVar7 + (longlong)puVar3);
        }
        if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
          puVar2 = puVar3;
        }
        (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,puVar2,lVar6);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (puVar2 = (undefined8 *)puVar3[-1], puVar2 != (undefined8 *)0x0)) {
          local_30 = (undefined8 *)0x0;
          local_38 = &
                     ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
          ;
          (**(code **)*puVar2)(puVar2,&local_38);
          local_38 = &___7FReferenceCollector__6B_;
          if (local_30 != (undefined8 *)0x0) {
            (**(code **)*local_30)(local_30,1);
          }
        }
      }
      puVar3 = puVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// CopyValuesInternal @ 142266b00

void __thiscall
TProperty<Verse::FNativeString,FProperty>::CopyValuesInternal
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)((longlong)param_1 + lVar5 + 8);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar5);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = uVar2;
      *(longlong *)((longlong)param_1 + 8) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_1 = (void *)((longlong)param_1 + 0x10);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// CopyValuesInternal @ 142266b70

void __thiscall
TProperty<FUtf8String,FProperty>::CopyValuesInternal
          (TProperty<FUtf8String,FProperty> *this,void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  int *piVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    lVar5 = (longlong)param_3;
    do {
      pFVar3 = (ForAnyElementType *)
               ((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar4);
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      if (pFVar1 != pFVar3) {
        iVar2 = *(int *)((longlong)piVar4 + (longlong)param_2 + (-4 - (longlong)param_1));
        _Src = pFVar3->Data;
        piVar4[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar4 == 0)) {
          *piVar4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar4,pFVar1,iVar2,piVar4);
          if (iVar2 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar2);
          }
        }
      }
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// DestroyValueInternal @ 1422695e0

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::DestroyValueInternal
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      UE::FDynamicallyTypedValue::Deinit
                ((FDynamicallyTypedValue *)
                 ((longlong)iVar1 * (longlong)*(int *)&this->field_0x34 + (longlong)param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 142269630

void __thiscall
TProperty<Verse::FNativeString,FProperty>::DestroyValueInternal
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar2 = 0;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(int *)&this->field_0x34 * lVar2 + 8 + (longlong)param_1));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// DestroyValueInternal @ 142269690

void __thiscall
TProperty<FUtf8String,FProperty>::DestroyValueInternal
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar3 = 0;
    do {
      pvVar1 = *(void **)(*(int *)&this->field_0x34 * lVar3 + (longlong)param_1);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)&this->field_0x30);
  }
  return;
}

// GetCPPType @ 14226f0b0

FString * __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::GetCPPType
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"UE::FDynamicallyTypedValue");
  return __return_storage_ptr__;
}

// GetCPPType @ 14226f0e0

FString * __thiscall
TProperty<Verse::FNativeString,FProperty>::GetCPPType
          (TProperty<Verse::FNativeString,FProperty> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"Verse::FNativeString");
  return __return_storage_ptr__;
}

// GetCPPType @ 14226f110

FString * __thiscall
TProperty<FUtf8String,FProperty>::GetCPPType
          (TProperty<FUtf8String,FProperty> *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  ::FString::FString(__return_storage_ptr__,L"FUtf8String");
  return __return_storage_ptr__;
}

// GetMinAlignment @ 14226fc60

int __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::GetMinAlignment
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 14226fc70

int __thiscall
TProperty<Verse::FNativeString,FProperty>::GetMinAlignment
          (TProperty<Verse::FNativeString,FProperty> *this)

{
  return 8;
}

// GetMinAlignment @ 14226fc80

int __thiscall
TProperty<FUtf8String,FProperty>::GetMinAlignment(TProperty<FUtf8String,FProperty> *this)

{
  return 8;
}

// HasIntrusiveUnsetOptionalState @ 142272af0

bool __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 142272b00

bool __thiscall
TProperty<Verse::FNativeString,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<Verse::FNativeString,FProperty> *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 142272b10

bool __thiscall
TProperty<FUtf8String,FProperty>::HasIntrusiveUnsetOptionalState
          (TProperty<FUtf8String,FProperty> *this)

{
  return true;
}

// InitializeIntrusiveUnsetOptionalValue @ 142274310

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142274320

void __thiscall
TProperty<Verse::FNativeString,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142274330

void __thiscall
TProperty<FUtf8String,FProperty>::InitializeIntrusiveUnsetOptionalValue
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InitializeValueInternal @ 1422743d0

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::InitializeValueInternal
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)&this->field_0x30) {
    do {
      UE::FDynamicallyTypedValue::InitializeToNull
                ((FDynamicallyTypedValue *)
                 ((longlong)iVar1 * (longlong)*(int *)&this->field_0x34 + (longlong)param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142274420

void __thiscall
TProperty<Verse::FNativeString,FProperty>::InitializeValueInternal
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// InitializeValueInternal @ 142274460

void __thiscall
TProperty<FUtf8String,FProperty>::InitializeValueInternal
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)&this->field_0x30) {
    do {
      uVar3 = (int)uVar4 + 1;
      lVar1 = (longlong)*(int *)&this->field_0x34 * uVar2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + (longlong)param_1) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_1) = 0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)&this->field_0x30);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 142274c30

bool __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x10);
}

// IsIntrusiveOptionalValueSet @ 142274c40

bool __thiscall
TProperty<Verse::FNativeString,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<Verse::FNativeString,FProperty> *this,void *param_1)

{
  return (bool)*(undefined1 *)((longlong)param_1 + 0x10);
}

// IsIntrusiveOptionalValueSet @ 142274c50

bool __thiscall
TProperty<FUtf8String,FProperty>::IsIntrusiveOptionalValueSet
          (TProperty<FUtf8String,FProperty> *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// LinkInternal @ 1422767d0

void __thiscall
TProperty<UE::FDynamicallyTypedValue,FProperty>::LinkInternal
          (TProperty<UE::FDynamicallyTypedValue,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return;
}

// LinkInternal @ 142276800

void __thiscall
TProperty<Verse::FNativeString,FProperty>::LinkInternal
          (TProperty<Verse::FNativeString,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000200;
  return;
}

// LinkInternal @ 142276830

void __thiscall
TProperty<FUtf8String,FProperty>::LinkInternal
          (TProperty<FUtf8String,FProperty> *this,FArchive *param_1)

{
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000200;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 53

// Construct<FStructSerializerTestStruct> @ 148b85940

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerTestStruct>(void *param_1)

{
  memset(param_1,0,0xa10);
  FStructSerializerTestStruct::FStructSerializerTestStruct(param_1);
  return;
}

// ConstructForTests<FStructSerializerTestStruct> @ 148b85970

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStructSerializerTestStruct>(void *param_1)

{
  *(undefined1 *)param_1 = 0x81;
  *(undefined8 *)((longlong)param_1 + 8) = 0xffffac1d29dc725d;
  *(undefined2 *)((longlong)param_1 + 2) = 0x8001;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x10c6f7a0b5ed;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0800000000000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80000001;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x12) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40840000;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0xb4;
  FStructSerializerObjectTestStruct::FStructSerializerObjectTestStruct
            ((FStructSerializerObjectTestStruct *)((longlong)param_1 + 0x38));
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
            ((FStructSerializerBuiltinTestStruct *)((longlong)param_1 + 0x100));
  FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct
            ((FStructSerializerArrayTestStruct *)((longlong)param_1 + 0x1d0));
  FStructSerializerMapTestStruct::FStructSerializerMapTestStruct
            ((FStructSerializerMapTestStruct *)((longlong)param_1 + 0x230));
  FStructSerializerSetTestStruct::FStructSerializerSetTestStruct
            ((FStructSerializerSetTestStruct *)((longlong)param_1 + 0x370));
  FStructSerializerOptionalTestStruct::FStructSerializerOptionalTestStruct
            ((FStructSerializerOptionalTestStruct *)((longlong)param_1 + 0x4b0));
  FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest
            ((FStructSerializerLWCTypesTest *)((longlong)param_1 + 0x6b0));
  return;
}

// Destruct<FStructSerializerTestStruct> @ 148b85980

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerTestStruct>(void *param_1)

{
  FStructSerializerLWCTypesTest::~FStructSerializerLWCTypesTest
            ((FStructSerializerLWCTypesTest *)((longlong)param_1 + 0x6b0));
  FStructSerializerOptionalTestStruct::~FStructSerializerOptionalTestStruct
            ((FStructSerializerOptionalTestStruct *)((longlong)param_1 + 0x4b0));
  FStructSerializerSetTestStruct::~FStructSerializerSetTestStruct
            ((FStructSerializerSetTestStruct *)((longlong)param_1 + 0x370));
  FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct
            ((FStructSerializerMapTestStruct *)((longlong)param_1 + 0x230));
  DestructItems<FStructSerializerBuiltinTestStruct,int>
            (*(FStructSerializerBuiltinTestStruct **)((longlong)param_1 + 0x220),
             *(int *)((longlong)param_1 + 0x228));
  if (*(void **)((longlong)param_1 + 0x220) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x220));
  }
  if (*(void **)((longlong)param_1 + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x210));
  }
  if (*(void **)((longlong)param_1 + 0x1e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e0));
  }
  if (*(void **)((longlong)param_1 + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d0));
  }
  if (*(longlong **)((longlong)param_1 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x128) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
    return;
  }
  return;
}

// Copy<FStructSerializerTestStruct> @ 148b85990

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerTestStruct>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  undefined8 *puVar3;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator> *this_00
  ;
  int local_res18;
  
  if (param_3 != 0) {
    this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
           ((longlong)param_1 + 0x370);
    this_00 = (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
               *)((longlong)param_1 + 0x230);
    puVar2 = param_1;
    puVar3 = param_2;
    local_res18 = param_3;
    do {
      uVar1 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
      uVar1 = puVar3[3];
      puVar2[2] = puVar3[2];
      puVar2[3] = uVar1;
      uVar1 = puVar3[5];
      puVar2[4] = puVar3[4];
      puVar2[5] = uVar1;
      *(undefined2 *)(puVar2 + 6) =
           *(undefined2 *)((longlong)puVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
      *(undefined1 *)((longlong)puVar2 + 0x32) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (0x32 - (longlong)param_1));
      FStructSerializerObjectTestStruct::operator=
                ((FStructSerializerObjectTestStruct *)(puVar2 + 7),
                 (FStructSerializerObjectTestStruct *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x38 - (longlong)param_1)));
      FStructSerializerBuiltinTestStruct::operator=
                ((FStructSerializerBuiltinTestStruct *)(puVar2 + 0x20),
                 (FStructSerializerBuiltinTestStruct *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x100 - (longlong)param_1)));
      FStructSerializerArrayTestStruct::operator=
                ((FStructSerializerArrayTestStruct *)(puVar2 + 0x3a),
                 (FStructSerializerArrayTestStruct *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x1d0 - (longlong)param_1)));
      TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
      operator=(this_00,(TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                         *)((longlong)puVar2 + (longlong)param_2 + (0x230 - (longlong)param_1)));
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(this_00 + 1),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)puVar2 + (longlong)param_2 + (0x280 - (longlong)param_1)));
      TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                   *)(this_00 + 2),
                  (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                   *)((longlong)puVar2 + (longlong)param_2 + (0x2d0 - (longlong)param_1)));
      TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                   *)(this_00 + 3),
                  (TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                   *)((longlong)puVar2 + (longlong)param_2 + (800 - (longlong)param_1)));
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                      ((longlong)puVar2 + (longlong)param_2 + (0x370 - (longlong)param_1)));
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(this + 1),
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x3c0 - (longlong)param_1)));
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(this + 2),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x410 - (longlong)param_1)));
      TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
      ::operator=((TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                   *)(this + 3),
                  (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                   *)((longlong)puVar2 + (longlong)param_2 + (0x460 - (longlong)param_1)));
      FStructSerializerOptionalTestStruct::operator=
                ((FStructSerializerOptionalTestStruct *)(puVar2 + 0x96),
                 (FStructSerializerOptionalTestStruct *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x4b0 - (longlong)param_1)));
      FStructSerializerLWCTypesTest::operator=
                ((FStructSerializerLWCTypesTest *)(puVar2 + 0xd6),
                 (FStructSerializerLWCTypesTest *)
                 ((longlong)puVar2 + (longlong)param_2 + (0x6b0 - (longlong)param_1)));
      puVar3 = puVar3 + 0x142;
      local_res18 = local_res18 + -1;
      this_00 = (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                 *)&this_00[0x20].Elements.field_0x10;
      this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &this[0x20].Elements.field_0x10;
      puVar2 = puVar2 + 0x142;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FStructSerializerOptionalTestStruct> @ 148b85ba0

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerOptionalTestStruct>(void *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FStructSerializerBuiltinTestStruct *pFVar4;
  FName FStackX_8;
  FString FStack_e8;
  FStructSerializerBuiltinTestStruct FStack_d8;
  
  ::FString::FString(&FStack_e8,L"Test String");
  *(FScriptContainerElement **)param_1 = FStack_e8.Data.AllocatorInstance.Data;
  *(int *)((longlong)param_1 + 8) = FStack_e8.Data.ArrayNum;
  iVar2 = FStack_e8.Data.ArrayMax;
  FStack_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)param_1 + 0xc) = FStack_e8.Data.ArrayMax;
  FStack_e8.Data.ArrayNum = 0;
  FStack_e8.Data.ArrayMax = 0;
  if ((iVar2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x4d2;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  ::FName::FName(&FStackX_8,L"Test Name");
  *(FName *)((longlong)param_1 + 0x30) = FStackX_8;
  if ((FStackX_8.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  pFVar4 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_d8);
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
            ((FStructSerializerBuiltinTestStruct *)((longlong)param_1 + 0x40),pFVar4);
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  if (FStack_d8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_d8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_d8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.String.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)((longlong)param_1 + 0x1f0) = 0;
  return;
}

// ConstructForTests<FStructSerializerOptionalTestStruct> @ 148b85bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerOptionalTestStruct>(void *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FStructSerializerBuiltinTestStruct *pFVar4;
  FName FStackX_8;
  FString FStack_e8;
  FStructSerializerBuiltinTestStruct FStack_d8;
  
  ::FString::FString(&FStack_e8,L"Test String");
  *(FScriptContainerElement **)param_1 = FStack_e8.Data.AllocatorInstance.Data;
  *(int *)((longlong)param_1 + 8) = FStack_e8.Data.ArrayNum;
  iVar2 = FStack_e8.Data.ArrayMax;
  FStack_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)param_1 + 0xc) = FStack_e8.Data.ArrayMax;
  FStack_e8.Data.ArrayNum = 0;
  FStack_e8.Data.ArrayMax = 0;
  if ((iVar2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x4d2;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  ::FName::FName(&FStackX_8,L"Test Name");
  *(FName *)((longlong)param_1 + 0x30) = FStackX_8;
  if ((FStackX_8.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  pFVar4 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_d8);
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
            ((FStructSerializerBuiltinTestStruct *)((longlong)param_1 + 0x40),pFVar4);
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  if (FStack_d8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_d8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_d8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.String.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)((longlong)param_1 + 0x1f0) = 0;
  return;
}

// Destruct<FStructSerializerOptionalTestStruct> @ 148b85bc0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerOptionalTestStruct>(void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x1f0) != '\0') {
    if (*(longlong **)((longlong)param_1 + 0x148) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0x148) + 0x10))();
    }
    if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x138));
    }
  }
  if (*(char *)((longlong)param_1 + 0x110) != '\0') {
    if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0x68) + 0x10))();
    }
    if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x58));
    }
  }
  if ((*(int *)((longlong)param_1 + 0x1c) != -1) &&
     (*(void **)((longlong)param_1 + 0x10) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if ((*(int *)((longlong)param_1 + 0xc) != -1) && (*(void **)param_1 != (void *)0x0)) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FStructSerializerOptionalTestStruct> @ 148b85bd0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerOptionalTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TOptional<FString>::operator=(param_1,param_2);
    TOptional<FString>::operator=
              ((TOptional<FString> *)((longlong)param_1 + 0x10),
               (TOptional<FString> *)((longlong)param_2 + 0x10));
    if ((TOptional<FString> *)((longlong)param_2 + 0x20) !=
        (TOptional<FString> *)((longlong)param_1 + 0x20)) {
      if (*(char *)((longlong)&((TOptional<FString> *)((longlong)param_2 + 0x20))->field0_0x0 + 4)
          == '\0') {
        if (*(char *)((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 4)
            != '\0') {
          *(undefined1 *)
           ((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 =
             *(undefined4 *)&((TOptional<FString> *)((longlong)param_2 + 0x20))->field0_0x0;
        *(undefined1 *)
         ((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 4) = 1;
      }
    }
    puVar1 = (undefined4 *)
             ((longlong)&((TOptional<FString> *)((longlong)param_2 + 0x20))->field0_0x0 + 8);
    puVar2 = (undefined4 *)
             ((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 8);
    if (puVar1 != puVar2) {
      if (*(char *)((longlong)&((TOptional<FString> *)((longlong)param_2 + 0x20))->field0_0x0 + 0xc)
          == '\0') {
        if (*(char *)((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 +
                     0xc) != '\0') {
          *(undefined1 *)
           ((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 0xc) = 0;
        }
      }
      else {
        *puVar2 = *puVar1;
        *(undefined1 *)
         ((longlong)&((TOptional<FString> *)((longlong)param_1 + 0x20))->field0_0x0 + 0xc) = 1;
      }
    }
    TOptional<FName>::operator=
              ((TOptional<FName> *)((longlong)param_1 + 0x30),
               (TOptional<FName> *)((longlong)param_2 + 0x30));
    TOptional<FName>::operator=
              ((TOptional<FName> *)
               &(((TOptional<FString> *)((longlong)param_1 + 0x30))->field0_0x0).TypedValue.Data.
                ArrayNum,
               (TOptional<FName> *)
               &(((TOptional<FString> *)((longlong)param_2 + 0x30))->field0_0x0).TypedValue.Data.
                ArrayNum);
    TOptional<FStructSerializerBuiltinTestStruct>::operator=
              ((TOptional<FStructSerializerBuiltinTestStruct> *)((longlong)param_1 + 0x40),
               (TOptional<FStructSerializerBuiltinTestStruct> *)((longlong)param_2 + 0x40));
    TOptional<FStructSerializerBuiltinTestStruct>::operator=
              ((TOptional<FStructSerializerBuiltinTestStruct> *)((longlong)param_1 + 0x120),
               (TOptional<FStructSerializerBuiltinTestStruct> *)((longlong)param_2 + 0x120));
    param_2 = (void *)((longlong)param_2 + 0x200);
    param_1 = (TOptional<FString> *)((longlong)param_1 + 0x200);
  }
  return true;
}

// Construct<FStructSerializerSetTestStruct> @ 148b85ce0

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerSetTestStruct>(void *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  uint *puVar2;
  uchar *puVar3;
  int iVar4;
  ForElementType<unsigned_int> *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FStructSerializerBuiltinTestStruct *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ulonglong uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 auStackX_8 [8];
  FName FStackX_10;
  FSparseArrayAllocationInfo FStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  FStructSerializerBuiltinTestStruct FStack_108;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  pTVar1 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  puVar2 = (uint *)((longlong)param_1 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(int *)((longlong)param_1 + 0x58) = 0;
  *(int *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *puVar2 = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)((longlong)param_1 + 0x58),
                       (int *)((longlong)param_1 + 0x5c));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60),1);
    uVar13 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar13;
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60);
    }
    puVar3 = (pTVar14->AllocatorInstance).InlineData + (longlong)(iVar8 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar13 & 0x1f));
  }
  else {
    iVar7 = *(int *)((longlong)param_1 + 0x80);
    iVar8 = *(int *)((longlong)param_1 + 0x84) + -1;
    lVar12 = *(longlong *)&pTVar1->Elements;
    iVar4 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
    *(int *)((longlong)param_1 + 0x80) = iVar4;
    *(int *)((longlong)param_1 + 0x84) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar12 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&FStack_158,iVar7);
  pTVar14 = pTVar18;
  if (FStack_158.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[0] = '\x01';
    pFVar5->InlineData[1] = '\0';
    pFVar5->InlineData[2] = '\0';
    pFVar5->InlineData[3] = '\0';
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[4] = 0xff;
    pFVar5->InlineData[5] = 0xff;
    pFVar5->InlineData[6] = 0xff;
    pFVar5->InlineData[7] = 0xff;
    pTVar14 = FStack_158.Pointer;
  }
  auStackX_8._0_4_ = FStack_158.Index;
  FStackX_10.ComparisonIndex.Value = *(uint *)(pTVar14->AllocatorInstance).InlineData;
  bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,FStackX_10.ComparisonIndex.Value,(TSparseSetElement<int> *)pTVar14,
                     (int *)auStackX_8,(bool *)0x0);
  if (!bVar6) {
    uVar16 = 1;
    uVar13 = *(int *)((longlong)param_1 + 0x58) - *(int *)((longlong)param_1 + 0x84);
    if (3 < uVar13) {
      uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar16 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar16 <= (int)*puVar2)) {
      uVar13 = *puVar2 - 1 & FStackX_10.ComparisonIndex.Value;
      *(uint *)((pTVar14->AllocatorInstance).InlineData + 8) = uVar13;
      lVar12 = *(longlong *)((longlong)param_1 + 0x90);
      if (*(longlong *)((longlong)param_1 + 0x90) == 0) {
        lVar12 = (longlong)param_1 + 0x88;
      }
      uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
      *(undefined4 *)((pTVar14->AllocatorInstance).InlineData + 4) =
           *(undefined4 *)(lVar12 + uVar19 * 4);
      *(undefined4 *)(lVar12 + uVar19 * 4) = auStackX_8._0_4_;
    }
    else {
      *puVar2 = uVar16;
      if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)((longlong)param_1 + 0x90),0,0,4);
      }
      if (uVar16 != 0) {
        uVar13 = uVar16;
        if (uVar16 < 2) {
          if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
            uVar13 = 0;
            goto LAB_148b9eec1;
          }
        }
        else {
LAB_148b9eec1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)((longlong)param_1 + 0x90),0,uVar13,4);
        }
        if (0 < (int)uVar16) {
          uVar19 = (ulonglong)uVar16;
          pTVar14 = pTVar18;
          do {
            lVar12 = (longlong)param_1 + 0x88;
            if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
              lVar12 = *(longlong *)((longlong)param_1 + 0x90);
            }
            uVar9 = (ulonglong)pTVar14 & (longlong)(int)uVar16 - 1U;
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                      ((pTVar14->AllocatorInstance).InlineData + 1);
            *(undefined4 *)(lVar12 + uVar9 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (*puVar2 != 0) {
        uVar13 = *(uint *)((longlong)param_1 + 0x78);
        FStack_158.Pointer = (void *)((longlong)param_1 + 0x60);
        FStack_158._4_4_ = 1;
        FStack_158.Index = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        pTVar14 = pTVar18;
        if (uVar13 != 0) {
          pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar14 = FStack_158.Pointer;
          }
          uVar16 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
          pTVar11 = pTVar18;
          pTVar20 = pTVar18;
          while (uVar16 == 0) {
            uStack_140 = (int)pTVar20 + 0x20;
            pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_140;
            iVar7 = (int)pTVar11;
            FStack_158.Index = iVar7 + 1;
            pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(uint)FStack_158.Index;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < FStack_158.Index)
            goto LAB_148b9efbe;
            uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
          }
          FStack_158._4_4_ = -uVar16 & uVar16;
          uVar19 = (ulonglong)(uint)FStack_158._4_4_ * 2 + 1;
          lVar12 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uStack_144 = (int)lVar12 + -1 + uStack_140;
          pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_144;
          if ((int)uVar13 < (int)uStack_144) {
LAB_148b9efbe:
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar13;
            uStack_144 = uVar13;
          }
        }
        uStack_148 = 0xffffffff;
        TStack_130._padding_ = CONCAT44(FStack_158._4_4_,FStack_158.Index);
        TStack_130.CurrentBitIndex = uStack_144;
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130._28_4_ = uStack_13c;
        TStack_130.BaseBitIndex = uStack_140;
        pTStack_138 = pTVar1;
        TStack_130.Array = FStack_158.Pointer;
        if ((int)pTVar14 < (int)uVar13) {
          do {
            iVar7 = (int)pTVar14;
            uVar13 = *puVar2 - 1 &
                     *(uint *)(*(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc);
            lVar12 = *(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc;
            *(uint *)(lVar12 + 8) = uVar13;
            lVar15 = (longlong)param_1 + 0x88;
            if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
              lVar15 = *(longlong *)((longlong)param_1 + 0x90);
            }
            uVar19 = (longlong)(int)*puVar2 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar15 + uVar19 * 4);
            *(int *)(lVar15 + uVar19 * 4) = iVar7;
            TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                      (ulonglong)(uint)TStack_130.CurrentBitIndex;
          } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
        }
      }
    }
  }
  pTVar1 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50);
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)((longlong)param_1 + 0x58),
                       (int *)((longlong)param_1 + 0x5c));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60),1);
    uVar13 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar13;
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60);
    }
    puVar3 = (pTVar14->AllocatorInstance).InlineData + (longlong)(iVar8 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar13 & 0x1f));
  }
  else {
    iVar7 = *(int *)((longlong)param_1 + 0x80);
    iVar8 = *(int *)((longlong)param_1 + 0x84) + -1;
    lVar12 = *(longlong *)&pTVar1->Elements;
    iVar4 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
    *(int *)((longlong)param_1 + 0x80) = iVar4;
    *(int *)((longlong)param_1 + 0x84) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar12 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&FStack_158,iVar7);
  pTVar14 = pTVar18;
  if (FStack_158.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[0] = '\x02';
    pFVar5->InlineData[1] = '\0';
    pFVar5->InlineData[2] = '\0';
    pFVar5->InlineData[3] = '\0';
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[4] = 0xff;
    pFVar5->InlineData[5] = 0xff;
    pFVar5->InlineData[6] = 0xff;
    pFVar5->InlineData[7] = 0xff;
    pTVar14 = FStack_158.Pointer;
  }
  uVar13 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
  auStackX_8._0_4_ = FStack_158.Index;
  bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,uVar13,(TSparseSetElement<int> *)pTVar14,(int *)auStackX_8,(bool *)0x0);
  if (bVar6) goto LAB_148b9f3e7;
  uVar17 = 1;
  uVar16 = *(int *)((longlong)param_1 + 0x58) - *(int *)((longlong)param_1 + 0x84);
  if (3 < uVar16) {
    uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar17 <= *(int *)((longlong)param_1 + 0x98))) {
    uVar13 = *(int *)((longlong)param_1 + 0x98) - 1U & uVar13;
    *(uint *)((pTVar14->AllocatorInstance).InlineData + 8) = uVar13;
    lVar12 = *(longlong *)((longlong)param_1 + 0x90);
    if (*(longlong *)((longlong)param_1 + 0x90) == 0) {
      lVar12 = (longlong)param_1 + 0x88;
    }
    uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
    *(undefined4 *)((pTVar14->AllocatorInstance).InlineData + 4) =
         *(undefined4 *)(lVar12 + uVar19 * 4);
    *(undefined4 *)(lVar12 + uVar19 * 4) = auStackX_8._0_4_;
    goto LAB_148b9f3e7;
  }
  *(uint *)((longlong)param_1 + 0x98) = uVar17;
  if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x90),0,0,4);
  }
  if (uVar17 != 0) {
    uVar13 = uVar17;
    if (uVar17 < 2) {
      if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
        uVar13 = 0;
        goto LAB_148b9f207;
      }
    }
    else {
LAB_148b9f207:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)param_1 + 0x90),0,uVar13,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      pTVar14 = pTVar18;
      do {
        lVar12 = (longlong)param_1 + 0x88;
        if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
          lVar12 = *(longlong *)((longlong)param_1 + 0x90);
        }
        uVar9 = (ulonglong)pTVar14 & (longlong)(int)uVar17 - 1U;
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((pTVar14->AllocatorInstance).InlineData + 1);
        *(undefined4 *)(lVar12 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (*(int *)((longlong)param_1 + 0x98) != 0) {
    uVar13 = *(uint *)((longlong)param_1 + 0x78);
    FStack_158.Pointer = (void *)((longlong)param_1 + 0x60);
    FStack_158.Index = 0;
    FStack_158._4_4_ = 1;
    uStack_144 = 0;
    uStack_140 = 0;
    if (uVar13 != 0) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = FStack_158.Pointer;
      }
      uVar16 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      pTVar11 = pTVar18;
      while (uVar16 == 0) {
        iVar7 = (int)pTVar18;
        uStack_140 = (int)pTVar11 + 0x20;
        pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_140;
        FStack_158.Index = iVar7 + 1;
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(uint)FStack_158.Index;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < FStack_158.Index)
        goto LAB_148b9f300;
        uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
      }
      FStack_158._4_4_ = -uVar16 & uVar16;
      uVar19 = (ulonglong)(uint)FStack_158._4_4_ * 2 + 1;
      lVar12 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_144 = (int)lVar12 + -1 + uStack_140;
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_144;
      if ((int)uVar13 < (int)uStack_144) {
LAB_148b9f300:
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar13;
        uStack_144 = uVar13;
      }
    }
    uStack_148 = 0xffffffff;
    TStack_130._padding_ = CONCAT44(FStack_158._4_4_,FStack_158.Index);
    TStack_130.CurrentBitIndex = uStack_144;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130._28_4_ = uStack_13c;
    TStack_130.BaseBitIndex = uStack_140;
    pTStack_138 = pTVar1;
    TStack_130.Array = FStack_158.Pointer;
    if ((int)pTVar18 < (int)uVar13) {
      do {
        iVar7 = (int)pTVar18;
        uVar13 = *(int *)((longlong)param_1 + 0x98) - 1U &
                 *(uint *)(*(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc);
        lVar12 = *(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc;
        *(uint *)(lVar12 + 8) = uVar13;
        lVar15 = (longlong)param_1 + 0x88;
        if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
          lVar15 = *(longlong *)((longlong)param_1 + 0x90);
        }
        uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar15 + uVar19 * 4);
        *(int *)(lVar15 + uVar19 * 4) = iVar7;
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (ulonglong)(uint)TStack_130.CurrentBitIndex;
      } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
    }
  }
LAB_148b9f3e7:
  auStackX_8._0_4_ = 3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50),
             (int *)(auStackX_8 + 8),(bool *)auStackX_8);
  ::FString::FString((FString *)&FStack_158,L"Are");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"Belong");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"To");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"Us");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FName::FName((FName *)(auStackX_8 + 8),L"Make");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  ::FName::FName((FName *)(auStackX_8 + 8),L"Your");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  ::FName::FName((FName *)(auStackX_8 + 8),L"Time");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  pFVar10 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_108);
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::Emplace<FStructSerializerBuiltinTestStruct>
            ((TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0xf0),(FStructSerializerBuiltinTestStruct *)auStackX_8,
             (bool *)pFVar10);
  if (FStack_108.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_108.Text.TextData.Reference + 0x10))();
  }
  if (FStack_108.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.String.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FStructSerializerSetTestStruct> @ 148b85cf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerSetTestStruct>(void *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  uint *puVar2;
  uchar *puVar3;
  int iVar4;
  ForElementType<unsigned_int> *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FStructSerializerBuiltinTestStruct *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ulonglong uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 auStackX_8 [8];
  FName FStackX_10;
  FSparseArrayAllocationInfo FStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  FStructSerializerBuiltinTestStruct FStack_108;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  pTVar1 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  puVar2 = (uint *)((longlong)param_1 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(int *)((longlong)param_1 + 0x58) = 0;
  *(int *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *puVar2 = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)((longlong)param_1 + 0x58),
                       (int *)((longlong)param_1 + 0x5c));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60),1);
    uVar13 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar13;
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60);
    }
    puVar3 = (pTVar14->AllocatorInstance).InlineData + (longlong)(iVar8 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar13 & 0x1f));
  }
  else {
    iVar7 = *(int *)((longlong)param_1 + 0x80);
    iVar8 = *(int *)((longlong)param_1 + 0x84) + -1;
    lVar12 = *(longlong *)&pTVar1->Elements;
    iVar4 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
    *(int *)((longlong)param_1 + 0x80) = iVar4;
    *(int *)((longlong)param_1 + 0x84) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar12 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&FStack_158,iVar7);
  pTVar14 = pTVar18;
  if (FStack_158.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[0] = '\x01';
    pFVar5->InlineData[1] = '\0';
    pFVar5->InlineData[2] = '\0';
    pFVar5->InlineData[3] = '\0';
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[4] = 0xff;
    pFVar5->InlineData[5] = 0xff;
    pFVar5->InlineData[6] = 0xff;
    pFVar5->InlineData[7] = 0xff;
    pTVar14 = FStack_158.Pointer;
  }
  auStackX_8._0_4_ = FStack_158.Index;
  FStackX_10.ComparisonIndex.Value = *(uint *)(pTVar14->AllocatorInstance).InlineData;
  bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,FStackX_10.ComparisonIndex.Value,(TSparseSetElement<int> *)pTVar14,
                     (int *)auStackX_8,(bool *)0x0);
  if (!bVar6) {
    uVar16 = 1;
    uVar13 = *(int *)((longlong)param_1 + 0x58) - *(int *)((longlong)param_1 + 0x84);
    if (3 < uVar13) {
      uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar16 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar16 <= (int)*puVar2)) {
      uVar13 = *puVar2 - 1 & FStackX_10.ComparisonIndex.Value;
      *(uint *)((pTVar14->AllocatorInstance).InlineData + 8) = uVar13;
      lVar12 = *(longlong *)((longlong)param_1 + 0x90);
      if (*(longlong *)((longlong)param_1 + 0x90) == 0) {
        lVar12 = (longlong)param_1 + 0x88;
      }
      uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
      *(undefined4 *)((pTVar14->AllocatorInstance).InlineData + 4) =
           *(undefined4 *)(lVar12 + uVar19 * 4);
      *(undefined4 *)(lVar12 + uVar19 * 4) = auStackX_8._0_4_;
    }
    else {
      *puVar2 = uVar16;
      if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)((longlong)param_1 + 0x90),0,0,4);
      }
      if (uVar16 != 0) {
        uVar13 = uVar16;
        if (uVar16 < 2) {
          if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
            uVar13 = 0;
            goto LAB_148b9eec1;
          }
        }
        else {
LAB_148b9eec1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)((longlong)param_1 + 0x90),0,uVar13,4);
        }
        if (0 < (int)uVar16) {
          uVar19 = (ulonglong)uVar16;
          pTVar14 = pTVar18;
          do {
            lVar12 = (longlong)param_1 + 0x88;
            if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
              lVar12 = *(longlong *)((longlong)param_1 + 0x90);
            }
            uVar9 = (ulonglong)pTVar14 & (longlong)(int)uVar16 - 1U;
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                      ((pTVar14->AllocatorInstance).InlineData + 1);
            *(undefined4 *)(lVar12 + uVar9 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (*puVar2 != 0) {
        uVar13 = *(uint *)((longlong)param_1 + 0x78);
        FStack_158.Pointer = (void *)((longlong)param_1 + 0x60);
        FStack_158._4_4_ = 1;
        FStack_158.Index = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        pTVar14 = pTVar18;
        if (uVar13 != 0) {
          pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar14 = FStack_158.Pointer;
          }
          uVar16 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
          pTVar11 = pTVar18;
          pTVar20 = pTVar18;
          while (uVar16 == 0) {
            uStack_140 = (int)pTVar20 + 0x20;
            pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_140;
            iVar7 = (int)pTVar11;
            FStack_158.Index = iVar7 + 1;
            pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(uint)FStack_158.Index;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < FStack_158.Index)
            goto LAB_148b9efbe;
            uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
          }
          FStack_158._4_4_ = -uVar16 & uVar16;
          uVar19 = (ulonglong)(uint)FStack_158._4_4_ * 2 + 1;
          lVar12 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uStack_144 = (int)lVar12 + -1 + uStack_140;
          pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_144;
          if ((int)uVar13 < (int)uStack_144) {
LAB_148b9efbe:
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar13;
            uStack_144 = uVar13;
          }
        }
        uStack_148 = 0xffffffff;
        TStack_130._padding_ = CONCAT44(FStack_158._4_4_,FStack_158.Index);
        TStack_130.CurrentBitIndex = uStack_144;
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130._28_4_ = uStack_13c;
        TStack_130.BaseBitIndex = uStack_140;
        pTStack_138 = pTVar1;
        TStack_130.Array = FStack_158.Pointer;
        if ((int)pTVar14 < (int)uVar13) {
          do {
            iVar7 = (int)pTVar14;
            uVar13 = *puVar2 - 1 &
                     *(uint *)(*(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc);
            lVar12 = *(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc;
            *(uint *)(lVar12 + 8) = uVar13;
            lVar15 = (longlong)param_1 + 0x88;
            if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
              lVar15 = *(longlong *)((longlong)param_1 + 0x90);
            }
            uVar19 = (longlong)(int)*puVar2 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar15 + uVar19 * 4);
            *(int *)(lVar15 + uVar19 * 4) = iVar7;
            TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                      (ulonglong)(uint)TStack_130.CurrentBitIndex;
          } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
        }
      }
    }
  }
  pTVar1 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50);
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)((longlong)param_1 + 0x58),
                       (int *)((longlong)param_1 + 0x5c));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60),1);
    uVar13 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar13;
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x60);
    }
    puVar3 = (pTVar14->AllocatorInstance).InlineData + (longlong)(iVar8 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar13 & 0x1f));
  }
  else {
    iVar7 = *(int *)((longlong)param_1 + 0x80);
    iVar8 = *(int *)((longlong)param_1 + 0x84) + -1;
    lVar12 = *(longlong *)&pTVar1->Elements;
    iVar4 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
    *(int *)((longlong)param_1 + 0x80) = iVar4;
    *(int *)((longlong)param_1 + 0x84) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar12 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&FStack_158,iVar7);
  pTVar14 = pTVar18;
  if (FStack_158.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[0] = '\x02';
    pFVar5->InlineData[1] = '\0';
    pFVar5->InlineData[2] = '\0';
    pFVar5->InlineData[3] = '\0';
    pFVar5 = FStack_158.Pointer;
    pFVar5->InlineData[4] = 0xff;
    pFVar5->InlineData[5] = 0xff;
    pFVar5->InlineData[6] = 0xff;
    pFVar5->InlineData[7] = 0xff;
    pTVar14 = FStack_158.Pointer;
  }
  uVar13 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
  auStackX_8._0_4_ = FStack_158.Index;
  bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,uVar13,(TSparseSetElement<int> *)pTVar14,(int *)auStackX_8,(bool *)0x0);
  if (bVar6) goto LAB_148b9f3e7;
  uVar17 = 1;
  uVar16 = *(int *)((longlong)param_1 + 0x58) - *(int *)((longlong)param_1 + 0x84);
  if (3 < uVar16) {
    uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar17 <= *(int *)((longlong)param_1 + 0x98))) {
    uVar13 = *(int *)((longlong)param_1 + 0x98) - 1U & uVar13;
    *(uint *)((pTVar14->AllocatorInstance).InlineData + 8) = uVar13;
    lVar12 = *(longlong *)((longlong)param_1 + 0x90);
    if (*(longlong *)((longlong)param_1 + 0x90) == 0) {
      lVar12 = (longlong)param_1 + 0x88;
    }
    uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
    *(undefined4 *)((pTVar14->AllocatorInstance).InlineData + 4) =
         *(undefined4 *)(lVar12 + uVar19 * 4);
    *(undefined4 *)(lVar12 + uVar19 * 4) = auStackX_8._0_4_;
    goto LAB_148b9f3e7;
  }
  *(uint *)((longlong)param_1 + 0x98) = uVar17;
  if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x90),0,0,4);
  }
  if (uVar17 != 0) {
    uVar13 = uVar17;
    if (uVar17 < 2) {
      if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
        uVar13 = 0;
        goto LAB_148b9f207;
      }
    }
    else {
LAB_148b9f207:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)param_1 + 0x90),0,uVar13,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      pTVar14 = pTVar18;
      do {
        lVar12 = (longlong)param_1 + 0x88;
        if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
          lVar12 = *(longlong *)((longlong)param_1 + 0x90);
        }
        uVar9 = (ulonglong)pTVar14 & (longlong)(int)uVar17 - 1U;
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((pTVar14->AllocatorInstance).InlineData + 1);
        *(undefined4 *)(lVar12 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (*(int *)((longlong)param_1 + 0x98) != 0) {
    uVar13 = *(uint *)((longlong)param_1 + 0x78);
    FStack_158.Pointer = (void *)((longlong)param_1 + 0x60);
    FStack_158.Index = 0;
    FStack_158._4_4_ = 1;
    uStack_144 = 0;
    uStack_140 = 0;
    if (uVar13 != 0) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x70) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = FStack_158.Pointer;
      }
      uVar16 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      pTVar11 = pTVar18;
      while (uVar16 == 0) {
        iVar7 = (int)pTVar18;
        uStack_140 = (int)pTVar11 + 0x20;
        pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_140;
        FStack_158.Index = iVar7 + 1;
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(uint)FStack_158.Index;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < FStack_158.Index)
        goto LAB_148b9f300;
        uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
      }
      FStack_158._4_4_ = -uVar16 & uVar16;
      uVar19 = (ulonglong)(uint)FStack_158._4_4_ * 2 + 1;
      lVar12 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_144 = (int)lVar12 + -1 + uStack_140;
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uStack_144;
      if ((int)uVar13 < (int)uStack_144) {
LAB_148b9f300:
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar13;
        uStack_144 = uVar13;
      }
    }
    uStack_148 = 0xffffffff;
    TStack_130._padding_ = CONCAT44(FStack_158._4_4_,FStack_158.Index);
    TStack_130.CurrentBitIndex = uStack_144;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130._28_4_ = uStack_13c;
    TStack_130.BaseBitIndex = uStack_140;
    pTStack_138 = pTVar1;
    TStack_130.Array = FStack_158.Pointer;
    if ((int)pTVar18 < (int)uVar13) {
      do {
        iVar7 = (int)pTVar18;
        uVar13 = *(int *)((longlong)param_1 + 0x98) - 1U &
                 *(uint *)(*(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc);
        lVar12 = *(longlong *)&pTStack_138->Elements + (longlong)iVar7 * 0xc;
        *(uint *)(lVar12 + 8) = uVar13;
        lVar15 = (longlong)param_1 + 0x88;
        if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
          lVar15 = *(longlong *)((longlong)param_1 + 0x90);
        }
        uVar19 = (longlong)*(int *)((longlong)param_1 + 0x98) - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar15 + uVar19 * 4);
        *(int *)(lVar15 + uVar19 * 4) = iVar7;
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (ulonglong)(uint)TStack_130.CurrentBitIndex;
      } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
    }
  }
LAB_148b9f3e7:
  auStackX_8._0_4_ = 3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50),
             (int *)(auStackX_8 + 8),(bool *)auStackX_8);
  ::FString::FString((FString *)&FStack_158,L"Are");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"Belong");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"To");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FString::FString((FString *)&FStack_158,L"Us");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (param_1,(FString *)auStackX_8,(bool *)&FStack_158);
  if ((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_158._4_4_,FStack_158.Index));
  }
  ::FName::FName((FName *)(auStackX_8 + 8),L"Make");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  ::FName::FName((FName *)(auStackX_8 + 8),L"Your");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  ::FName::FName((FName *)(auStackX_8 + 8),L"Time");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0xa0)
             ,(FName *)auStackX_8,(bool *)(auStackX_8 + 8));
  pFVar10 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_108);
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::Emplace<FStructSerializerBuiltinTestStruct>
            ((TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0xf0),(FStructSerializerBuiltinTestStruct *)auStackX_8,
             (bool *)pFVar10);
  if (FStack_108.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_108.Text.TextData.Reference + 0x10))();
  }
  if (FStack_108.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.String.Data.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FStructSerializerSetTestStruct> @ 148b85d00

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerSetTestStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf0));
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FStructSerializerSetTestStruct> @ 148b85d10

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerSetTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(param_1,param_2);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_1 + 0x50),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)param_2 + 0x50));
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               ((longlong)param_1 + 0xa0),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               ((longlong)param_2 + 0xa0));
    TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
    ::operator=((TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xf0),
                (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xf0));
    param_2 = (void *)((longlong)param_2 + 0x140);
    param_1 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
              ((longlong)param_1 + 0x140);
  }
  return true;
}

// Construct<FStructSerializerMapTestStruct> @ 148b85e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerMapTestStruct>(void *param_1)

{
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this;
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  *this_00;
  FStructSerializerBuiltinTestStruct *pFVar1;
  TPairInitializer<FString_&&,FString_&&> TStackX_8;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  TVector<double>_u_0 TStack_108;
  FStructSerializerBuiltinTestStruct FStack_e8;
  
  this = (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
          *)((longlong)param_1 + 0xa0);
  *(undefined8 *)param_1 = 0;
  this_00 = (TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
             *)((longlong)param_1 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)&(this->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)&(this_00->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  ::FString::FString((FString *)&TStack_108._s_0,L"One");
  auStack_118._0_8_ = &TStackX_8;
  TStackX_8.Key._0_4_ = 1;
  auStack_118._8_8_ = &TStack_108;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)auStack_118);
  if ((void *)TStack_108._s_0.X != (void *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  ::FString::FString((FString *)auStack_118,L"Two");
  TStack_108._s_0.X = (double)&TStackX_8;
  TStackX_8.Key._0_4_ = 2;
  TStack_108._s_0.Y = (double)auStack_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Three");
  TStack_108._s_0.X = (double)&TStackX_8;
  TStackX_8.Key._0_4_ = 3;
  TStack_108._s_0.Y = (double)auStack_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_128,L"All");
  ::FString::FString((FString *)auStack_118,L"StrAll");
  TStack_108._s_0.X = (double)auStack_118;
  TStack_108._s_0.Y = (double)auStack_128;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  if ((FScriptContainerElement *)auStack_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Your");
  ::FString::FString((FString *)&TStack_108._s_0,L"StrYour");
  auStack_128._0_8_ = &TStack_108;
  auStack_128._8_8_ = auStack_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)auStack_128);
  if ((undefined1 *)TStack_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Base");
  ::FString::FString((FString *)&TStack_108._s_0,L"StrBase");
  auStack_128._0_8_ = &TStack_108;
  auStack_128._8_8_ = auStack_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)auStack_128);
  if ((undefined1 *)TStack_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  TStack_108._s_0.Z = 0.0;
  TStack_108._s_0.X = 0.0;
  TStack_108._s_0.Y = 0.0;
  ::FString::FString((FString *)auStack_128,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  TStack_108._s_0.X = ___xmm_40000000000000003ff0000000000000;
  TStack_108._s_0.Y = _UNK_150744178;
  TStack_108._s_0.Z = __real_4008000000000000;
  ::FString::FString((FString *)auStack_128,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  TStack_108._s_0.X = ___xmm_40180000000000004018000000000000;
  TStack_108._s_0.Y = _UNK_151c790d8;
  TStack_108._s_0.Z = __real_4018000000000000;
  ::FString::FString((FString *)auStack_128,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_e8);
  ::FString::FString((FString *)auStack_128,L"StructOne");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>(this_00,(FString *)auStack_128,pFVar1);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  if (FStack_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_e8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.String.Data.AllocatorInstance.Data);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_e8);
  ::FString::FString((FString *)auStack_128,L"StructTwo");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>(this_00,(FString *)auStack_128,pFVar1);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  if (FStack_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_e8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.String.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FStructSerializerMapTestStruct> @ 148b85e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerMapTestStruct>(void *param_1)

{
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this;
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  *this_00;
  FStructSerializerBuiltinTestStruct *pFVar1;
  TPairInitializer<FString_&&,FString_&&> TStackX_8;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  TVector<double>_u_0 TStack_108;
  FStructSerializerBuiltinTestStruct FStack_e8;
  
  this = (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
          *)((longlong)param_1 + 0xa0);
  *(undefined8 *)param_1 = 0;
  this_00 = (TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
             *)((longlong)param_1 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)&(this->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)&(this_00->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  ::FString::FString((FString *)&TStack_108._s_0,L"One");
  auStack_118._0_8_ = &TStackX_8;
  TStackX_8.Key._0_4_ = 1;
  auStack_118._8_8_ = &TStack_108;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)auStack_118);
  if ((void *)TStack_108._s_0.X != (void *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  ::FString::FString((FString *)auStack_118,L"Two");
  TStack_108._s_0.X = (double)&TStackX_8;
  TStackX_8.Key._0_4_ = 2;
  TStack_108._s_0.Y = (double)auStack_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Three");
  TStack_108._s_0.X = (double)&TStackX_8;
  TStackX_8.Key._0_4_ = 3;
  TStack_108._s_0.Y = (double)auStack_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            (param_1,(TPairInitializer<int_&&,FString_&&> *)&TStackX_8.Value,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_128,L"All");
  ::FString::FString((FString *)auStack_118,L"StrAll");
  TStack_108._s_0.X = (double)auStack_118;
  TStack_108._s_0.Y = (double)auStack_128;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)&TStack_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  if ((FScriptContainerElement *)auStack_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Your");
  ::FString::FString((FString *)&TStack_108._s_0,L"StrYour");
  auStack_128._0_8_ = &TStack_108;
  auStack_128._8_8_ = auStack_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)auStack_128);
  if ((undefined1 *)TStack_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  ::FString::FString((FString *)auStack_118,L"Base");
  ::FString::FString((FString *)&TStack_108._s_0,L"StrBase");
  auStack_128._0_8_ = &TStack_108;
  auStack_128._8_8_ = auStack_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x50),&TStackX_8,(bool *)auStack_128);
  if ((undefined1 *)TStack_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)TStack_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)auStack_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  TStack_108._s_0.Z = 0.0;
  TStack_108._s_0.X = 0.0;
  TStack_108._s_0.Y = 0.0;
  ::FString::FString((FString *)auStack_128,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  TStack_108._s_0.X = ___xmm_40000000000000003ff0000000000000;
  TStack_108._s_0.Y = _UNK_150744178;
  TStack_108._s_0.Z = __real_4008000000000000;
  ::FString::FString((FString *)auStack_128,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  TStack_108._s_0.X = ___xmm_40180000000000004018000000000000;
  TStack_108._s_0.Y = _UNK_151c790d8;
  TStack_108._s_0.Z = __real_4018000000000000;
  ::FString::FString((FString *)auStack_128,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this,(FString *)auStack_128,(TVector<double> *)&TStack_108._s_0);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_e8);
  ::FString::FString((FString *)auStack_128,L"StructOne");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>(this_00,(FString *)auStack_128,pFVar1);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  if (FStack_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_e8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.String.Data.AllocatorInstance.Data);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&FStack_e8);
  ::FString::FString((FString *)auStack_128,L"StructTwo");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>(this_00,(FString *)auStack_128,pFVar1);
  if ((TVector<double>_u_0 *)auStack_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)auStack_128._0_8_);
  }
  if (FStack_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_e8.Text.TextData.Reference + 0x10))();
  }
  if (FStack_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.String.Data.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FStructSerializerMapTestStruct> @ 148b85e60

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerMapTestStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf0));
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FStructSerializerMapTestStruct> @ 148b85e70

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerMapTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    operator=(param_1,param_2);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x50),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x50));
    TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xa0),
                (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xa0));
    TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xf0),
                (TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xf0));
    param_2 = (void *)((longlong)param_2 + 0x140);
    param_1 = (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
               *)((longlong)param_1 + 0x140);
  }
  return true;
}

// Construct<FStructSerializerArrayTestStruct> @ 148b86580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerArrayTestStruct>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 auStack_66 [2];
  undefined4 uStack_64;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  iVar5 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,param_1,(int *)((longlong)param_1 + 0xc));
  uStack_64 = 0;
  *(int *)((longlong)param_1 + 8) = iVar5 + 1;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = 0xffffffff;
  if ((*(undefined4 **)param_1 <= &uStack_64) &&
     (&uStack_64 < *(undefined4 **)param_1 + *(int *)((longlong)param_1 + 0xc))) {
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
  piVar7 = (int *)((longlong)param_1 + 0xc);
  piVar6 = (int *)((longlong)param_1 + 8);
  iVar5 = *piVar6;
  if (iVar5 == *piVar7) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,param_1,(int *)((longlong)param_1 + 0xc));
    *piVar6 = iVar5;
  }
  *piVar6 = iVar5 + 1;
  auStack_60[0] = 1;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = uStack_64;
  if ((*(undefined4 **)param_1 <= auStack_60) && (auStack_60 < *(undefined4 **)param_1 + *piVar7)) {
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
  iVar5 = *piVar6;
  if (iVar5 == *piVar7) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,param_1,(int *)((longlong)param_1 + 0xc));
    *piVar6 = iVar5;
  }
  *piVar6 = iVar5 + 1;
  uStack_68 = 0;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = auStack_60[0];
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= &uStack_68) &&
     (&uStack_68 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  piVar6 = (int *)((longlong)param_1 + 0x1c);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  uStack_67 = 0x7f;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = uStack_68;
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= &uStack_67) &&
     (&uStack_67 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  auStack_66[0] = 0xff;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = uStack_67;
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= auStack_66) &&
     (auStack_66 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  uStack_50 = _UNK_150744178;
  uStack_58 = ___xmm_40000000000000003ff0000000000000;
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  uStack_48 = __real_4008000000000000;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = auStack_66[0];
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x2a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  if ((*(undefined8 **)((longlong)param_1 + 0x40) <= &uStack_58) &&
     (&uStack_58 <
      *(undefined8 **)((longlong)param_1 + 0x40) + (longlong)*(int *)((longlong)param_1 + 0x4c) * 3)
     ) {
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
  iVar5 = *(int *)((longlong)param_1 + 0x48);
  if (iVar5 == *(int *)((longlong)param_1 + 0x4c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x40),
                       (int *)((longlong)param_1 + 0x4c));
  }
  *(int *)((longlong)param_1 + 0x48) = iVar5 + 1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x40);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x18);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  uStack_38 = _UNK_15076c798;
  uStack_40 = ___xmm_c000000000000000bff0000000000000;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = uStack_48;
  uStack_30 = __real_c008000000000000;
  if ((*(undefined8 **)((longlong)param_1 + 0x40) <= &uStack_40) &&
     (&uStack_40 <
      *(undefined8 **)((longlong)param_1 + 0x40) + (longlong)*(int *)((longlong)param_1 + 0x4c) * 3)
     ) {
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
  iVar5 = *(int *)((longlong)param_1 + 0x48);
  if (iVar5 == *(int *)((longlong)param_1 + 0x4c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x40),
                       (int *)((longlong)param_1 + 0x4c));
  }
  *(int *)((longlong)param_1 + 0x48) = iVar5 + 1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x40);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x18);
  *puVar1 = uStack_40;
  puVar1[1] = uStack_38;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = uStack_30;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,2,(ForAnyElementType *)((longlong)param_1 + 0x50),
                     (int *)((longlong)param_1 + 0x58),(int *)((longlong)param_1 + 0x5c));
  DefaultConstructItems<FStructSerializerBuiltinTestStruct,int>
            ((void *)((longlong)iVar5 * 0xd0 + *(longlong *)((longlong)param_1 + 0x50)),2);
  return;
}

// ConstructForTests<FStructSerializerArrayTestStruct> @ 148b86590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerArrayTestStruct>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 auStack_66 [2];
  undefined4 uStack_64;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  iVar5 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,param_1,(int *)((longlong)param_1 + 0xc));
  uStack_64 = 0;
  *(int *)((longlong)param_1 + 8) = iVar5 + 1;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = 0xffffffff;
  if ((*(undefined4 **)param_1 <= &uStack_64) &&
     (&uStack_64 < *(undefined4 **)param_1 + *(int *)((longlong)param_1 + 0xc))) {
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
  piVar7 = (int *)((longlong)param_1 + 0xc);
  piVar6 = (int *)((longlong)param_1 + 8);
  iVar5 = *piVar6;
  if (iVar5 == *piVar7) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,param_1,(int *)((longlong)param_1 + 0xc));
    *piVar6 = iVar5;
  }
  *piVar6 = iVar5 + 1;
  auStack_60[0] = 1;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = uStack_64;
  if ((*(undefined4 **)param_1 <= auStack_60) && (auStack_60 < *(undefined4 **)param_1 + *piVar7)) {
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
  iVar5 = *piVar6;
  if (iVar5 == *piVar7) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,param_1,(int *)((longlong)param_1 + 0xc));
    *piVar6 = iVar5;
  }
  *piVar6 = iVar5 + 1;
  uStack_68 = 0;
  *(undefined4 *)(*(longlong *)param_1 + (longlong)iVar5 * 4) = auStack_60[0];
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= &uStack_68) &&
     (&uStack_68 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  piVar6 = (int *)((longlong)param_1 + 0x1c);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  uStack_67 = 0x7f;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = uStack_68;
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= &uStack_67) &&
     (&uStack_67 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  auStack_66[0] = 0xff;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = uStack_67;
  if ((*(undefined1 **)((longlong)param_1 + 0x10) <= auStack_66) &&
     (auStack_66 < *(undefined1 **)((longlong)param_1 + 0x10) + *(int *)((longlong)param_1 + 0x1c)))
  {
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
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  if (iVar5 == *(int *)((longlong)param_1 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x10),piVar6);
  }
  uStack_50 = _UNK_150744178;
  uStack_58 = ___xmm_40000000000000003ff0000000000000;
  *(int *)((longlong)param_1 + 0x18) = iVar5 + 1;
  uStack_48 = __real_4008000000000000;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)((longlong)param_1 + 0x10)) = auStack_66[0];
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x2a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  if ((*(undefined8 **)((longlong)param_1 + 0x40) <= &uStack_58) &&
     (&uStack_58 <
      *(undefined8 **)((longlong)param_1 + 0x40) + (longlong)*(int *)((longlong)param_1 + 0x4c) * 3)
     ) {
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
  iVar5 = *(int *)((longlong)param_1 + 0x48);
  if (iVar5 == *(int *)((longlong)param_1 + 0x4c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x40),
                       (int *)((longlong)param_1 + 0x4c));
  }
  *(int *)((longlong)param_1 + 0x48) = iVar5 + 1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x40);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x18);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  uStack_38 = _UNK_15076c798;
  uStack_40 = ___xmm_c000000000000000bff0000000000000;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = uStack_48;
  uStack_30 = __real_c008000000000000;
  if ((*(undefined8 **)((longlong)param_1 + 0x40) <= &uStack_40) &&
     (&uStack_40 <
      *(undefined8 **)((longlong)param_1 + 0x40) + (longlong)*(int *)((longlong)param_1 + 0x4c) * 3)
     ) {
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
  iVar5 = *(int *)((longlong)param_1 + 0x48);
  if (iVar5 == *(int *)((longlong)param_1 + 0x4c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x40),
                       (int *)((longlong)param_1 + 0x4c));
  }
  *(int *)((longlong)param_1 + 0x48) = iVar5 + 1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x40);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x18);
  *puVar1 = uStack_40;
  puVar1[1] = uStack_38;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = uStack_30;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,2,(ForAnyElementType *)((longlong)param_1 + 0x50),
                     (int *)((longlong)param_1 + 0x58),(int *)((longlong)param_1 + 0x5c));
  DefaultConstructItems<FStructSerializerBuiltinTestStruct,int>
            ((void *)((longlong)iVar5 * 0xd0 + *(longlong *)((longlong)param_1 + 0x50)),2);
  return;
}

// Destruct<FStructSerializerArrayTestStruct> @ 148b865a0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerArrayTestStruct>(void *param_1)

{
  DestructItems<FStructSerializerBuiltinTestStruct,int>
            (*(FStructSerializerBuiltinTestStruct **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FStructSerializerArrayTestStruct> @ 148b86600

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerArrayTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  FStructSerializerBuiltinTestStruct *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar7);
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        _Src = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,iVar5,pFVar7,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar7->Data,_Src,(longlong)iVar4 << 2);
          }
        }
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar7 + 2),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar3 + 2));
      *(undefined4 *)&pFVar7[4].Data = *(undefined4 *)&pFVar3[4].Data;
      *(undefined4 *)((longlong)&pFVar7[4].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[4].Data + 4);
      *(undefined4 *)&pFVar7[5].Data = *(undefined4 *)&pFVar3[5].Data;
      *(undefined4 *)((longlong)&pFVar7[5].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[5].Data + 4);
      *(undefined4 *)&pFVar7[6].Data = *(undefined4 *)&pFVar3[6].Data;
      *(undefined4 *)((longlong)&pFVar7[6].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[6].Data + 4);
      *(undefined4 *)&pFVar7[7].Data = *(undefined4 *)&pFVar3[7].Data;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pFVar7 + 8),
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pFVar3 + 8));
      pFVar2 = pFVar7 + 10;
      if (pFVar2 != pFVar3 + 10) {
        DestructItems<FStructSerializerBuiltinTestStruct,int>
                  ((FStructSerializerBuiltinTestStruct *)pFVar2->Data,*(int *)&pFVar7[0xb].Data);
        iVar4 = *(int *)&pFVar3[0xb].Data;
        piVar1 = (int *)((longlong)&pFVar7[0xb].Data + 4);
        pFVar6 = (FStructSerializerBuiltinTestStruct *)pFVar3[10].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[0xb].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FStructSerializerBuiltinTestStruct,FStructSerializerBuiltinTestStruct,int>
                    (pFVar2->Data,pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStructSerializerByteArray> @ 148b86860

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerByteArray>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 auStack_24 [12];
  
  *(undefined4 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 2;
  *(undefined4 *)((longlong)param_1 + 0x30) = 3;
  iVar3 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                     (int *)((longlong)param_1 + 0x14));
  uStack_28 = 0x7f;
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = 0;
  if ((*(undefined1 **)((longlong)param_1 + 8) <= &uStack_28) &&
     (&uStack_28 < *(undefined1 **)((longlong)param_1 + 8) + *(int *)((longlong)param_1 + 0x14))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 == *(int *)((longlong)param_1 + 0x14)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                       (int *)((longlong)param_1 + 0x14));
  }
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  uStack_27 = 0xff;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = uStack_28;
  if ((*(undefined1 **)((longlong)param_1 + 8) <= &uStack_27) &&
     (&uStack_27 < *(undefined1 **)((longlong)param_1 + 8) + *(int *)((longlong)param_1 + 0x14))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 == *(int *)((longlong)param_1 + 0x14)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                       (int *)((longlong)param_1 + 0x14));
    *(int *)((longlong)param_1 + 0x10) = iVar3;
  }
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  uStack_26 = 0x80;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = uStack_27;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= &uStack_26) &&
     (&uStack_26 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  uStack_25 = 0;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = uStack_26;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= &uStack_25) &&
     (&uStack_25 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  auStack_24[0] = 0x7f;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = uStack_25;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= auStack_24) &&
     (auStack_24 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = auStack_24[0];
  return;
}

// ConstructForTests<FStructSerializerByteArray> @ 148b86870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStructSerializerByteArray>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 auStack_24 [12];
  
  *(undefined4 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 2;
  *(undefined4 *)((longlong)param_1 + 0x30) = 3;
  iVar3 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                     (int *)((longlong)param_1 + 0x14));
  uStack_28 = 0x7f;
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = 0;
  if ((*(undefined1 **)((longlong)param_1 + 8) <= &uStack_28) &&
     (&uStack_28 < *(undefined1 **)((longlong)param_1 + 8) + *(int *)((longlong)param_1 + 0x14))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 == *(int *)((longlong)param_1 + 0x14)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                       (int *)((longlong)param_1 + 0x14));
  }
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  uStack_27 = 0xff;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = uStack_28;
  if ((*(undefined1 **)((longlong)param_1 + 8) <= &uStack_27) &&
     (&uStack_27 < *(undefined1 **)((longlong)param_1 + 8) + *(int *)((longlong)param_1 + 0x14))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 == *(int *)((longlong)param_1 + 0x14)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 8),
                       (int *)((longlong)param_1 + 0x14));
    *(int *)((longlong)param_1 + 0x10) = iVar3;
  }
  *(int *)((longlong)param_1 + 0x10) = iVar3 + 1;
  uStack_26 = 0x80;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 8)) = uStack_27;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= &uStack_26) &&
     (&uStack_26 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  uStack_25 = 0;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = uStack_26;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= &uStack_25) &&
     (&uStack_25 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  auStack_24[0] = 0x7f;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = uStack_25;
  if ((*(undefined1 **)((longlong)param_1 + 0x20) <= auStack_24) &&
     (auStack_24 < *(undefined1 **)((longlong)param_1 + 0x20) + *(int *)((longlong)param_1 + 0x2c)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  if (iVar3 == *(int *)((longlong)param_1 + 0x2c)) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)((longlong)param_1 + 0x20),
                       (int *)((longlong)param_1 + 0x2c));
  }
  *(int *)((longlong)param_1 + 0x28) = iVar3 + 1;
  *(undefined1 *)((longlong)iVar3 + *(longlong *)((longlong)param_1 + 0x20)) = auStack_24[0];
  return;
}

// Destruct<FStructSerializerByteArray> @ 148b86880

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerByteArray>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FStructSerializerByteArray> @ 148b868c0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerByteArray>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
        iVar4 = *(int *)((longlong)param_2 + 0x28);
        piVar2 = (int *)((longlong)param_1 + 0x2c);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
        *(int *)((longlong)param_1 + 0x28) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4);
          }
        }
      }
      puVar3 = (undefined4 *)((longlong)param_2 + 0x30);
      param_2 = (void *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x30) = *puVar3;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStructSerializerNonLWCTypesTest> @ 148b86a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerNonLWCTypesTest>(void *param_1)

{
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *this;
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStackX_8 [16];
  TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> TStackX_18;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  bool abStack_ac [12];
  FString *pFStack_a0;
  undefined8 *puStack_98;
  FString FStack_90;
  FString *pFStack_80;
  undefined4 *puStack_78;
  FString FStack_70;
  FString *pFStack_60;
  undefined4 *puStack_58;
  FString aFStack_50 [2];
  
  uVar5 = _UNK_15076c058;
  uVar4 = ___xmm_4080000040400000400000003f800000;
  *(undefined4 *)param_1 = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40700000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar5;
  this = (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
          *)((longlong)param_1 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40100000;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x168);
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40600000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40700000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x40500000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x40880000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40b00000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x40d00000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x40e80000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x41040000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x41140000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40500000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x40100000;
  *(__m128 *)((longlong)param_1 + 0xb0) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0xc0) = GlobalVectorConstants::Float1110;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x40e00000;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  uStack_e0 = 0x41200000;
  uStack_dc = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x41a0000041200000;
  uStack_d8 = 0x41f00000;
  uStack_d4 = 0x42200000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x4220000041f00000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x40a80000;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0x3ff1d2f1a9fbe76d;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)
   &((TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
      *)((longlong)param_1 + 0x1c8))->Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41f00000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x40000000;
  uStack_f0 = 0x40400000;
  if ((pFVar1->Data <= (FScriptContainerElement *)&uStack_f8) &&
     ((FScriptContainerElement *)&uStack_f8 <
      pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 0x174) * 0xc)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x170);
  if (iVar7 == *(int *)((longlong)param_1 + 0x174)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)((longlong)param_1 + 0x174));
  }
  *(int *)((longlong)param_1 + 0x170) = iVar7 + 1;
  pFVar2 = pFVar1->Data;
  uStack_ec = 0xbf800000;
  uStack_e8 = 0xc0000000;
  uStack_e4 = 0xc0400000;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_f4,uStack_f8);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = uStack_f0;
  if ((pFVar1->Data <= (FScriptContainerElement *)&uStack_ec) &&
     ((FScriptContainerElement *)&uStack_ec <
      pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 0x174) * 0xc)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x170);
  if (iVar7 == *(int *)((longlong)param_1 + 0x174)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)((longlong)param_1 + 0x174));
  }
  *(int *)((longlong)param_1 + 0x170) = iVar7 + 1;
  pFVar2 = pFVar1->Data;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_e8,uStack_ec);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = uStack_e4;
  ::FString::FString(&FStack_90,L"V000");
  pFStack_a0 = &FStack_90;
  puStack_98 = &uStack_d0;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)auStackX_8,
             (bool *)&pFStack_a0);
  if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
  }
  uStack_c4 = 0x3f800000;
  uStack_c0 = 0x40000000;
  uStack_bc = 0x40400000;
  ::FString::FString(&FStack_70,L"V123");
  pFStack_80 = &FStack_70;
  puStack_78 = &uStack_c4;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)(auStackX_8 + 8),
             (bool *)&pFStack_80);
  if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
  }
  uStack_b8 = 0x40c00000;
  uStack_b4 = 0x40c00000;
  uStack_b0 = 0x40c00000;
  ::FString::FString(aFStack_50,L"V666");
  pFStack_60 = aFStack_50;
  puStack_58 = &uStack_b8;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,&TStackX_18,(bool *)&pFStack_60);
  if (aFStack_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_50[0].Data.AllocatorInstance.Data);
  }
  abStack_ac[0] = false;
  abStack_ac[1] = false;
  abStack_ac[2] = true;
  abStack_ac[3] = true;
  abStack_ac[4] = false;
  abStack_ac[5] = false;
  abStack_ac[6] = true;
  abStack_ac[7] = true;
  abStack_ac[8] = false;
  abStack_ac[9] = false;
  abStack_ac[10] = true;
  abStack_ac[0xb] = true;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
  Emplace<UE::Math::TVector<float>_>
            ((TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x1c8),(TVector<float> *)&TStackX_18.Value,abStack_ac);
  return;
}

// ConstructForTests<FStructSerializerNonLWCTypesTest> @ 148b86a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerNonLWCTypesTest>(void *param_1)

{
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *this;
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStackX_8 [16];
  TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> TStackX_18;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  bool abStack_ac [12];
  FString *pFStack_a0;
  undefined8 *puStack_98;
  FString FStack_90;
  FString *pFStack_80;
  undefined4 *puStack_78;
  FString FStack_70;
  FString *pFStack_60;
  undefined4 *puStack_58;
  FString aFStack_50 [2];
  
  uVar5 = _UNK_15076c058;
  uVar4 = ___xmm_4080000040400000400000003f800000;
  *(undefined4 *)param_1 = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40700000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar5;
  this = (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
          *)((longlong)param_1 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40100000;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x168);
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40600000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40700000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x40500000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x40880000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40b00000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x40d00000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x40e80000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x41040000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x41140000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40500000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x40100000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x40100000;
  *(__m128 *)((longlong)param_1 + 0xb0) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0xc0) = GlobalVectorConstants::Float1110;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x40e00000;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  uStack_e0 = 0x41200000;
  uStack_dc = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x41a0000041200000;
  uStack_d8 = 0x41f00000;
  uStack_d4 = 0x42200000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x4220000041f00000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x40a80000;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0x3ff1d2f1a9fbe76d;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)
   &((TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
      *)((longlong)param_1 + 0x1c8))->Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41f00000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x40000000;
  uStack_f0 = 0x40400000;
  if ((pFVar1->Data <= (FScriptContainerElement *)&uStack_f8) &&
     ((FScriptContainerElement *)&uStack_f8 <
      pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 0x174) * 0xc)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x170);
  if (iVar7 == *(int *)((longlong)param_1 + 0x174)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)((longlong)param_1 + 0x174));
  }
  *(int *)((longlong)param_1 + 0x170) = iVar7 + 1;
  pFVar2 = pFVar1->Data;
  uStack_ec = 0xbf800000;
  uStack_e8 = 0xc0000000;
  uStack_e4 = 0xc0400000;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_f4,uStack_f8);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = uStack_f0;
  if ((pFVar1->Data <= (FScriptContainerElement *)&uStack_ec) &&
     ((FScriptContainerElement *)&uStack_ec <
      pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 0x174) * 0xc)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x170);
  if (iVar7 == *(int *)((longlong)param_1 + 0x174)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)((longlong)param_1 + 0x174));
  }
  *(int *)((longlong)param_1 + 0x170) = iVar7 + 1;
  pFVar2 = pFVar1->Data;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_e8,uStack_ec);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = uStack_e4;
  ::FString::FString(&FStack_90,L"V000");
  pFStack_a0 = &FStack_90;
  puStack_98 = &uStack_d0;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)auStackX_8,
             (bool *)&pFStack_a0);
  if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
  }
  uStack_c4 = 0x3f800000;
  uStack_c0 = 0x40000000;
  uStack_bc = 0x40400000;
  ::FString::FString(&FStack_70,L"V123");
  pFStack_80 = &FStack_70;
  puStack_78 = &uStack_c4;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)(auStackX_8 + 8),
             (bool *)&pFStack_80);
  if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
  }
  uStack_b8 = 0x40c00000;
  uStack_b4 = 0x40c00000;
  uStack_b0 = 0x40c00000;
  ::FString::FString(aFStack_50,L"V666");
  pFStack_60 = aFStack_50;
  puStack_58 = &uStack_b8;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            (this,&TStackX_18,(bool *)&pFStack_60);
  if (aFStack_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_50[0].Data.AllocatorInstance.Data);
  }
  abStack_ac[0] = false;
  abStack_ac[1] = false;
  abStack_ac[2] = true;
  abStack_ac[3] = true;
  abStack_ac[4] = false;
  abStack_ac[5] = false;
  abStack_ac[6] = true;
  abStack_ac[7] = true;
  abStack_ac[8] = false;
  abStack_ac[9] = false;
  abStack_ac[10] = true;
  abStack_ac[0xb] = true;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
  Emplace<UE::Math::TVector<float>_>
            ((TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x1c8),(TVector<float> *)&TStackX_18.Value,abStack_ac);
  return;
}

// Destruct<FStructSerializerNonLWCTypesTest> @ 148b86a70

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerNonLWCTypesTest>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  if (*(void **)((longlong)param_1 + 0x208) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x208));
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1c8));
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  if (*(void **)((longlong)param_1 + 0x1b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b8));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x178));
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  return;
}

// Copy<FStructSerializerNonLWCTypesTest> @ 148b86ac0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerNonLWCTypesTest>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int iVar6;
  FScriptContainerElement *_Src;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = param_1;
  puVar9 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar3 = (ForAnyElementType *)
             ((longlong)puVar8 + (longlong)param_2 + (0x168 - (longlong)param_1));
    *puVar8 = *puVar9;
    pFVar4 = (ForAnyElementType *)(puVar8 + 0x2d);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
    *(undefined8 *)((longlong)puVar8 + 0xc) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xc - (longlong)param_1));
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x28 - (longlong)param_1));
    puVar8[4] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar8[5] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x38 - (longlong)param_1));
    puVar8[6] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar8[7] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x48 - (longlong)param_1));
    puVar8[8] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x40 - (longlong)param_1));
    puVar8[9] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x58 - (longlong)param_1));
    puVar8[10] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x50 - (longlong)param_1));
    puVar8[0xb] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x68 - (longlong)param_1));
    puVar8[0xc] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x60 - (longlong)param_1))
    ;
    puVar8[0xd] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x78 - (longlong)param_1));
    puVar8[0xe] = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x70 - (longlong)param_1))
    ;
    puVar8[0xf] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x88 - (longlong)param_1));
    puVar8[0x10] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0x80 - (longlong)param_1));
    puVar8[0x11] = uVar7;
    puVar8[0x12] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined4 *)(puVar8 + 0x13) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x98 - (longlong)param_1));
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    puVar8[0x14] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    puVar8[0x15] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    puVar8[0x16] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    puVar8[0x17] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (200 - (longlong)param_1));
    puVar8[0x18] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    puVar8[0x19] = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    puVar8[0x1a] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    puVar8[0x1b] = uVar7;
    puVar8[0x1c] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0xe0 - (longlong)param_1));
    *(undefined4 *)(puVar8 + 0x1d) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xf4 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0xec) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xec - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0xf4) = uVar7;
    *(undefined4 *)((longlong)puVar8 + 0xfc) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0xfc - (longlong)param_1));
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x108 - (longlong)param_1));
    puVar8[0x20] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0x100 - (longlong)param_1));
    puVar8[0x21] = uVar7;
    puVar8[0x22] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0x110 - (longlong)param_1));
    *(undefined4 *)(puVar8 + 0x23) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x118 - (longlong)param_1));
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x124 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0x11c) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x11c - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0x124) = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x134 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 300) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (300 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0x134) = uVar7;
    uVar7 = *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x144 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0x13c) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x13c - (longlong)param_1));
    *(undefined8 *)((longlong)puVar8 + 0x144) = uVar7;
    *(undefined8 *)((longlong)puVar8 + 0x14c) =
         *(undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0x14c - (longlong)param_1));
    *(undefined4 *)((longlong)puVar8 + 0x154) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x154 - (longlong)param_1));
    *(undefined4 *)(puVar8 + 0x2b) =
         *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x158 - (longlong)param_1));
    puVar8[0x2c] = *(undefined8 *)
                    ((longlong)puVar8 + (longlong)param_2 + (0x160 - (longlong)param_1));
    if (pFVar4 != pFVar3) {
      iVar6 = *(int *)((longlong)puVar8 + (longlong)param_2 + (0x170 - (longlong)param_1));
      piVar1 = (int *)((longlong)puVar8 + 0x174);
      _Src = pFVar3->Data;
      *(int *)(puVar8 + 0x2e) = iVar6;
      if ((iVar6 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar6,*piVar1,pFVar4,iVar6,piVar1);
        if (iVar6 != 0) {
          memcpy(pFVar4->Data,_Src,(longlong)iVar6 * 0xc);
        }
      }
    }
    TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                 *)(puVar8 + 0x2f),
                (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                 *)((longlong)puVar8 + (longlong)param_2 + (0x178 - (longlong)param_1)));
    pTVar5 = (TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)puVar8 + (longlong)param_2 + (0x1c8 - (longlong)param_1));
    this = (TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)(puVar8 + 0x39);
    if (this != pTVar5) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(puVar8 + 0x40),(int *)(puVar8 + 0x42),
                 (ForElementType<FSetElementId> *)
                 ((longlong)puVar8 + (longlong)param_2 + (0x200 - (longlong)param_1)),
                 *(int *)((longlong)puVar8 + (longlong)param_2 + (0x210 - (longlong)param_1)));
      iVar6 = *(int *)((longlong)puVar8 + (longlong)param_2 + (0x1d0 - (longlong)param_1));
      TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar6);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar6,(ForAnyElementType *)this,(int *)(puVar8 + 0x3a),
                 (int *)((longlong)puVar8 + 0x1d4));
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar8 + (longlong)param_2 + (0x1d8 - (longlong)param_1));
      *(undefined4 *)(puVar8 + 0x3f) =
           *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x1f8 - (longlong)param_1));
      *(undefined4 *)((longlong)puVar8 + 0x1fc) =
           *(undefined4 *)((longlong)puVar8 + (longlong)param_2 + (0x1fc - (longlong)param_1));
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar8 + 0x3b) != pTVar2) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar8 + 0x3b),pTVar2);
      }
      if (iVar6 != 0) {
        memcpy(*(void **)this,*(void **)pTVar5,(longlong)iVar6 * 0x14);
      }
    }
    puVar8 = puVar8 + 0x44;
    puVar9 = puVar9 + 0x44;
  }
  return true;
}

// Construct<FOrientedBoxFloat> @ 148b871a0

void __cdecl UE::CoreUObject::Private::Construct<FOrientedBoxFloat>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  return;
}

// ConstructForTests<FOrientedBoxFloat> @ 148b871f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOrientedBoxFloat>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  return;
}

// Destruct<FOrientedBoxFloat> @ 148b87240

void __cdecl UE::CoreUObject::Private::Destruct<FOrientedBoxFloat>(void *param_1)

{
  return;
}

// Copy<FOrientedBoxFloat> @ 148b87250

bool __cdecl
UE::CoreUObject::Private::Copy<FOrientedBoxFloat>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar9 + 0x38 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x38) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x3c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStructSerializerLWCTypesTest> @ 148b873e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerLWCTypesTest>(void *param_1)

{
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this_00;
  ForAnyElementType *pFVar1;
  uchar *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  double *pdVar19;
  FScriptContainerElement *pFVar20;
  double *pdVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uStack_138;
  uint uStack_134;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  FString FStack_c0;
  FString FStack_b0;
  FString FStack_a0;
  FSparseArrayAllocationInfo FStack_90;
  TVector<double>_u_0 TStack_80;
  TVector<double>_u_0 TStack_68;
  TVector<double>_u_0 TStack_50;
  
  uVar11 = _UNK_15076bb88;
  uVar10 = ___xmm_40100000000000004008000000000000;
  dStack_110 = _UNK_150744178;
  dStack_118 = ___xmm_40000000000000003ff0000000000000;
  *(undefined8 *)param_1 = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  pdVar21 = (double *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x400c000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4004000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4011000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x400e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x4016000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x401a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x401d000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x4020800000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x4022800000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3fd0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0x3fd0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x400e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0x3fe8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x4004000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x400a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x400a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x3ff0000000000000;
  *(double *)((longlong)param_1 + 0x130) = dStack_118;
  *(double *)((longlong)param_1 + 0x138) = dStack_110;
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar10;
  *(undefined8 *)((longlong)param_1 + 0x148) = uVar11;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x150) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x158) = (double)fVar6;
  *(double *)((longlong)param_1 + 0x160) = (double)fVar7;
  *(double *)((longlong)param_1 + 0x168) = (double)fVar8;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x170) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x178) = (double)fVar6;
  *(double *)((longlong)param_1 + 0x180) = (double)fVar7;
  *(double *)((longlong)param_1 + 0x188) = (double)fVar8;
  *(undefined8 *)((longlong)param_1 + 400) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x4014000000000000;
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 1;
  this = (TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)((longlong)param_1 + 0x310);
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x4018000000000000;
  this_00 = (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
             *)((longlong)param_1 + 0x2c0);
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x401c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0x4044000000000000;
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0x4024000000000000;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x2b0);
  *(undefined8 *)((longlong)param_1 + 0x220) = 0x4034000000000000;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)&(this_00->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0x3ff1d2f1a9fbe76d;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0x40a80000;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined4 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 600) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0x4014000000000000;
  dVar9 = __real_4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0x403e000000000000;
  dStack_108 = dVar9;
  if (((pFVar1->Data <= (FScriptContainerElement *)&dStack_118) &&
      ((FScriptContainerElement *)&dStack_118 <
       pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 700) * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = *(int *)((longlong)param_1 + 0x2b8);
  if (iVar13 == *(int *)((longlong)param_1 + 700)) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar1,(int *)((longlong)param_1 + 700));
  }
  *(int *)((longlong)param_1 + 0x2b8) = iVar13 + 1;
  pFVar4 = pFVar1->Data;
  pFVar20 = pFVar4 + (longlong)iVar13 * 0x18;
  *(double *)pFVar20 = dStack_118;
  *(double *)(pFVar20 + 8) = dStack_110;
  uStack_f8 = _UNK_15076c798;
  uStack_100 = ___xmm_c000000000000000bff0000000000000;
  *(double *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = dStack_108;
  uStack_f0 = __real_c008000000000000;
  if (((pFVar1->Data <= (FScriptContainerElement *)&uStack_100) &&
      ((FScriptContainerElement *)&uStack_100 <
       pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 700) * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = *(int *)((longlong)param_1 + 0x2b8);
  if (iVar13 == *(int *)((longlong)param_1 + 700)) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar1,(int *)((longlong)param_1 + 700));
  }
  *(int *)((longlong)param_1 + 0x2b8) = iVar13 + 1;
  pFVar4 = pFVar1->Data;
  pFVar20 = pFVar4 + (longlong)iVar13 * 0x18;
  *(undefined8 *)pFVar20 = uStack_100;
  *(undefined8 *)(pFVar20 + 8) = uStack_f8;
  *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = uStack_f0;
  TStack_80._s_0.Z = 0.0;
  TStack_80._s_0.X = 0.0;
  TStack_80._s_0.Y = 0.0;
  ::FString::FString(&FStack_c0,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_c0,(TVector<double> *)&TStack_80._s_0);
  if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
  }
  TStack_68._s_0.Z = dVar9;
  TStack_68._s_0.X = ___xmm_40000000000000003ff0000000000000;
  TStack_68._s_0.Y = _UNK_150744178;
  ::FString::FString(&FStack_b0,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_b0,(TVector<double> *)&TStack_68._s_0);
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  TStack_50._s_0.X = ___xmm_40180000000000004018000000000000;
  TStack_50._s_0.Y = _UNK_151c790d8;
  TStack_50._s_0.Z = __real_4018000000000000;
  ::FString::FString(&FStack_a0,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_a0,(TVector<double> *)&TStack_50._s_0);
  if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
  }
  if (*(int *)((longlong)param_1 + 0x344) == 0) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x318),
                        (int *)((longlong)param_1 + 0x31c));
    iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800),1);
    uVar15 = iVar14 >> 0x1f & 0x1f;
    iVar14 = iVar14 + uVar15;
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800);
    }
    puVar2 = (pTVar22->AllocatorInstance).InlineData + (longlong)(iVar14 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 & ~(1 << (((byte)iVar14 & 0x1f) - (char)uVar15 & 0x1f));
  }
  else {
    iVar13 = *(int *)((longlong)param_1 + 0x340);
    pFVar20 = (this->Data).AllocatorInstance.Data;
    iVar3 = *(int *)(pFVar20 + (longlong)iVar13 * 0x20 + 4);
    iVar14 = *(int *)((longlong)param_1 + 0x344) + -1;
    *(int *)((longlong)param_1 + 0x340) = iVar3;
    *(int *)((longlong)param_1 + 0x344) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(pFVar20 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&FStack_90,iVar13);
  pdVar19 = pdVar21;
  if (FStack_90.Pointer != (double *)0x0) {
    *(double *)FStack_90.Pointer = 10.0;
    *(double *)((longlong)FStack_90.Pointer + 8) = 11.0;
    *(double *)((longlong)FStack_90.Pointer + 0x10) = 12.0;
    *(undefined4 *)((longlong)FStack_90.Pointer + 0x18) = 0xffffffff;
    pdVar19 = FStack_90.Pointer;
  }
  uVar15 = FCrc::MemCrc_DEPRECATED(pdVar19,0x18,0);
  if ((*(int *)((longlong)param_1 + 0x318) - *(int *)((longlong)param_1 + 0x344) != 1) &&
     (*(int *)((longlong)param_1 + 0x318) != *(int *)((longlong)param_1 + 0x344))) {
    lVar16 = *(longlong *)((longlong)param_1 + 0x350);
    if (*(longlong *)((longlong)param_1 + 0x350) == 0) {
      lVar16 = (longlong)param_1 + 0x348;
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)(*(int *)((longlong)param_1 + 0x358) - 1U & uVar15) * 4);
    if (iVar13 != -1) {
      pFVar20 = (this->Data).AllocatorInstance.Data;
      do {
        lVar16 = (longlong)iVar13 * 0x20;
        if (((*pdVar19 == *(double *)(pFVar20 + lVar16)) &&
            (pdVar19[1] == *(double *)(pFVar20 + lVar16 + 8))) &&
           (pdVar19[2] == *(double *)(pFVar20 + lVar16 + 0x10))) {
          if (iVar13 != -1) {
            memmove((this->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x20,pdVar19,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,FStack_90.Index,1);
            return;
          }
          break;
        }
        iVar13 = *(int *)(pFVar20 + lVar16 + 0x18);
      } while (iVar13 != -1);
    }
  }
  uVar24 = 1;
  uVar18 = *(int *)((longlong)param_1 + 0x318) - *(int *)((longlong)param_1 + 0x344);
  if (3 < uVar18) {
    uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar24 <= *(int *)((longlong)param_1 + 0x358))) {
    uVar15 = *(int *)((longlong)param_1 + 0x358) - 1U & uVar15;
    *(uint *)((longlong)pdVar19 + 0x1c) = uVar15;
    lVar16 = *(longlong *)((longlong)param_1 + 0x350);
    if (*(longlong *)((longlong)param_1 + 0x350) == 0) {
      lVar16 = (longlong)param_1 + 0x348;
    }
    uVar23 = (longlong)*(int *)((longlong)param_1 + 0x358) - 1U & (longlong)(int)uVar15;
    *(undefined4 *)(pdVar19 + 3) = *(undefined4 *)(lVar16 + uVar23 * 4);
    *(int *)(lVar16 + uVar23 * 4) = FStack_90.Index;
    return;
  }
  *(uint *)((longlong)param_1 + 0x358) = uVar24;
  if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x350),0,0,4);
  }
  if (uVar24 == 0) goto LAB_148b9d9a5;
  uVar15 = uVar24;
  if (uVar24 < 2) {
    if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
      uVar15 = 0;
      goto LAB_148b9d953;
    }
  }
  else {
LAB_148b9d953:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x350),0,uVar15,4);
  }
  if (0 < (int)uVar24) {
    uVar23 = (ulonglong)uVar24;
    pdVar19 = pdVar21;
    do {
      lVar16 = (longlong)param_1 + 0x348;
      if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
        lVar16 = *(longlong *)((longlong)param_1 + 0x350);
      }
      uVar17 = (ulonglong)pdVar19 & (longlong)(int)uVar24 - 1U;
      pdVar19 = (double *)((longlong)pdVar19 + 1);
      *(undefined4 *)(lVar16 + uVar17 * 4) = 0xffffffff;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
LAB_148b9d9a5:
  if (*(int *)((longlong)param_1 + 0x358) != 0) {
    uVar15 = *(uint *)((longlong)param_1 + 0x338);
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800);
    uStack_138 = 0;
    uStack_134 = 1;
    uStack_124 = 0;
    uStack_120 = 0;
    if (uVar15 != 0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = TStack_e0.Array;
      }
      uVar18 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
      pdVar19 = pdVar21;
      while (uVar18 == 0) {
        iVar13 = (int)pdVar21;
        uStack_120 = (int)pdVar19 + 0x20;
        pdVar19 = (double *)(ulonglong)uStack_120;
        uStack_138 = iVar13 + 1;
        pdVar21 = (double *)(ulonglong)uStack_138;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
        goto LAB_148b9da50;
        uVar18 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar13 * 4 + 4);
      }
      uStack_134 = -uVar18 & uVar18;
      uVar23 = (ulonglong)uStack_134 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uStack_124 = (int)lVar16 + -1 + uStack_120;
      pdVar21 = (double *)(ulonglong)uStack_124;
      if ((int)uVar15 < (int)uStack_124) {
LAB_148b9da50:
        pdVar21 = (double *)(ulonglong)uVar15;
        uStack_124 = uVar15;
      }
    }
    TStack_e0._padding_._0_4_ = uStack_138;
    TStack_e0._padding_._4_4_ = uStack_134;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_124;
    TStack_e0._28_4_ = uStack_11c;
    TStack_e0.BaseBitIndex = uStack_120;
    if ((int)pdVar21 < (int)uVar15) {
      pTStack_e8 = this;
      do {
        pFVar20 = (pTStack_e8->Data).AllocatorInstance.Data + (longlong)(int)pdVar21 * 0x20;
        uVar15 = FCrc::MemCrc_DEPRECATED(pFVar20,0x18,0);
        uVar15 = *(int *)((longlong)param_1 + 0x358) - 1U & uVar15;
        *(uint *)(pFVar20 + 0x1c) = uVar15;
        lVar16 = (longlong)param_1 + 0x348;
        if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
          lVar16 = *(longlong *)((longlong)param_1 + 0x350);
        }
        uVar23 = (longlong)*(int *)((longlong)param_1 + 0x358) - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar20 + 0x18) = *(undefined4 *)(lVar16 + uVar23 * 4);
        *(int *)(lVar16 + uVar23 * 4) = (int)pdVar21;
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
        pdVar21 = (double *)(ulonglong)(uint)TStack_e0.CurrentBitIndex;
      } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
    }
  }
  return;
}

// ConstructForTests<FStructSerializerLWCTypesTest> @ 148b873f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerLWCTypesTest>(void *param_1)

{
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this_00;
  ForAnyElementType *pFVar1;
  uchar *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  double *pdVar19;
  FScriptContainerElement *pFVar20;
  double *pdVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uStack_138;
  uint uStack_134;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  FString FStack_c0;
  FString FStack_b0;
  FString FStack_a0;
  FSparseArrayAllocationInfo FStack_90;
  TVector<double>_u_0 TStack_80;
  TVector<double>_u_0 TStack_68;
  TVector<double>_u_0 TStack_50;
  
  uVar11 = _UNK_15076bb88;
  uVar10 = ___xmm_40100000000000004008000000000000;
  dStack_110 = _UNK_150744178;
  dStack_118 = ___xmm_40000000000000003ff0000000000000;
  *(undefined8 *)param_1 = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  pdVar21 = (double *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x400c000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4004000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4011000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x400e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x4016000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x401a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x401d000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x4020800000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x4022800000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3fd0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0x3fd0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x400e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0x3fe8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff4000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0x4002000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x4004000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x400a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x400a000000000000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x3ff0000000000000;
  *(double *)((longlong)param_1 + 0x130) = dStack_118;
  *(double *)((longlong)param_1 + 0x138) = dStack_110;
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar10;
  *(undefined8 *)((longlong)param_1 + 0x148) = uVar11;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x150) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x158) = (double)fVar6;
  *(double *)((longlong)param_1 + 0x160) = (double)fVar7;
  *(double *)((longlong)param_1 + 0x168) = (double)fVar8;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x170) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x178) = (double)fVar6;
  *(double *)((longlong)param_1 + 0x180) = (double)fVar7;
  *(double *)((longlong)param_1 + 0x188) = (double)fVar8;
  *(undefined8 *)((longlong)param_1 + 400) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x4014000000000000;
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 1;
  this = (TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)((longlong)param_1 + 0x310);
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x4018000000000000;
  this_00 = (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
             *)((longlong)param_1 + 0x2c0);
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x401c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0x4044000000000000;
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0x4024000000000000;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x2b0);
  *(undefined8 *)((longlong)param_1 + 0x220) = 0x4034000000000000;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)&(this_00->Pairs).Elements = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0x3ff1d2f1a9fbe76d;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0x40a80000;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined4 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 600) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0x4014000000000000;
  dVar9 = __real_4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0x403e000000000000;
  dStack_108 = dVar9;
  if (((pFVar1->Data <= (FScriptContainerElement *)&dStack_118) &&
      ((FScriptContainerElement *)&dStack_118 <
       pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 700) * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = *(int *)((longlong)param_1 + 0x2b8);
  if (iVar13 == *(int *)((longlong)param_1 + 700)) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar1,(int *)((longlong)param_1 + 700));
  }
  *(int *)((longlong)param_1 + 0x2b8) = iVar13 + 1;
  pFVar4 = pFVar1->Data;
  pFVar20 = pFVar4 + (longlong)iVar13 * 0x18;
  *(double *)pFVar20 = dStack_118;
  *(double *)(pFVar20 + 8) = dStack_110;
  uStack_f8 = _UNK_15076c798;
  uStack_100 = ___xmm_c000000000000000bff0000000000000;
  *(double *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = dStack_108;
  uStack_f0 = __real_c008000000000000;
  if (((pFVar1->Data <= (FScriptContainerElement *)&uStack_100) &&
      ((FScriptContainerElement *)&uStack_100 <
       pFVar1->Data + (longlong)*(int *)((longlong)param_1 + 700) * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = *(int *)((longlong)param_1 + 0x2b8);
  if (iVar13 == *(int *)((longlong)param_1 + 700)) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar1,(int *)((longlong)param_1 + 700));
  }
  *(int *)((longlong)param_1 + 0x2b8) = iVar13 + 1;
  pFVar4 = pFVar1->Data;
  pFVar20 = pFVar4 + (longlong)iVar13 * 0x18;
  *(undefined8 *)pFVar20 = uStack_100;
  *(undefined8 *)(pFVar20 + 8) = uStack_f8;
  *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = uStack_f0;
  TStack_80._s_0.Z = 0.0;
  TStack_80._s_0.X = 0.0;
  TStack_80._s_0.Y = 0.0;
  ::FString::FString(&FStack_c0,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_c0,(TVector<double> *)&TStack_80._s_0);
  if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
  }
  TStack_68._s_0.Z = dVar9;
  TStack_68._s_0.X = ___xmm_40000000000000003ff0000000000000;
  TStack_68._s_0.Y = _UNK_150744178;
  ::FString::FString(&FStack_b0,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_b0,(TVector<double> *)&TStack_68._s_0);
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  TStack_50._s_0.X = ___xmm_40180000000000004018000000000000;
  TStack_50._s_0.Y = _UNK_151c790d8;
  TStack_50._s_0.Z = __real_4018000000000000;
  ::FString::FString(&FStack_a0,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            (this_00,&FStack_a0,(TVector<double> *)&TStack_50._s_0);
  if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
  }
  if (*(int *)((longlong)param_1 + 0x344) == 0) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x318),
                        (int *)((longlong)param_1 + 0x31c));
    iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800),1);
    uVar15 = iVar14 >> 0x1f & 0x1f;
    iVar14 = iVar14 + uVar15;
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800);
    }
    puVar2 = (pTVar22->AllocatorInstance).InlineData + (longlong)(iVar14 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 & ~(1 << (((byte)iVar14 & 0x1f) - (char)uVar15 & 0x1f));
  }
  else {
    iVar13 = *(int *)((longlong)param_1 + 0x340);
    pFVar20 = (this->Data).AllocatorInstance.Data;
    iVar3 = *(int *)(pFVar20 + (longlong)iVar13 * 0x20 + 4);
    iVar14 = *(int *)((longlong)param_1 + 0x344) + -1;
    *(int *)((longlong)param_1 + 0x340) = iVar3;
    *(int *)((longlong)param_1 + 0x344) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(pFVar20 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&FStack_90,iVar13);
  pdVar19 = pdVar21;
  if (FStack_90.Pointer != (double *)0x0) {
    *(double *)FStack_90.Pointer = 10.0;
    *(double *)((longlong)FStack_90.Pointer + 8) = 11.0;
    *(double *)((longlong)FStack_90.Pointer + 0x10) = 12.0;
    *(undefined4 *)((longlong)FStack_90.Pointer + 0x18) = 0xffffffff;
    pdVar19 = FStack_90.Pointer;
  }
  uVar15 = FCrc::MemCrc_DEPRECATED(pdVar19,0x18,0);
  if ((*(int *)((longlong)param_1 + 0x318) - *(int *)((longlong)param_1 + 0x344) != 1) &&
     (*(int *)((longlong)param_1 + 0x318) != *(int *)((longlong)param_1 + 0x344))) {
    lVar16 = *(longlong *)((longlong)param_1 + 0x350);
    if (*(longlong *)((longlong)param_1 + 0x350) == 0) {
      lVar16 = (longlong)param_1 + 0x348;
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)(*(int *)((longlong)param_1 + 0x358) - 1U & uVar15) * 4);
    if (iVar13 != -1) {
      pFVar20 = (this->Data).AllocatorInstance.Data;
      do {
        lVar16 = (longlong)iVar13 * 0x20;
        if (((*pdVar19 == *(double *)(pFVar20 + lVar16)) &&
            (pdVar19[1] == *(double *)(pFVar20 + lVar16 + 8))) &&
           (pdVar19[2] == *(double *)(pFVar20 + lVar16 + 0x10))) {
          if (iVar13 != -1) {
            memmove((this->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x20,pdVar19,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,FStack_90.Index,1);
            return;
          }
          break;
        }
        iVar13 = *(int *)(pFVar20 + lVar16 + 0x18);
      } while (iVar13 != -1);
    }
  }
  uVar24 = 1;
  uVar18 = *(int *)((longlong)param_1 + 0x318) - *(int *)((longlong)param_1 + 0x344);
  if (3 < uVar18) {
    uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar24 <= *(int *)((longlong)param_1 + 0x358))) {
    uVar15 = *(int *)((longlong)param_1 + 0x358) - 1U & uVar15;
    *(uint *)((longlong)pdVar19 + 0x1c) = uVar15;
    lVar16 = *(longlong *)((longlong)param_1 + 0x350);
    if (*(longlong *)((longlong)param_1 + 0x350) == 0) {
      lVar16 = (longlong)param_1 + 0x348;
    }
    uVar23 = (longlong)*(int *)((longlong)param_1 + 0x358) - 1U & (longlong)(int)uVar15;
    *(undefined4 *)(pdVar19 + 3) = *(undefined4 *)(lVar16 + uVar23 * 4);
    *(int *)(lVar16 + uVar23 * 4) = FStack_90.Index;
    return;
  }
  *(uint *)((longlong)param_1 + 0x358) = uVar24;
  if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x350),0,0,4);
  }
  if (uVar24 == 0) goto LAB_148b9d9a5;
  uVar15 = uVar24;
  if (uVar24 < 2) {
    if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
      uVar15 = 0;
      goto LAB_148b9d953;
    }
  }
  else {
LAB_148b9d953:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x350),0,uVar15,4);
  }
  if (0 < (int)uVar24) {
    uVar23 = (ulonglong)uVar24;
    pdVar19 = pdVar21;
    do {
      lVar16 = (longlong)param_1 + 0x348;
      if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
        lVar16 = *(longlong *)((longlong)param_1 + 0x350);
      }
      uVar17 = (ulonglong)pdVar19 & (longlong)(int)uVar24 - 1U;
      pdVar19 = (double *)((longlong)pdVar19 + 1);
      *(undefined4 *)(lVar16 + uVar17 * 4) = 0xffffffff;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
LAB_148b9d9a5:
  if (*(int *)((longlong)param_1 + 0x358) != 0) {
    uVar15 = *(uint *)((longlong)param_1 + 0x338);
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 800);
    uStack_138 = 0;
    uStack_134 = 1;
    uStack_124 = 0;
    uStack_120 = 0;
    if (uVar15 != 0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x330) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = TStack_e0.Array;
      }
      uVar18 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
      pdVar19 = pdVar21;
      while (uVar18 == 0) {
        iVar13 = (int)pdVar21;
        uStack_120 = (int)pdVar19 + 0x20;
        pdVar19 = (double *)(ulonglong)uStack_120;
        uStack_138 = iVar13 + 1;
        pdVar21 = (double *)(ulonglong)uStack_138;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
        goto LAB_148b9da50;
        uVar18 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar13 * 4 + 4);
      }
      uStack_134 = -uVar18 & uVar18;
      uVar23 = (ulonglong)uStack_134 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uStack_124 = (int)lVar16 + -1 + uStack_120;
      pdVar21 = (double *)(ulonglong)uStack_124;
      if ((int)uVar15 < (int)uStack_124) {
LAB_148b9da50:
        pdVar21 = (double *)(ulonglong)uVar15;
        uStack_124 = uVar15;
      }
    }
    TStack_e0._padding_._0_4_ = uStack_138;
    TStack_e0._padding_._4_4_ = uStack_134;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_124;
    TStack_e0._28_4_ = uStack_11c;
    TStack_e0.BaseBitIndex = uStack_120;
    if ((int)pdVar21 < (int)uVar15) {
      pTStack_e8 = this;
      do {
        pFVar20 = (pTStack_e8->Data).AllocatorInstance.Data + (longlong)(int)pdVar21 * 0x20;
        uVar15 = FCrc::MemCrc_DEPRECATED(pFVar20,0x18,0);
        uVar15 = *(int *)((longlong)param_1 + 0x358) - 1U & uVar15;
        *(uint *)(pFVar20 + 0x1c) = uVar15;
        lVar16 = (longlong)param_1 + 0x348;
        if (*(longlong *)((longlong)param_1 + 0x350) != 0) {
          lVar16 = *(longlong *)((longlong)param_1 + 0x350);
        }
        uVar23 = (longlong)*(int *)((longlong)param_1 + 0x358) - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar20 + 0x18) = *(undefined4 *)(lVar16 + uVar23 * 4);
        *(int *)(lVar16 + uVar23 * 4) = (int)pdVar21;
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
        pdVar21 = (double *)(ulonglong)(uint)TStack_e0.CurrentBitIndex;
      } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
    }
  }
  return;
}

// Destruct<FStructSerializerLWCTypesTest> @ 148b87400

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerLWCTypesTest>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x358) = 0;
  if (*(void **)((longlong)param_1 + 0x350) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x350));
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x310));
  *(undefined4 *)((longlong)param_1 + 0x308) = 0;
  if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x300));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x2c0));
  if (*(void **)((longlong)param_1 + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2b0));
  }
  return;
}

// Copy<FStructSerializerLWCTypesTest> @ 148b87450

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerLWCTypesTest>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    puVar3[2] = puVar1[2];
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    puVar3[4] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    puVar3[6] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar3[7] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    puVar3[8] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    puVar3[9] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    puVar3[10] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    puVar3[0xb] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    puVar3[0xc] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x60 - (longlong)param_1))
    ;
    puVar3[0xd] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    puVar3[0xe] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x70 - (longlong)param_1))
    ;
    puVar3[0xf] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x88 - (longlong)param_1));
    puVar3[0x10] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    puVar3[0x11] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x98 - (longlong)param_1));
    puVar3[0x12] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x90 - (longlong)param_1));
    puVar3[0x13] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    puVar3[0x14] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    puVar3[0x15] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    puVar3[0x16] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    puVar3[0x17] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (200 - (longlong)param_1));
    puVar3[0x18] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    puVar3[0x19] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    puVar3[0x1a] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    puVar3[0x1b] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    puVar3[0x1c] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xe0 - (longlong)param_1));
    puVar3[0x1d] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xf8 - (longlong)param_1));
    puVar3[0x1e] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xf0 - (longlong)param_1));
    puVar3[0x1f] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x108 - (longlong)param_1));
    puVar3[0x20] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x100 - (longlong)param_1));
    puVar3[0x21] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x118 - (longlong)param_1));
    puVar3[0x22] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x110 - (longlong)param_1));
    puVar3[0x23] = uVar2;
    puVar3[0x24] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x120 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x138 - (longlong)param_1));
    puVar3[0x26] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x130 - (longlong)param_1));
    puVar3[0x27] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x148 - (longlong)param_1));
    puVar3[0x28] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x140 - (longlong)param_1));
    puVar3[0x29] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x158 - (longlong)param_1));
    puVar3[0x2a] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x150 - (longlong)param_1));
    puVar3[0x2b] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x168 - (longlong)param_1));
    puVar3[0x2c] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x160 - (longlong)param_1));
    puVar3[0x2d] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x178 - (longlong)param_1));
    puVar3[0x2e] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x170 - (longlong)param_1));
    puVar3[0x2f] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x188 - (longlong)param_1));
    puVar3[0x30] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x180 - (longlong)param_1));
    puVar3[0x31] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x198 - (longlong)param_1));
    puVar3[0x32] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (400 - (longlong)param_1))
    ;
    puVar3[0x33] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x1a8 - (longlong)param_1));
    puVar3[0x34] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1a0 - (longlong)param_1));
    puVar3[0x35] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x1b8 - (longlong)param_1));
    puVar3[0x36] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1b0 - (longlong)param_1));
    puVar3[0x37] = uVar2;
    puVar3[0x38] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1c0 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x1d0 - (longlong)param_1));
    puVar3[0x39] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1c8 - (longlong)param_1));
    puVar3[0x3a] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x1e0 - (longlong)param_1));
    puVar3[0x3b] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1d8 - (longlong)param_1));
    puVar3[0x3c] = uVar2;
    puVar3[0x3d] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1e8 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x1f8 - (longlong)param_1));
    puVar3[0x3e] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x1f0 - (longlong)param_1));
    puVar3[0x3f] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x208 - (longlong)param_1));
    puVar3[0x40] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x200 - (longlong)param_1));
    puVar3[0x41] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x218 - (longlong)param_1));
    puVar3[0x42] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x210 - (longlong)param_1));
    puVar3[0x43] = uVar2;
    puVar3[0x44] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x220 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x230 - (longlong)param_1));
    puVar3[0x45] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x228 - (longlong)param_1));
    puVar3[0x46] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x240 - (longlong)param_1));
    puVar3[0x47] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x238 - (longlong)param_1));
    puVar3[0x48] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    puVar3[0x49] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    puVar3[0x4a] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    puVar3[0x4b] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (600 - (longlong)param_1))
    ;
    puVar3[0x4c] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    puVar3[0x4d] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    puVar3[0x4e] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    puVar3[0x4f] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    puVar3[0x50] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    puVar3[0x51] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    puVar3[0x52] = uVar2;
    puVar3[0x53] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined4 *)(puVar3 + 0x54) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    puVar3[0x55] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x56),
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (0x2b0 - (longlong)param_1)));
    TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)(puVar3 + 0x58),
                (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)((longlong)puVar3 + (longlong)param_2 + (0x2c0 - (longlong)param_1)));
    TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::operator=((TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)(puVar3 + 0x62),
                (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)((longlong)puVar3 + (longlong)param_2 + (0x310 - (longlong)param_1)));
    puVar1 = puVar1 + 0x6c;
    puVar3 = puVar3 + 0x6c;
  }
  return true;
}

// Construct<FStructSerializerBuiltinTestStruct> @ 148b87790

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerBuiltinTestStruct>(void *param_1)

{
  FGuid::NewGuid(param_1);
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"Test FName");
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"Test String");
  FText::FromString((FText *)((longlong)param_1 + 0x28),"Test Text");
  FDateTime::FDateTime((FDateTime *)((longlong)param_1 + 0x38),0x800,2,4,8,0x10,0x20,0x40);
  FTimespan::Assign((FTimespan *)((longlong)param_1 + 0x40),1,2,3,4,5);
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xff03ff3c;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x4010000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4018000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x401c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x40b0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x40c0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x40d0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3fdd70a3e0000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x4008000000000000;
  return;
}

// ConstructForTests<FStructSerializerBuiltinTestStruct> @ 148b877a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerBuiltinTestStruct>(void *param_1)

{
  FGuid::NewGuid(param_1);
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"Test FName");
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"Test String");
  FText::FromString((FText *)((longlong)param_1 + 0x28),"Test Text");
  FDateTime::FDateTime((FDateTime *)((longlong)param_1 + 0x38),0x800,2,4,8,0x10,0x20,0x40);
  FTimespan::Assign((FTimespan *)((longlong)param_1 + 0x40),1,2,3,4,5);
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xff03ff3c;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x4010000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4018000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4008000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x401c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x40b0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x40c0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x40d0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3fdd70a3e0000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x4008000000000000;
  return;
}

// Destruct<FStructSerializerBuiltinTestStruct> @ 148b877b0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerBuiltinTestStruct>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FStructSerializerBuiltinTestStruct> @ 148b877f0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerBuiltinTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      uVar4 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar4;
      puVar6[2] = *(undefined8 *)((longlong)pvVar5 + 0x10);
      ::FString::operator=((FString *)(puVar6 + 3),(FString *)((longlong)pvVar5 + 0x18));
      plVar2 = *(longlong **)((longlong)pvVar5 + 0x28);
      plVar3 = (longlong *)puVar6[5];
      if (plVar3 != plVar2) {
        puVar6[5] = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_res18);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)((longlong)pvVar5 + 0x30);
      puVar6[7] = *(undefined8 *)((longlong)pvVar5 + 0x38);
      puVar6[8] = *(undefined8 *)((longlong)pvVar5 + 0x40);
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0x50);
      puVar6[9] = *(undefined8 *)((longlong)pvVar5 + 0x48);
      puVar6[10] = uVar4;
      puVar6[0xb] = *(undefined8 *)((longlong)pvVar5 + 0x58);
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0x68);
      puVar6[0xc] = *(undefined8 *)((longlong)pvVar5 + 0x60);
      puVar6[0xd] = uVar4;
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0x78);
      puVar6[0xe] = *(undefined8 *)((longlong)pvVar5 + 0x70);
      puVar6[0xf] = uVar4;
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0x88);
      puVar6[0x10] = *(undefined8 *)((longlong)pvVar5 + 0x80);
      puVar6[0x11] = uVar4;
      puVar6[0x12] = *(undefined8 *)((longlong)pvVar5 + 0x90);
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0xa8);
      puVar6[0x14] = *(undefined8 *)((longlong)pvVar5 + 0xa0);
      puVar6[0x15] = uVar4;
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0xb8);
      puVar6[0x16] = *(undefined8 *)((longlong)pvVar5 + 0xb0);
      puVar6[0x17] = uVar4;
      *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)((longlong)pvVar5 + 0xc0);
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0xd0);
      puVar6 = puVar6 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStructSerializerBuiltinTestStruct> @ 148b87950

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FStructSerializerBuiltinTestStruct>(void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0x20) + -1;
  if (*(int *)((longlong)param_1 + 0x20) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)((longlong)param_1 + 0x18);
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  return uVar1;
}

// Construct<FStructSerializerObjectTestStruct> @ 148b87980

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerObjectTestStruct>(void *param_1)

{
  FWeakObjectPtr *this;
  FSoftObjectPath *this_00;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x18),(FObjectPtr)&uStackX_8);
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x58),(FObjectPtr)&uStackX_8);
  this_00 = (FSoftObjectPath *)((longlong)param_1 + 0x80);
  (this_00->AssetPath).PackageName.ComparisonIndex = 0;
  (this_00->AssetPath).PackageName.Number = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  FSoftObjectPath::SetPath(this_00,(UObject *)0x0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// ConstructForTests<FStructSerializerObjectTestStruct> @ 148b87990

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerObjectTestStruct>(void *param_1)

{
  FWeakObjectPtr *this;
  FSoftObjectPath *this_00;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x18),(FObjectPtr)&uStackX_8);
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x58),(FObjectPtr)&uStackX_8);
  this_00 = (FSoftObjectPath *)((longlong)param_1 + 0x80);
  (this_00->AssetPath).PackageName.ComparisonIndex = 0;
  (this_00->AssetPath).PackageName.Number = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  FSoftObjectPath::SetPath(this_00,(UObject *)0x0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// Destruct<FStructSerializerObjectTestStruct> @ 148b879a0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerObjectTestStruct>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FStructSerializerObjectTestStruct> @ 148b87a00

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerObjectTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar3[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      FUtf8String::operator=((FUtf8String *)(puVar3 + 6),(FUtf8String *)(puVar1 + 6));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[8] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[8]);
      }
      puVar3[8] = puVar1[8];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[9] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[9]);
      }
      puVar3[9] = puVar1[9];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = puVar1[0xb];
      uVar2 = puVar1[0xd];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = uVar2;
      FUtf8String::operator=((FUtf8String *)(puVar3 + 0xe),(FUtf8String *)(puVar1 + 0xe));
      uVar2 = puVar1[0x11];
      puVar3[0x10] = puVar1[0x10];
      puVar3[0x11] = uVar2;
      FUtf8String::operator=((FUtf8String *)(puVar3 + 0x12),(FUtf8String *)(puVar1 + 0x12));
      uVar2 = puVar1[0x15];
      puVar3[0x14] = puVar1[0x14];
      puVar3[0x15] = uVar2;
      FUtf8String::operator=((FUtf8String *)(puVar3 + 0x16),(FUtf8String *)(puVar1 + 0x16));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStructSerializerBooleanTestStruct> @ 148b87ba0

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerBooleanTestStruct>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 0xb4;
  return;
}

// ConstructForTests<FStructSerializerBooleanTestStruct> @ 148b87bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerBooleanTestStruct>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 0xb4;
  return;
}

// Destruct<FStructSerializerBooleanTestStruct> @ 148b87bc0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerBooleanTestStruct>(void *param_1)

{
  return;
}

// Copy<FStructSerializerBooleanTestStruct> @ 148b87bd0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerBooleanTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStructSerializerNumericTestStruct> @ 148b87c10

void __cdecl UE::CoreUObject::Private::Construct<FStructSerializerNumericTestStruct>(void *param_1)

{
  *(undefined1 *)param_1 = 0x81;
  *(undefined8 *)((longlong)param_1 + 8) = 0xffffac1d29dc725d;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x10c6f7a0b5ed;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0800000000000;
  *(undefined2 *)((longlong)param_1 + 2) = 0x8001;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80000001;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x12) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40840000;
  return;
}

// ConstructForTests<FStructSerializerNumericTestStruct> @ 148b87c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStructSerializerNumericTestStruct>(void *param_1)

{
  *(undefined1 *)param_1 = 0x81;
  *(undefined8 *)((longlong)param_1 + 8) = 0xffffac1d29dc725d;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x10c6f7a0b5ed;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0800000000000;
  *(undefined2 *)((longlong)param_1 + 2) = 0x8001;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80000001;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x12) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40840000;
  return;
}

// Destruct<FStructSerializerNumericTestStruct> @ 148b87cd0

void __cdecl UE::CoreUObject::Private::Destruct<FStructSerializerNumericTestStruct>(void *param_1)

{
  return;
}

// Copy<FStructSerializerNumericTestStruct> @ 148b87ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FStructSerializerNumericTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}


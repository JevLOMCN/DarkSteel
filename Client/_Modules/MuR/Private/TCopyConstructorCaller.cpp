// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 11

// Construct @ 14a9a0450

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::
Construct(void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14aac1c60

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Math::TVector4<float>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14aac1c70

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>_>::
Construct(void *param_1,void *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 *puVar14;
  
  puVar14 = ::operator_new(0x40);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
  }
  *(undefined8 **)param_1 = puVar14;
  if ((*(longlong *)param_2 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x4f,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = *(undefined4 **)param_2;
  uVar7 = *(undefined8 *)(puVar1 + 4);
  uVar8 = *(undefined8 *)(puVar1 + 6);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar9 = *(undefined8 *)(puVar1 + 8);
  uVar10 = *(undefined8 *)(puVar1 + 10);
  uVar11 = *(undefined8 *)(puVar1 + 0xc);
  uVar12 = *(undefined8 *)(puVar1 + 0xe);
  if ((*(longlong *)param_1 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x55,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = *(undefined4 **)param_1;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(puVar1 + 4) = uVar7;
  *(undefined8 *)(puVar1 + 6) = uVar8;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 10) = uVar10;
  *(undefined8 *)(puVar1 + 0xc) = uVar11;
  *(undefined8 *)(puVar1 + 0xe) = uVar12;
  return;
}

// Construct @ 14aac1d60

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>_>
::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar13 = ::operator_new(0x38);
  puVar14 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar14 = puVar13;
  }
  *(undefined8 **)param_1 = puVar14;
  if ((*(longlong *)param_2 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x4f,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = *(undefined4 **)param_2;
  uVar8 = *(undefined8 *)(puVar2 + 4);
  uVar9 = *(undefined8 *)(puVar2 + 6);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  uVar10 = *(undefined8 *)(puVar2 + 8);
  uVar11 = *(undefined8 *)(puVar2 + 10);
  uVar1 = *(undefined8 *)(puVar2 + 0xc);
  if ((*(longlong *)param_1 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x55,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = *(undefined4 **)param_1;
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(puVar2 + 4) = uVar8;
  *(undefined8 *)(puVar2 + 6) = uVar9;
  *(undefined8 *)(puVar2 + 8) = uVar10;
  *(undefined8 *)(puVar2 + 10) = uVar11;
  *(undefined8 *)(puVar2 + 0xc) = uVar1;
  return;
}

// Construct @ 14aac1d70

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Mutable::Private::Private::TIndirectObject<FString>_>
::Construct(void *param_1,void *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = ::operator_new(0x10);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar5 = puVar4;
  }
  *(undefined8 **)param_1 = puVar5;
  if ((*(longlong *)param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StoragePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                         ,0x4f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = *(FString **)param_2;
  if ((*(longlong *)param_1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StoragePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                         ,0x55,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::operator=(*(FString **)param_1,pFVar1);
  return;
}

// Construct @ 14aac1e20

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>_>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14aac1e40

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>::
Construct(void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14aac1e60

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TSharedPtr<UE::Mutable::Private::String_const_,1>_>::
Construct(void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14aac1e80

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Construct(void *param_1,void *param_2)

{
  UObjectBase *this;
  
  *(undefined8 *)param_1 = 0;
  this = *(UObjectBase **)param_2;
  if (this != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this);
    *(UObjectBase **)param_1 = this;
  }
  return;
}

// Construct @ 14aac1ec0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Construct(void *param_1,void *param_2)

{
  UObjectBase *this;
  
  *(undefined8 *)param_1 = 0;
  this = *(UObjectBase **)param_2;
  if (this != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this);
    *(UObjectBase **)param_1 = this;
  }
  return;
}

// Construct @ 14aac1f00

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Construct(void *param_1,void *param_2)

{
  UObjectBase *this;
  
  *(undefined8 *)param_1 = 0;
  this = *(UObjectBase **)param_2;
  if (this != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this);
    *(UObjectBase **)param_1 = this;
  }
  return;
}


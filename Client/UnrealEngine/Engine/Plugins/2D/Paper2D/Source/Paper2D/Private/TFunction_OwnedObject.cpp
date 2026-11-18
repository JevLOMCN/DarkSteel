// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 12

// CloneToEmptyStorage @ 14acf1670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14acf16b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14acf16f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14acf1730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14acf5610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14acf5640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14acf5670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14acf56a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14acf9330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14acf9340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14acf9350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14acf9360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}


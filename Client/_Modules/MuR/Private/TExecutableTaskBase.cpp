// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 13

// ExecuteTask @ 14a9a2d70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<void>'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 14aac7420

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l9::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::Tasks::
  Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'
  ::__l9::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14aac7440

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::Run'::__l122::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::Mutable::Private::CodeRunner::Run'::__l122::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  ::operator_delete(*(void **)((longlong)this + 0xe8),0x1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14aac7480

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::LaunchIssuedTask'::__l13::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)((longlong)this + 0xd8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(**(longlong **)((longlong)this + 0xd8) + 0x10))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14aac74e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::Run'[::O]::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  `UE::Mutable::Private::CodeRunner::Run'[::O]::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  ::operator_delete(*(void **)((longlong)this + 0xe8),0x1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ab6f890

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>'::__l2::<lambda_1>,UE::Mutable::Private::FExtendedImageDesc,void>
::ExecuteTask(void *this)

{
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  *(undefined8 *)((longlong)this + 0xe0) = 0;
  *(undefined8 *)((longlong)this + 0xe8) = 0;
  return;
}

// ExecuteTask @ 14ab6f8c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
::ExecuteTask(void *this)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)this + 0xd8) = **(undefined8 **)((longlong)this + 0xe8);
  lVar1 = (*(undefined8 **)((longlong)this + 0xe8))[1];
  *(longlong *)((longlong)this + 0xe0) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// ExecuteTask @ 14ab6f8f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,void>
::ExecuteTask(void *this)

{
  `UE::Tasks::
  MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>'
  ::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),
             (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14ab6f910

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,void>
::ExecuteTask(void *this)

{
  `UE::Tasks::
  MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>'
  ::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),
             (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14ab6f930

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImage'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
::ExecuteTask(void *this)

{
  `UE::Mutable::Private::FSystem::GetImage'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),
             (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  return;
}

// ExecuteTask @ 14ab6f970

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImageDesc'::__l2::<lambda_1>,UE::Mutable::Private::FExtendedImageDesc,void>
::ExecuteTask(void *this)

{
  `UE::Mutable::Private::FSystem::GetImageDesc'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xf0),(FExtendedImageDesc *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  return;
}

// ExecuteTask @ 14ab6f9b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMaterial'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,void>
::ExecuteTask(void *this)

{
  `UE::Mutable::Private::FSystem::GetMaterial'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),
             (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  return;
}

// ExecuteTask @ 14ab6f9f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMesh'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,void>
::ExecuteTask(void *this)

{
  `UE::Mutable::Private::FSystem::GetMesh'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),
             (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 4

// Call @ 14acf1160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPaperRenderSceneProxy_SpriteBase::SetSprite_RenderThread
            (*(FPaperRenderSceneProxy_SpriteBase **)param_1,
             (FSpriteDrawCallRecord *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x150)
            );
  return;
}

// Call @ 14acf1180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPaperRenderSceneProxy_SpriteBase::SetSprite_RenderThread
            (*(FPaperRenderSceneProxy_SpriteBase **)param_1,
             (FSpriteDrawCallRecord *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x150)
            );
  return;
}

// Call @ 14acf11a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPaperRenderSceneProxy_SpriteBase::SetSprite_RenderThread
            (*(FPaperRenderSceneProxy_SpriteBase **)param_1,
             (FSpriteDrawCallRecord *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x158)
            );
  *(undefined8 *)(*(longlong *)param_1 + 0x620) = *(undefined8 *)((longlong)param_1 + 0x150);
  return;
}

// Call @ 14acf11e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPaperRenderSceneProxy_SpriteBase::SetSprite_RenderThread
            (*(FPaperRenderSceneProxy_SpriteBase **)param_1,
             (FSpriteDrawCallRecord *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x150)
            );
  return;
}


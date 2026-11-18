// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// FromSlateViewport @ 146bdf240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCaptureProtocolInitSettings * __cdecl
FCaptureProtocolInitSettings::FromSlateViewport
          (FCaptureProtocolInitSettings *__return_storage_ptr__,
          TSharedRef<FSceneViewport,1> *param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  int iVar2;
  int iVar3;
  TIntPoint<int>_u_0_s_0 *pTVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FSceneViewport *local_18;
  FSharedReferencer<1> local_10;
  
  (__return_storage_ptr__->SceneViewport).Object = (FSceneViewport *)0x0;
  (__return_storage_ptr__->SceneViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (FCaptureProtocolInitSettings *)&local_18) {
    (__return_storage_ptr__->SceneViewport).Object = local_18;
    local_18 = (FSceneViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->SceneViewport).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  plVar5 = &param_1->Object->_padding_;
  pTVar4 = (TIntPoint<int>_u_0_s_0 *)(**(code **)(*plVar5 + 0x10))(plVar5,local_res8);
  TVar1 = *pTVar4;
  (__return_storage_ptr__->DesiredSize).field0_0x0._s_0 = TVar1;
  iVar2 = GSystemResolution.ResX;
  if ((TVar1.X == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     (TVar1.Y == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    (__return_storage_ptr__->DesiredSize).field0_0x0._s_0.X = GSystemResolution.ResX;
    iVar3 = GSystemResolution.ResY;
    (__return_storage_ptr__->DesiredSize).field0_0x0._s_0.Y = GSystemResolution.ResY;
    FSceneViewport::SetViewportSize(param_1->Object,iVar2,iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}


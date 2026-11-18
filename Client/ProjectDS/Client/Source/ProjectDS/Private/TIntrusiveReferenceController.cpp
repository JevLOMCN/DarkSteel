// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 102

// DestroyObject @ 14b42d410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_BuffLinkTextDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_BuffLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b42d460

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_LinkText,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_LinkText,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x690);
  *(undefined ***)((this->ObjectStorage).Pad + 0x5f0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FDS_LinkTextData::~FDS_LinkTextData((FDS_LinkTextData *)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b4535e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatEmoteDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatEmoteDecorator,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b494810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_EquipmentItemLinkTextDecorator,1>::
DestroyObject(TIntrusiveReferenceController<FDS_EquipmentItemLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b4a8620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_GroupChatLinkTextDecorator,1>::
DestroyObject(TIntrusiveReferenceController<FDS_GroupChatLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b4da650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ItemLinkTextDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ItemLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b4e13f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_LocationLinkTextDecorator,1>::
DestroyObject(TIntrusiveReferenceController<FDS_LocationLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b514b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTooltipInputProcessor,1>::DestroyObject
          (TIntrusiveReferenceController<FTooltipInputProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInputProcessor__6B_;
  return;
}

// DestroyObject @ 14b55c610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_PartyLinkTextDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_PartyLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b566960

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_PlayerLinkTextDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_PlayerLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b5669b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_PlayerSkillLinkTextDecorator,1>::
DestroyObject(TIntrusiveReferenceController<FDS_PlayerSkillLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b5966f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_SkillLinkTextDecorator,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_SkillLinkTextDecorator,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITextDecorator__6B_;
  return;
}

// DestroyObject @ 14b86ead0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsTargetInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ISKM_BoidsTargetInfo,1> *this)

{
  return;
}

// DestroyObject @ 14b86eae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Chick,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Chick,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eaf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Cock,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Cock,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Hen,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chicken_Hen,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chital,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Chital,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Duck,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Duck,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Pig,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ISKM_BoidsController_Pig,1> *this)

{
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ISKM_BoidsController_Raven,1>::
DestroyObject(TIntrusiveReferenceController<FDS_ISKM_BoidsController_Raven,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x70);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController
            ((FDS_ISKM_BoidsController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_AsyncCollision,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_AsyncCollision,1> *this)

{
  FWN_AsyncCollision::~FWN_AsyncCollision((FWN_AsyncCollision *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eb90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_BoidsNavSystem,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_BoidsNavSystem,1> *this)

{
  FWN_BoidsNavSystem::~FWN_BoidsNavSystem((FWN_BoidsNavSystem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b86eba0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_StateMachine,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_StateMachine,1> *this)

{
  FWN_StateMachine::~FWN_StateMachine((FWN_StateMachine *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b8be0f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ClientMessage_Twoway,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ClientMessage_Twoway,1> *this)

{
  FDS_ClientMessage_Twoway::~FDS_ClientMessage_Twoway
            ((FDS_ClientMessage_Twoway *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b8be100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObjectStorage);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b8be140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_HttpRequest,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_HttpRequest,1> *this)

{
  FDS_HttpRequest::~FDS_HttpRequest((FDS_HttpRequest *)&this->ObjectStorage);
  return;
}

// TIntrusiveReferenceController<FDS_ChatRoomManager,1><> @ 14b9ca430

TIntrusiveReferenceController<FDS_ChatRoomManager,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatRoomManager,1>::
TIntrusiveReferenceController<FDS_ChatRoomManager,1><>
          (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *this)

{
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFDS_ChatRoomManager___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  (this->ObjectStorage).Pad[0x10] = '\0';
  (this->ObjectStorage).Pad[0x11] = '\0';
  (this->ObjectStorage).Pad[0x12] = '\0';
  (this->ObjectStorage).Pad[0x13] = '\0';
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  (this->ObjectStorage).Pad[0x4c] = '\0';
  (this->ObjectStorage).Pad[0x4d] = '\0';
  (this->ObjectStorage).Pad[0x4e] = '\0';
  (this->ObjectStorage).Pad[0x4f] = '\0';
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  (this->ObjectStorage).Pad[100] = '\0';
  (this->ObjectStorage).Pad[0x65] = '\0';
  (this->ObjectStorage).Pad[0x66] = '\0';
  (this->ObjectStorage).Pad[0x67] = '\0';
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  (this->ObjectStorage).Pad[0x6c] = '\0';
  (this->ObjectStorage).Pad[0x6d] = '\0';
  (this->ObjectStorage).Pad[0x6e] = '\0';
  (this->ObjectStorage).Pad[0x6f] = '\0';
  (this->ObjectStorage).Pad[0x88] = '\0';
  (this->ObjectStorage).Pad[0x89] = '\0';
  (this->ObjectStorage).Pad[0x8a] = '\0';
  (this->ObjectStorage).Pad[0x8b] = '\0';
  (this->ObjectStorage).Pad[0x8c] = '\0';
  (this->ObjectStorage).Pad[0x8d] = '\0';
  (this->ObjectStorage).Pad[0x8e] = '\0';
  (this->ObjectStorage).Pad[0x8f] = '\0';
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  (this->ObjectStorage).Pad[0x9c] = '\0';
  (this->ObjectStorage).Pad[0x9d] = '\0';
  (this->ObjectStorage).Pad[0x9e] = '\0';
  (this->ObjectStorage).Pad[0x9f] = '\0';
  (this->ObjectStorage).Pad[0xb0] = '\0';
  (this->ObjectStorage).Pad[0xb1] = '\0';
  (this->ObjectStorage).Pad[0xb2] = '\0';
  (this->ObjectStorage).Pad[0xb3] = '\0';
  (this->ObjectStorage).Pad[0xb4] = '\0';
  (this->ObjectStorage).Pad[0xb5] = '\0';
  (this->ObjectStorage).Pad[0xb6] = '\0';
  (this->ObjectStorage).Pad[0xb7] = '\0';
  (this->ObjectStorage).Pad[0xb8] = '\0';
  (this->ObjectStorage).Pad[0xb9] = '\0';
  (this->ObjectStorage).Pad[0xba] = '\0';
  (this->ObjectStorage).Pad[0xbb] = '\0';
  (this->ObjectStorage).Pad[0xbc] = '\0';
  (this->ObjectStorage).Pad[0xbd] = '\0';
  (this->ObjectStorage).Pad[0xbe] = '\0';
  (this->ObjectStorage).Pad[0xbf] = '\0';
  (this->ObjectStorage).Pad[0xd8] = '\0';
  (this->ObjectStorage).Pad[0xd9] = '\0';
  (this->ObjectStorage).Pad[0xda] = '\0';
  (this->ObjectStorage).Pad[0xdb] = '\0';
  (this->ObjectStorage).Pad[0xdc] = '\0';
  (this->ObjectStorage).Pad[0xdd] = '\0';
  (this->ObjectStorage).Pad[0xde] = '\0';
  (this->ObjectStorage).Pad[0xdf] = '\0';
  (this->ObjectStorage).Pad[0xe8] = '\0';
  (this->ObjectStorage).Pad[0xe9] = '\0';
  (this->ObjectStorage).Pad[0xea] = '\0';
  (this->ObjectStorage).Pad[0xeb] = '\0';
  (this->ObjectStorage).Pad[0xec] = '\0';
  (this->ObjectStorage).Pad[0xed] = '\0';
  (this->ObjectStorage).Pad[0xee] = '\0';
  (this->ObjectStorage).Pad[0xef] = '\0';
  (this->ObjectStorage).Pad[0x100] = '\0';
  (this->ObjectStorage).Pad[0x101] = '\0';
  (this->ObjectStorage).Pad[0x102] = '\0';
  (this->ObjectStorage).Pad[0x103] = '\0';
  (this->ObjectStorage).Pad[0x104] = '\0';
  (this->ObjectStorage).Pad[0x105] = '\0';
  (this->ObjectStorage).Pad[0x106] = '\0';
  (this->ObjectStorage).Pad[0x107] = '\0';
  (this->ObjectStorage).Pad[0x108] = '\0';
  (this->ObjectStorage).Pad[0x109] = '\0';
  (this->ObjectStorage).Pad[0x10a] = '\0';
  (this->ObjectStorage).Pad[0x10b] = '\0';
  (this->ObjectStorage).Pad[0x10c] = '\0';
  (this->ObjectStorage).Pad[0x10d] = '\0';
  (this->ObjectStorage).Pad[0x10e] = '\0';
  (this->ObjectStorage).Pad[0x10f] = '\0';
  (this->ObjectStorage).Pad[0x128] = '\0';
  (this->ObjectStorage).Pad[0x129] = '\0';
  (this->ObjectStorage).Pad[0x12a] = '\0';
  (this->ObjectStorage).Pad[299] = '\0';
  (this->ObjectStorage).Pad[300] = '\0';
  (this->ObjectStorage).Pad[0x12d] = '\0';
  (this->ObjectStorage).Pad[0x12e] = '\0';
  (this->ObjectStorage).Pad[0x12f] = '\0';
  (this->ObjectStorage).Pad[0x138] = '\0';
  (this->ObjectStorage).Pad[0x139] = '\0';
  (this->ObjectStorage).Pad[0x13a] = '\0';
  (this->ObjectStorage).Pad[0x13b] = '\0';
  (this->ObjectStorage).Pad[0x13c] = '\0';
  (this->ObjectStorage).Pad[0x13d] = '\0';
  (this->ObjectStorage).Pad[0x13e] = '\0';
  (this->ObjectStorage).Pad[0x13f] = '\0';
  (this->ObjectStorage).Pad[0x150] = '\0';
  (this->ObjectStorage).Pad[0x151] = '\0';
  (this->ObjectStorage).Pad[0x152] = '\0';
  (this->ObjectStorage).Pad[0x153] = '\0';
  (this->ObjectStorage).Pad[0x154] = '\0';
  (this->ObjectStorage).Pad[0x155] = '\0';
  (this->ObjectStorage).Pad[0x156] = '\0';
  (this->ObjectStorage).Pad[0x157] = '\0';
  (this->ObjectStorage).Pad[0x158] = '\0';
  (this->ObjectStorage).Pad[0x159] = '\0';
  (this->ObjectStorage).Pad[0x15a] = '\0';
  (this->ObjectStorage).Pad[0x15b] = '\0';
  (this->ObjectStorage).Pad[0x15c] = '\0';
  (this->ObjectStorage).Pad[0x15d] = '\0';
  (this->ObjectStorage).Pad[0x15e] = '\0';
  (this->ObjectStorage).Pad[0x15f] = '\0';
  (this->ObjectStorage).Pad[0x178] = '\0';
  (this->ObjectStorage).Pad[0x179] = '\0';
  (this->ObjectStorage).Pad[0x17a] = '\0';
  (this->ObjectStorage).Pad[0x17b] = '\0';
  (this->ObjectStorage).Pad[0x17c] = '\0';
  (this->ObjectStorage).Pad[0x17d] = '\0';
  (this->ObjectStorage).Pad[0x17e] = '\0';
  (this->ObjectStorage).Pad[0x17f] = '\0';
  (this->ObjectStorage).Pad[0x188] = '\0';
  (this->ObjectStorage).Pad[0x189] = '\0';
  (this->ObjectStorage).Pad[0x18a] = '\0';
  (this->ObjectStorage).Pad[0x18b] = '\0';
  (this->ObjectStorage).Pad[0x18c] = '\0';
  (this->ObjectStorage).Pad[0x18d] = '\0';
  (this->ObjectStorage).Pad[0x18e] = '\0';
  (this->ObjectStorage).Pad[399] = '\0';
  (this->ObjectStorage).Pad[0] = '\0';
  (this->ObjectStorage).Pad[1] = '\0';
  (this->ObjectStorage).Pad[2] = '\0';
  (this->ObjectStorage).Pad[3] = '\0';
  (this->ObjectStorage).Pad[4] = '\0';
  (this->ObjectStorage).Pad[5] = '\0';
  (this->ObjectStorage).Pad[6] = '\0';
  (this->ObjectStorage).Pad[7] = '\0';
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  (this->ObjectStorage).Pad[0x28] = '\0';
  (this->ObjectStorage).Pad[0x29] = '\0';
  (this->ObjectStorage).Pad[0x2a] = '\0';
  (this->ObjectStorage).Pad[0x2b] = '\0';
  (this->ObjectStorage).Pad[0x2c] = 0x80;
  (this->ObjectStorage).Pad[0x2d] = '\0';
  (this->ObjectStorage).Pad[0x2e] = '\0';
  (this->ObjectStorage).Pad[0x2f] = '\0';
  (this->ObjectStorage).Pad[0x34] = '\0';
  (this->ObjectStorage).Pad[0x35] = '\0';
  (this->ObjectStorage).Pad[0x36] = '\0';
  (this->ObjectStorage).Pad[0x37] = '\0';
  (this->ObjectStorage).Pad[0x30] = 0xff;
  (this->ObjectStorage).Pad[0x31] = 0xff;
  (this->ObjectStorage).Pad[0x32] = 0xff;
  (this->ObjectStorage).Pad[0x33] = 0xff;
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  (this->ObjectStorage).Pad[0x5c] = '\0';
  (this->ObjectStorage).Pad[0x5d] = '\0';
  (this->ObjectStorage).Pad[0x5e] = '\0';
  (this->ObjectStorage).Pad[0x5f] = '\0';
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  (this->ObjectStorage).Pad[0x74] = '\0';
  (this->ObjectStorage).Pad[0x75] = '\0';
  (this->ObjectStorage).Pad[0x76] = '\0';
  (this->ObjectStorage).Pad[0x77] = '\0';
  (this->ObjectStorage).Pad[0x78] = '\0';
  (this->ObjectStorage).Pad[0x79] = '\0';
  (this->ObjectStorage).Pad[0x7a] = '\0';
  (this->ObjectStorage).Pad[0x7b] = '\0';
  (this->ObjectStorage).Pad[0x7c] = 0x80;
  (this->ObjectStorage).Pad[0x7d] = '\0';
  (this->ObjectStorage).Pad[0x7e] = '\0';
  (this->ObjectStorage).Pad[0x7f] = '\0';
  (this->ObjectStorage).Pad[0x84] = '\0';
  (this->ObjectStorage).Pad[0x85] = '\0';
  (this->ObjectStorage).Pad[0x86] = '\0';
  (this->ObjectStorage).Pad[0x87] = '\0';
  (this->ObjectStorage).Pad[0x80] = 0xff;
  (this->ObjectStorage).Pad[0x81] = 0xff;
  (this->ObjectStorage).Pad[0x82] = 0xff;
  (this->ObjectStorage).Pad[0x83] = 0xff;
  (this->ObjectStorage).Pad[0x90] = '\0';
  (this->ObjectStorage).Pad[0x91] = '\0';
  (this->ObjectStorage).Pad[0x92] = '\0';
  (this->ObjectStorage).Pad[0x93] = '\0';
  (this->ObjectStorage).Pad[0x94] = '\0';
  (this->ObjectStorage).Pad[0x95] = '\0';
  (this->ObjectStorage).Pad[0x96] = '\0';
  (this->ObjectStorage).Pad[0x97] = '\0';
  (this->ObjectStorage).Pad[0xa0] = '\0';
  (this->ObjectStorage).Pad[0xa1] = '\0';
  (this->ObjectStorage).Pad[0xa2] = '\0';
  (this->ObjectStorage).Pad[0xa3] = '\0';
  (this->ObjectStorage).Pad[0xa4] = '\0';
  (this->ObjectStorage).Pad[0xa5] = '\0';
  (this->ObjectStorage).Pad[0xa6] = '\0';
  (this->ObjectStorage).Pad[0xa7] = '\0';
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  (this->ObjectStorage).Pad[0xac] = '\0';
  (this->ObjectStorage).Pad[0xad] = '\0';
  (this->ObjectStorage).Pad[0xae] = '\0';
  (this->ObjectStorage).Pad[0xaf] = '\0';
  (this->ObjectStorage).Pad[0xc0] = '\0';
  (this->ObjectStorage).Pad[0xc1] = '\0';
  (this->ObjectStorage).Pad[0xc2] = '\0';
  (this->ObjectStorage).Pad[0xc3] = '\0';
  (this->ObjectStorage).Pad[0xc4] = '\0';
  (this->ObjectStorage).Pad[0xc5] = '\0';
  (this->ObjectStorage).Pad[0xc6] = '\0';
  (this->ObjectStorage).Pad[199] = '\0';
  (this->ObjectStorage).Pad[200] = '\0';
  (this->ObjectStorage).Pad[0xc9] = '\0';
  (this->ObjectStorage).Pad[0xca] = '\0';
  (this->ObjectStorage).Pad[0xcb] = '\0';
  (this->ObjectStorage).Pad[0xcc] = 0x80;
  (this->ObjectStorage).Pad[0xcd] = '\0';
  (this->ObjectStorage).Pad[0xce] = '\0';
  (this->ObjectStorage).Pad[0xcf] = '\0';
  (this->ObjectStorage).Pad[0xd4] = '\0';
  (this->ObjectStorage).Pad[0xd5] = '\0';
  (this->ObjectStorage).Pad[0xd6] = '\0';
  (this->ObjectStorage).Pad[0xd7] = '\0';
  (this->ObjectStorage).Pad[0xd0] = 0xff;
  (this->ObjectStorage).Pad[0xd1] = 0xff;
  (this->ObjectStorage).Pad[0xd2] = 0xff;
  (this->ObjectStorage).Pad[0xd3] = 0xff;
  (this->ObjectStorage).Pad[0xe0] = '\0';
  (this->ObjectStorage).Pad[0xe1] = '\0';
  (this->ObjectStorage).Pad[0xe2] = '\0';
  (this->ObjectStorage).Pad[0xe3] = '\0';
  (this->ObjectStorage).Pad[0xe4] = '\0';
  (this->ObjectStorage).Pad[0xe5] = '\0';
  (this->ObjectStorage).Pad[0xe6] = '\0';
  (this->ObjectStorage).Pad[0xe7] = '\0';
  (this->ObjectStorage).Pad[0xf0] = '\0';
  (this->ObjectStorage).Pad[0xf1] = '\0';
  (this->ObjectStorage).Pad[0xf2] = '\0';
  (this->ObjectStorage).Pad[0xf3] = '\0';
  (this->ObjectStorage).Pad[0xf4] = '\0';
  (this->ObjectStorage).Pad[0xf5] = '\0';
  (this->ObjectStorage).Pad[0xf6] = '\0';
  (this->ObjectStorage).Pad[0xf7] = '\0';
  (this->ObjectStorage).Pad[0xf8] = '\0';
  (this->ObjectStorage).Pad[0xf9] = '\0';
  (this->ObjectStorage).Pad[0xfa] = '\0';
  (this->ObjectStorage).Pad[0xfb] = '\0';
  (this->ObjectStorage).Pad[0xfc] = '\0';
  (this->ObjectStorage).Pad[0xfd] = '\0';
  (this->ObjectStorage).Pad[0xfe] = '\0';
  (this->ObjectStorage).Pad[0xff] = '\0';
  (this->ObjectStorage).Pad[0x110] = '\0';
  (this->ObjectStorage).Pad[0x111] = '\0';
  (this->ObjectStorage).Pad[0x112] = '\0';
  (this->ObjectStorage).Pad[0x113] = '\0';
  (this->ObjectStorage).Pad[0x114] = '\0';
  (this->ObjectStorage).Pad[0x115] = '\0';
  (this->ObjectStorage).Pad[0x116] = '\0';
  (this->ObjectStorage).Pad[0x117] = '\0';
  (this->ObjectStorage).Pad[0x118] = '\0';
  (this->ObjectStorage).Pad[0x119] = '\0';
  (this->ObjectStorage).Pad[0x11a] = '\0';
  (this->ObjectStorage).Pad[0x11b] = '\0';
  (this->ObjectStorage).Pad[0x11c] = 0x80;
  (this->ObjectStorage).Pad[0x11d] = '\0';
  (this->ObjectStorage).Pad[0x11e] = '\0';
  (this->ObjectStorage).Pad[0x11f] = '\0';
  (this->ObjectStorage).Pad[0x124] = '\0';
  (this->ObjectStorage).Pad[0x125] = '\0';
  (this->ObjectStorage).Pad[0x126] = '\0';
  (this->ObjectStorage).Pad[0x127] = '\0';
  (this->ObjectStorage).Pad[0x120] = 0xff;
  (this->ObjectStorage).Pad[0x121] = 0xff;
  (this->ObjectStorage).Pad[0x122] = 0xff;
  (this->ObjectStorage).Pad[0x123] = 0xff;
  (this->ObjectStorage).Pad[0x130] = '\0';
  (this->ObjectStorage).Pad[0x131] = '\0';
  (this->ObjectStorage).Pad[0x132] = '\0';
  (this->ObjectStorage).Pad[0x133] = '\0';
  (this->ObjectStorage).Pad[0x134] = '\0';
  (this->ObjectStorage).Pad[0x135] = '\0';
  (this->ObjectStorage).Pad[0x136] = '\0';
  (this->ObjectStorage).Pad[0x137] = '\0';
  (this->ObjectStorage).Pad[0x140] = '\0';
  (this->ObjectStorage).Pad[0x141] = '\0';
  (this->ObjectStorage).Pad[0x142] = '\0';
  (this->ObjectStorage).Pad[0x143] = '\0';
  (this->ObjectStorage).Pad[0x144] = '\0';
  (this->ObjectStorage).Pad[0x145] = '\0';
  (this->ObjectStorage).Pad[0x146] = '\0';
  (this->ObjectStorage).Pad[0x147] = '\0';
  (this->ObjectStorage).Pad[0x148] = '\0';
  (this->ObjectStorage).Pad[0x149] = '\0';
  (this->ObjectStorage).Pad[0x14a] = '\0';
  (this->ObjectStorage).Pad[0x14b] = '\0';
  (this->ObjectStorage).Pad[0x14c] = '\0';
  (this->ObjectStorage).Pad[0x14d] = '\0';
  (this->ObjectStorage).Pad[0x14e] = '\0';
  (this->ObjectStorage).Pad[0x14f] = '\0';
  (this->ObjectStorage).Pad[0x160] = '\0';
  (this->ObjectStorage).Pad[0x161] = '\0';
  (this->ObjectStorage).Pad[0x162] = '\0';
  (this->ObjectStorage).Pad[0x163] = '\0';
  (this->ObjectStorage).Pad[0x164] = '\0';
  (this->ObjectStorage).Pad[0x165] = '\0';
  (this->ObjectStorage).Pad[0x166] = '\0';
  (this->ObjectStorage).Pad[0x167] = '\0';
  (this->ObjectStorage).Pad[0x168] = '\0';
  (this->ObjectStorage).Pad[0x169] = '\0';
  (this->ObjectStorage).Pad[0x16a] = '\0';
  (this->ObjectStorage).Pad[0x16b] = '\0';
  (this->ObjectStorage).Pad[0x16c] = 0x80;
  (this->ObjectStorage).Pad[0x16d] = '\0';
  (this->ObjectStorage).Pad[0x16e] = '\0';
  (this->ObjectStorage).Pad[0x16f] = '\0';
  (this->ObjectStorage).Pad[0x174] = '\0';
  (this->ObjectStorage).Pad[0x175] = '\0';
  (this->ObjectStorage).Pad[0x176] = '\0';
  (this->ObjectStorage).Pad[0x177] = '\0';
  (this->ObjectStorage).Pad[0x170] = 0xff;
  (this->ObjectStorage).Pad[0x171] = 0xff;
  (this->ObjectStorage).Pad[0x172] = 0xff;
  (this->ObjectStorage).Pad[0x173] = 0xff;
  (this->ObjectStorage).Pad[0x180] = '\0';
  (this->ObjectStorage).Pad[0x181] = '\0';
  (this->ObjectStorage).Pad[0x182] = '\0';
  (this->ObjectStorage).Pad[0x183] = '\0';
  (this->ObjectStorage).Pad[0x184] = '\0';
  (this->ObjectStorage).Pad[0x185] = '\0';
  (this->ObjectStorage).Pad[0x186] = '\0';
  (this->ObjectStorage).Pad[0x187] = '\0';
  (this->ObjectStorage).Pad[400] = '\n';
  (this->ObjectStorage).Pad[0x191] = '\0';
  (this->ObjectStorage).Pad[0x192] = '\0';
  (this->ObjectStorage).Pad[0x193] = '\0';
  (this->ObjectStorage).Pad[0x194] = '\n';
  (this->ObjectStorage).Pad[0x195] = '\0';
  (this->ObjectStorage).Pad[0x196] = '\0';
  (this->ObjectStorage).Pad[0x197] = '\0';
  return this;
}

// DestroyObject @ 14b9e7820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatBookmarkData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatBookmarkData,1> *this)

{
  return;
}

// DestroyObject @ 14b9e7830

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatConversation,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatConversation,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b9e7890

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatCustomData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatCustomData,1> *this)

{
  return;
}

// DestroyObject @ 14b9e78a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatRoomData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatRoomData,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x80] = '\0';
  (this->ObjectStorage).Pad[0x81] = '\0';
  (this->ObjectStorage).Pad[0x82] = '\0';
  (this->ObjectStorage).Pad[0x83] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x78);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x38));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14b9e7900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatUserInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatUserInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b9e7940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChattingTabData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChattingTabData,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14b9e7960

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AirWalkStepInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AirWalkStepInfo,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AirWalkStep,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AirWalkStep,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x60);
  return;
}

// DestroyObject @ 14b9e79a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatBookmarkManager,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatBookmarkManager,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FDS_ChatBookmarkData,1>,int>
            (*(TSharedPtr<FDS_ChatBookmarkData,1> **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b9e79e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatCustomFilter,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatCustomFilter,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b9e7a20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatCustomTabManager,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatCustomTabManager,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  DestructItems<TSharedPtr<FDS_ChatCustomData,1>,int>
            (*(TSharedPtr<FDS_ChatCustomData,1> **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b9e7a60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatRoomManager,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *this)

{
  FDS_ChatRoomManager::~FDS_ChatRoomManager((FDS_ChatRoomManager *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7a70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatUserCache,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ChatUserCache,1> *this)

{
  FDS_ChatUserCache::~FDS_ChatUserCache((FDS_ChatUserCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_MountStepInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_MountStepInfo,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x90);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x50));
  return;
}

// DestroyObject @ 14b9e7ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMAdvancedMsgListener,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMAdvancedMsgListener,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  V2TIMAdvancedMsgListener::~V2TIMAdvancedMsgListener
            ((V2TIMAdvancedMsgListener *)&this->ObjectStorage);
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b9e7af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14b9e7b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMConversationListener,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMConversationListener,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  V2TIMConversationListener::~V2TIMConversationListener
            ((V2TIMConversationListener *)&this->ObjectStorage);
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b9e7b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14b9e7b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMGroupListener,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMGroupListener,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  V2TIMGroupListener::~V2TIMGroupListener((V2TIMGroupListener *)&this->ObjectStorage);
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b9e7b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14b9e7bb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestCreateGroup,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestCreateGroup,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<V2TIMString>::~TDS_V2TIMRequestValueCallback<V2TIMString>
            ((TDS_V2TIMRequestValueCallback<V2TIMString> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7be0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestDeleteConversation,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestDeleteConversation,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7c10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestDismissGroup,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestDismissGroup,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7c40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetConversationList,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetConversationList,1> *this)

{
  TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::
  ~TDS_V2TIMRequestValueCallback<V2TIMConversationResult>
            ((TDS_V2TIMRequestValueCallback<V2TIMConversationResult> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7c50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupMemberList,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupMemberList,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x48));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x48));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::
  ~TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>
            ((TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7cb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupMembersInfo,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupMembersInfo,1> *this)

{
  void *pvVar1;
  
  DestructItems<FString,int>
            (*(FString **)((this->ObjectStorage).Pad + 0x48),
             *(int *)((this->ObjectStorage).Pad + 0x50));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector> *)&this->ObjectStorage
            );
  return;
}

// DestroyObject @ 14b9e7d00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupsInfo,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetGroupsInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetHistoryMessageList,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetHistoryMessageList,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7d60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetJoinedGroupList,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestGetJoinedGroupList,1> *this)

{
  TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7d70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestGetUsersInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestGetUsersInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7da0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestJoinGroup,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestJoinGroup,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7dd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestKickGroupMember,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestKickGroupMember,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7e00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestLogin,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestLogin,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7e30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestLogout,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestLogout,1> *this)

{
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7e40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestMarkConversation,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestMarkConversation,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::
  ~TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>
            ((TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7e70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestMarkMessageAsRead,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestMarkMessageAsRead,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7ea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestQuitGroup,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestQuitGroup,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7ed0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestSendMessage,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestSendMessage,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestSendCallback::~FDS_V2TIMRequestSendCallback
            ((FDS_V2TIMRequestSendCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7f10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestSetCustomInfo,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestSetCustomInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7f40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestSetGroupInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestSetGroupInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7f80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestSetSelfInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_V2TIMRequestSetSelfInfo,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b9e7fb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_V2TIMRequestTransferGroupOwner,1>::
DestroyObject(TIntrusiveReferenceController<FDS_V2TIMRequestTransferGroupOwner,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback
            ((FDS_V2TIMRequestCallback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ba3cf30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AchievementCategorySymbol,1>::
DestroyObject(TIntrusiveReferenceController<FDS_AchievementCategorySymbol,1> *this)

{
  return;
}

// DestroyObject @ 14ba3cf40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_QuickSlotData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_QuickSlotData,1> *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 0x28),*(int *)((this->ObjectStorage).Pad + 0x30));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x20));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ba3cfb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_RingCommandSlotData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_RingCommandSlotData,1> *this)

{
  return;
}

// DestroyObject @ 14ba3cfc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_SwimStepInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_SwimStepInfo,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x90] = '\0';
  (this->ObjectStorage).Pad[0x91] = '\0';
  (this->ObjectStorage).Pad[0x92] = '\0';
  (this->ObjectStorage).Pad[0x93] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x88);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x48);
  return;
}

// DestroyObject @ 14ba9e410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_EquipmentItemCharacterData,1>::
DestroyObject(TIntrusiveReferenceController<FDS_EquipmentItemCharacterData,1> *this)

{
  FDS_EquipmentItemCharacterData::~FDS_EquipmentItemCharacterData
            ((FDS_EquipmentItemCharacterData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ba9e420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ItemTypeSymbolData,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ItemTypeSymbolData,1> *this)

{
  return;
}

// DestroyObject @ 14ba9e430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableAttackMe,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableAttackMe,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableCriminalGrade,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableCriminalGrade,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e470

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableForceAttack,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableForceAttack,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableNPC,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableNPC,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e4b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableOwnerMonsterAttacker,1>::
DestroyObject(TIntrusiveReferenceController<FDS_AttackableOwnerMonsterAttacker,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e4d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackablePKGuard,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackablePKGuard,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e4f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackablePKZone,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackablePKZone,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e510

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableParty,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableParty,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14ba9e530

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_AttackableTeamMode,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_AttackableTeamMode,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_AttackableHandler__6B_;
  return;
}

// DestroyObject @ 14bb02820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ViewModelContext,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ViewModelContext,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_ViewModelContext__6B_;
  return;
}

// DestroyObject @ 14bb02840

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexPattern,1>::DestroyObject
          (TIntrusiveReferenceController<FRegexPattern,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14bb5d710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_NavigationConfig,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_NavigationConfig,1> *this)

{
  FNavigationConfig::~FNavigationConfig((FNavigationConfig *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bb5d720

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<server_msg::ServerMessages,1>::DestroyObject
          (TIntrusiveReferenceController<server_msg::ServerMessages,1> *this)

{
  server_msg::ServerMessages::~ServerMessages((ServerMessages *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bb5d730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<server_msg_twoway::ServerMessagesTwoway,1>::
DestroyObject(TIntrusiveReferenceController<server_msg_twoway::ServerMessagesTwoway,1> *this)

{
  server_msg_twoway::ServerMessagesTwoway::~ServerMessagesTwoway
            ((ServerMessagesTwoway *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bbf0210

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<client_msg::ClientMessages,1>::DestroyObject
          (TIntrusiveReferenceController<client_msg::ClientMessages,1> *this)

{
  client_msg::ClientMessages::~ClientMessages((ClientMessages *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc96670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SDS_TableViewBase<SCommonTileView,UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0xa00));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa08);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0xa00));
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc966c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SDS_TableViewBase<SCommonTreeView,UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0xaf0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xaf8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0xaf0));
  STreeView<UObject_*>::~STreeView<UObject_*>((STreeView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc96710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_TableViewBase<SListView,UObject_*>,1>::
DestroyObject(TIntrusiveReferenceController<SDS_TableViewBase<SListView,UObject_*>,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x9f0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x9f8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x9f0));
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc96760

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_ColorSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_ColorSlider,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc967a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryHorizontal,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_DynamicEntryHorizontal,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc967b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryRadial,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_DynamicEntryRadial,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            (*(TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> **)
              ((this->ObjectStorage).Pad + 0x238),*(int *)((this->ObjectStorage).Pad + 0x240));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x238);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc96810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryVertical,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_DynamicEntryVertical,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bc96820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UDS_SSlider,1>::DestroyObject
          (TIntrusiveReferenceController<UDS_SSlider,1> *this)

{
  UDS_SSlider::~UDS_SSlider((UDS_SSlider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14bcefa00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_DragDropEventField,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_DragDropEventField,1> *this)

{
  FPointerEvent::~FPointerEvent((FPointerEvent *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14bcefa10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ItemSlotInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_ItemSlotInfo,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_SlotInfoBase__6B_;
  return;
}

// DestroyObject @ 14bd538c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_NpcShopItemSlotInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_NpcShopItemSlotInfo,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_SlotInfoBase__6B_;
  return;
}

// DestroyObject @ 14bd538e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateBrush,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateBrush,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xa0));
  return;
}

// DestroyObject @ 14bd53900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_EmoteImage,1>::DestroyObject
          (TIntrusiveReferenceController<SDS_EmoteImage,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14be1a990

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_RingCmdSlotInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_RingCmdSlotInfo,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_SlotInfoBase__6B_;
  return;
}

// DestroyObject @ 14bee45c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_MiniGame_KeyTimeAttack_KeyData,1>::
DestroyObject(TIntrusiveReferenceController<FDS_MiniGame_KeyTimeAttack_KeyData,1> *this)

{
  FDS_MiniGame_KeyTimeAttack_KeyData::~FDS_MiniGame_KeyTimeAttack_KeyData
            ((FDS_MiniGame_KeyTimeAttack_KeyData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14c0116e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_CharacterSlotInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FDS_CharacterSlotInfo,1> *this)

{
  longlong *plVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_CharacterSlotInfo__6B_;
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDS_SlotInfoBase__6B_;
  return;
}


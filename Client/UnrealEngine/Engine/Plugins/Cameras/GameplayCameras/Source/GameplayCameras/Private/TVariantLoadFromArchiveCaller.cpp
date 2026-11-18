// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// Load @ 14d5b5730

void __cdecl
UE::Core::Private::
TVariantLoadFromArchiveCaller<UE::Cameras::FCameraDebugClock::FAngleValue,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>_>
::Load(FArchive *param_1,
      TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
      *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = param_2->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  param_2->_padding_ = 0;
  param_2->TypeIndex = '\x01';
  plVar2 = (longlong *)**(longlong **)&param_1->field_0x8;
  if (plVar2 + 1 <= (longlong *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->_padding_ = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d5b57e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
  return;
}

// Load @ 14d5b5810

void __cdecl
UE::Core::Private::
TVariantLoadFromArchiveCaller<UE::Cameras::FCameraDebugClock::FVectorValue,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>_>
::Load(FArchive *param_1,
      TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
      *param_2)

{
  byte bVar1;
  code *pcVar2;
  TVector2<double> TVar3;
  bool bVar4;
  
  bVar1 = param_2->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  param_2->_padding_ = 0;
  param_2->_padding_ = 0;
  param_2->_padding_ = 0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  param_2->_padding_ = 0;
  *(TVector2<double>_u_0 *)param_2 = TVar3.field0_0x0;
  param_2->TypeIndex = '\0';
  UE::Cameras::operator<<(param_1,(FVectorValue *)param_2);
  return;
}


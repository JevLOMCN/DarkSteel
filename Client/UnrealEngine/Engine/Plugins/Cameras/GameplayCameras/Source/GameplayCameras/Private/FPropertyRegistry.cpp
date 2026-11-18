// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_> @ 14d5ede20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<FCameraFramingZone> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
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
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<FCameraFramingZone> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}


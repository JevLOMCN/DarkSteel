// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146fe9500

UClass * __cdecl UAISense_Team::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Team",
               &Z_Registration_Info_UClass_UAISense_Team.InnerSingleton,
               StaticRegisterNativesUAISense_Team,0xa0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAISense_Team>,
               InternalVTableHelperCtorCaller<UAISense_Team>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Team.InnerSingleton;
}

// UAISense_Team @ 146feba60

UAISense_Team * __thiscall UAISense_Team::UAISense_Team(UAISense_Team *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Team__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// UAISense_Team @ 146febaa0

UAISense_Team * __thiscall
UAISense_Team::UAISense_Team(UAISense_Team *this,FObjectInitializer *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Team__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// ~UAISense_Team @ 146fec750

void __thiscall UAISense_Team::~UAISense_Team(UAISense_Team *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Team__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAISense::~UAISense((UAISense *)this);
  return;
}

// GetPrivateStaticClass @ 146ff07b0

UClass * __cdecl UAISense_Team::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Team",
               &Z_Registration_Info_UClass_UAISense_Team.InnerSingleton,
               StaticRegisterNativesUAISense_Team,0xa0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAISense_Team>,
               InternalVTableHelperCtorCaller<UAISense_Team>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Team.InnerSingleton;
}

// RegisterEvent @ 146ff2910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Team::RegisterEvent(UAISense_Team *this,FAITeamStimulusEvent *param_1)

{
  int *piVar1;
  TArray<FAITeamStimulusEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FAITeamStimulusEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->RegisteredEvents;
  pFVar3 = (FAITeamStimulusEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RegisteredEvents).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RegisteredEvents).ArrayNum;
  piVar1 = &(this->RegisteredEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RegisteredEvents).ArrayNum = iVar6 + 1;
  FAITeamStimulusEvent::FAITeamStimulusEvent
            ((FAITeamStimulusEvent *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x50),
             param_1);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// StaticRegisterNativesUAISense_Team @ 146ff3c40

void __cdecl UAISense_Team::StaticRegisterNativesUAISense_Team(void)

{
  return;
}

// Update @ 146ff3df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UAISense_Team::Update(UAISense_Team *this)

{
  double dVar1;
  int iVar2;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTVar3;
  FAIStimulus *pFVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  double local_a8;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FAIStimulus local_88;
  
  pTVar3 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
            *)UAISense::GetListeners((UAISense *)this);
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)&local_88,pTVar3);
  local_90 = 0;
  stack0xffffffffffffff48 = local_88.StimulusLocation.field0_0x0._0_16_;
  auStack_c0._0_8_ = local_88._8_8_;
  local_a8 = local_88.StimulusLocation.field0_0x0._s_0.Z;
  pTStack_a0 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                *)local_88.ReceiverLocation.field0_0x0._s_0.X;
  uVar5 = local_88.StimulusLocation.field0_0x0._8_8_ >> 0x20;
  local_98 = pTVar3;
  if (local_88.StimulusLocation.field0_0x0._12_4_ <
      *(int *)(local_88.StimulusLocation.field0_0x0._0_8_ + 0x18)) {
    do {
      lVar8 = (longlong)(int)uVar5 * 0x60 + *(longlong *)local_88._0_8_;
      if ((*(uint *)(lVar8 + 0x10) >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0)
      {
        iVar2 = (this->RegisteredEvents).ArrayNum;
        pFVar6 = (this->RegisteredEvents).AllocatorInstance.Data;
        pFVar7 = pFVar6 + (longlong)iVar2 * 0x50;
        while( true ) {
          if ((this->RegisteredEvents).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FAITeamStimulusEvent,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar6 == pFVar7) break;
          if ((*(FScriptContainerElement *)(lVar8 + 0x48) == pFVar6[0x38]) &&
             (dVar10 = *(double *)(lVar8 + 0x28) - *(double *)(pFVar6 + 0x28),
             dVar11 = *(double *)(lVar8 + 0x20) - *(double *)(pFVar6 + 0x20),
             dVar1 = *(double *)(lVar8 + 0x18) -
                     (((TVector<double>_u_0 *)&pFVar6[0x18].field_0x0)->_s_0).X,
             dVar11 * dVar11 + dVar1 * dVar1 + dVar10 * dVar10 <=
             (double)*(float *)&pFVar6[0x30].field_0x0)) {
            local_res10 = 0;
            pFVar4 = FAIStimulus::FAIStimulus
                               (&local_88,(UAISense *)this,*(float *)(pFVar6 + 0x3c),
                                (TVector<double> *)pFVar6,(TVector<double> *)(pFVar6 + 0x18),
                                SensingSucceeded,(FName)0x0);
            pFVar4->Age = *(float *)(pFVar6 + 0x34);
            FPerceptionListener::RegisterStimulus
                      ((FPerceptionListener *)(lVar8 + 8),*(AActor **)&pFVar6[0x48].field_0x0,pFVar4
                      );
          }
          pFVar6 = pFVar6 + 0x50;
        }
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar5 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar2 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_98->HashSize < iVar2)) || (iVar2 < local_98->HashSize)) {
        local_98->HashSize = iVar2;
        TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
  (this->RegisteredEvents).ArrayNum = 0;
  if ((this->RegisteredEvents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->RegisteredEvents).AllocatorInstance,0,
               &(this->RegisteredEvents).ArrayMax);
  }
  return UAISense::SuspendNextUpdate;
}


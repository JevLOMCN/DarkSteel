// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 4

// DestroyObject @ 14e295380

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>::
DestroyObject(TReferenceControllerWithDeleter<FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>
              *this)

{
  FClientOodleNetAnalyticsData *pFVar1;
  
  pFVar1 = this->Object;
  if (*(longlong *)&pFVar1->field_0x18 != 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2953aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  return;
}

// DestroyObject @ 14e2953c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>::DestroyObject
          (TReferenceControllerWithDeleter<FOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1> *this)

{
  FOodleNetAnalyticsData *pFVar1;
  
  pFVar1 = this->Object;
  if (*(longlong *)&pFVar1->field_0x18 != 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2953ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  return;
}

// DestroyObject @ 14e295400

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOodleNetworkDictionary,SharedPointerInternals::DefaultDeleter<FOodleNetworkDictionary>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOodleNetworkDictionary,SharedPointerInternals::DefaultDeleter<FOodleNetworkDictionary>,1>
                *this)

{
  FOodleNetworkDictionary *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FOodleNetworkDictionary *)0x0) {
    FOodleNetworkDictionary::~FOodleNetworkDictionary(this_00);
    ::operator_delete(this_00,0x38);
    return;
  }
  return;
}

// DestroyObject @ 14e295440

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<OodleNetworkHandlerComponent,SharedPointerInternals::DefaultDeleter<OodleNetworkHandlerComponent>,1>
::DestroyObject(TReferenceControllerWithDeleter<OodleNetworkHandlerComponent,SharedPointerInternals::DefaultDeleter<OodleNetworkHandlerComponent>,1>
                *this)

{
  OodleNetworkHandlerComponent *pOVar1;
  
  pOVar1 = this->Object;
  if (pOVar1 != (OodleNetworkHandlerComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e295451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pOVar1->_padding_)(pOVar1,1);
    return;
  }
  return;
}


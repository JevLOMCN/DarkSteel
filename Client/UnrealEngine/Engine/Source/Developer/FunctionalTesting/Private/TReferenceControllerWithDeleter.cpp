// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 7

// DestroyObject @ 148c8d000

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationTestScreenshotEnvSetup,SharedPointerInternals::DefaultDeleter<FAutomationTestScreenshotEnvSetup>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationTestScreenshotEnvSetup,SharedPointerInternals::DefaultDeleter<FAutomationTestScreenshotEnvSetup>,1>
                *this)

{
  FAutomationTestScreenshotEnvSetup *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FAutomationTestScreenshotEnvSetup *)0x0) {
    FAutomationTestScreenshotEnvSetup::~FAutomationTestScreenshotEnvSetup(this_00);
    ::operator_delete(this_00,0x1b8);
    return;
  }
  return;
}

// DestroyObject @ 148c8d040

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationViewExtension>,1>
                *this)

{
  FAutomationViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c8d060

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStartFTestOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestOnMap>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStartFTestOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestOnMap>,1>
                *this)

{
  FStartFTestOnMap *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStartFTestOnMap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c8d080

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStartFTestsOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestsOnMap>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStartFTestsOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestsOnMap>,1>
                *this)

{
  FStartFTestsOnMap *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStartFTestsOnMap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c8d0a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTriggerFTest,SharedPointerInternals::DefaultDeleter<FTriggerFTest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTriggerFTest,SharedPointerInternals::DefaultDeleter<FTriggerFTest>,1>
                *this)

{
  FTriggerFTest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTriggerFTest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d0b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c8d0c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTriggerFTests,SharedPointerInternals::DefaultDeleter<FTriggerFTests>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTriggerFTests,SharedPointerInternals::DefaultDeleter<FTriggerFTests>,1>
                *this)

{
  FTriggerFTests *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTriggerFTests *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c8d0e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitForFTestsToFinish,SharedPointerInternals::DefaultDeleter<FWaitForFTestsToFinish>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWaitForFTestsToFinish,SharedPointerInternals::DefaultDeleter<FWaitForFTestsToFinish>,1>
                *this)

{
  FWaitForFTestsToFinish *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWaitForFTestsToFinish *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8d0f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

